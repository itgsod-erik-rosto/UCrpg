#include <SETUP.h>   
            
 
using namespace std;
int main(){
    
   
 
 

 configF(buffer);   
    

                   
 
    allegro_init();
    install_keyboard();
    install_mouse();
    install_timer();


LOCK_VARIABLE(fpsclock);
	LOCK_VARIABLE(tclockH);
	LOCK_VARIABLE(tclockM);
	LOCK_VARIABLE(cday_i);
	LOCK_VARIABLE(load_time);
	LOCK_FUNCTION(timerfunc);
	install_int_ex(timerfunc, BPS_TO_TIMER(1));//The timer in "timerfunc" (tclock) is in full seconds. This is the game time.


     
  mouse_x=20;
 mouse_y=20;
 mouse_b;
 set_mouse_speed(1, 3);
 
    set_color_depth (colordepth);
    set_gfx_mode( GFX_AUTODETECT_WINDOWED, SW, SH, 0, 0);
    set_window_title("Tjocka katter.");
    
  
    buffer = create_bitmap (SW, SH);
    
    background=load_bitmap("Data/Images/worldmap.bmp", NULL);
    load_bitmaps(buffer);
    
     
     


 

SETUP(buffer);
GAME_RUNNING=true;

 
      
       loadF(buffer);   
       
     
while (GAME_RUNNING==true)
{
    
    
       
     schedules(buffer);
       drawworld();  
      
      
      
      timer1F(buffer);
      rest(5);



            
          
 
            
if (quit!=true)  
{
Wclock(buffer);
fpscounter(buffer);
}

GAME_EXIT(buffer);



if (quit==true)
{
    
saveF(buffer);


 
cache.open("Data/Objects/objects.dat");
cache.close();


            }
            
blit (buffer, screen, 0, 0, 0, 0, SW, SH);
clear_bitmap(buffer);

}


    return 0;
    
}   
END_OF_MAIN();
