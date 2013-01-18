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
    MAP = create_bitmap (SW, SH);
    
    load_bitmaps(buffer);
    
    
            
            SETUP(buffer);
            
            if (menu.LOAD==true)
            {
  GAME_LOAD=true;
}

if (menu.LOAD==true || menu.NEW==true)
{       
                    GAME_RUNNING=true;  
                    }

while (GAME_RUNNING==true)
{
   
                    
     if (GAME_PAUSE!=true)
     {
     schedules(buffer);  
      timer1F(buffer);
      }
      drawworld();  
        
        if (key[KEY_C])
        {
                       consoleactive=true;
                       }
                       if (consoleactive==true)
                       {
        consoledat.open("/../console.dat");
    
         system("Data\\ucrpgconsole.exe");
         
         consoledat >> var;
         consoledat >> value;
         consoledat.close();
         
         var=value+1;
         
         consoleactive=false;
                                               }

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
    GAME_SAVE=true;
    

            }            
            if (!key[KEY_M])
            {
blit (buffer, screen, 0, 0, 0, 0, SW, SH);

clear_bitmap(buffer);
}
else if (key[KEY_M])
{
blit (map, MAP, 0, 0, 0, 0, SW, SH);
blit (MAP, screen, 0, 0, 0, 0, SW, SH);

clear_bitmap(MAP);
}
}
    return 0;   
}   
END_OF_MAIN();
