#include <SETUP.h>   
            
using namespace std;
int main(){
    
 configF(buffer); 
  
    allegro_init();
    install_keyboard();
    install_mouse();
    install_timer();

LOCK_VARIABLE(fpsclock);
	LOCK_VARIABLE(cday_i);
	LOCK_VARIABLE(load_time);
	
	
	install_int_ex(timerfunc, MSEC_TO_TIMER(TIME_2));
	
  mouse_x=20;
 mouse_y=20;
 mouse_b;
 set_mouse_speed(1, 3);
 
    set_color_depth (colordepth);
    set_gfx_mode( GFX_AUTODETECT_WINDOWED, SW, SH, 0, 0);
    set_window_title("Tjocka katter.");
    
    
    buffer = create_bitmap (SW, SH);
    
    load_bitmaps(buffer);
    
 

     

      


          //  load_NPC.open("Data/NPCS/NPCS.dat");
            
            //load_NPC >> NPC[0].name;
            //load_NPC >> NPC[0].HP;
            
            //load_NPC.close();
            
            SETUP(buffer);
            
            if (menu.LOAD==true)
            {
                                
                                 clear_to_color(screen, makecol(255, 255, 255));
 
  textprintf_ex(screen,font,510,SH/2, makecol(255, 0, 0), -1, "Loading saved game...", NULL);
  
       loadF(buffer);   
       load_npcs(buffer);
       
       string line;
       
ifstream FOBJECTS;
  FOBJECTS.open("Data/Objects/FObjects.dat");
    getline (FOBJECTS, line);
  str=line;
  FOBJECTS.close();
}
if (menu.LOAD==true || menu.NEW==true)
{
                    
                    GAME_RUNNING=true;  
                    }

while (GAME_RUNNING==true)
{

      
if (key[KEY_T])
{
               t_speed=50;
                TIME_2=t_speed*100;
                TIME=1/t_speed*10;
               
               install_int_ex(timerfunc, MSEC_TO_TIMER(TIME_2));
               }
   
                    
     if (GAME_PAUSE!=true)
     {
     schedules(buffer);
     
       
      timer1F(buffer);
      }
      drawworld();  
      
      if (tclockH>=7 && tclockH<=15)
      rest(8);
      else
      rest(5);



                                     
commands(buffer);

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
