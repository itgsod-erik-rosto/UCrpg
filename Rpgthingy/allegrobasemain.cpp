#include <SETUP.h>   
        
                   
using namespace std;
         
int main(){
    
 configF(buffer); 
  
    allegro_init();
    install_keyboard();
    install_mouse();
    install_timer();
    install_sound(DIGI_AUTODETECT, MIDI_AUTODETECT, "yo");

    LOCK_VARIABLE(fpsclock);
	LOCK_VARIABLE(cday_i);
	LOCK_VARIABLE(load_time);
	
	
	install_int_ex(timerfunc, MSEC_TO_TIMER(TIME_2));
	
  mouse_x=20;
 mouse_y=20;
 mouse_b;
 set_mouse_speed(1, 3);
 
 load_vars();
    set_color_depth (SCREEN.DEPTH);
    set_gfx_mode( GFX_AUTODETECT_WINDOWED, SCREEN.WIDTH, SCREEN.HEIGHT, 0, 0);
    set_window_title("Tjocka katter.");
    
    
    
    
    buffer = create_bitmap (SCREEN.WIDTH, SCREEN.HEIGHT);
    MAP = create_bitmap (SCREEN.WIDTH, SCREEN.HEIGHT);
    
    load_bitmaps(buffer);
    
    

            
            SETUP(buffer);
            
            
            
                    
                    while (GAME.RUNNING==true || menu.RUNNING==true)
{
                    commands(buffer);
                    
                    menuF(buffer);


if (GAME.RUNNING==true)
{
      
                    if (key[KEY_G])
                    {   
                        SAMPLE *sample = load_wav("Data/Sound/Test/G.wav");
                         int sound = play_sample(sample, 255, 0, 2000, 0);

                                   }
                                   
     if (GAME.PAUSE!=true)
     {
     //schedules(buffer);  
      timer1F(buffer);
      }
      drawworld();  
        if (key[KEY_J])
        test.playanimation();
        if (key[KEY_C] && consoleactive!=true)
        {
                       consoleactive=true;
                       }
                       if (consoleactive==true)
                       {
         
         consoledat.open(".././Rpgthingy/console.dat");
            
    
         system("Data\\ucrpgconsole.exe");
 
 getline(consoledat, var1);
 var = (consoledat, var1);
 
 consoledat >> value1;
 value = (consoledat, value1);

            
            vfunc(buffer);
            
    consoledat.close();         
   
            
    
    rest(300);     
            
         consoleactive=false;
         }
         
            
 
             
//if (var!="")
//textprintf_ex(buffer,font,400,630, makecol(255, 0, 0), -1, "var: %s", var);
textprintf_ex(buffer,font,400,640, makecol(255, 0, 0), -1, "value: %i", value);

      if (tclockH>=7 && tclockH<=15)
      rest(8);
      else
      rest(5);


if (save_delete.varvalue==1)
{
               remove("Data/Save/save.dat");
               }           
               if (NPCS_delete.varvalue==1)
               {
                                           remove("Data/NPCS/NPCS.dat");
                                           }                


if (GAME.QUIT!=true)  
{
                 
Wclock(buffer);
fpscounter(buffer);
}

if (key[KEY_ESC])
GAME.EXIT(buffer);


if (GAME.QUIT==true)
{
                    savetimer+=2;
                    
                    clear_to_color(buffer, makecol(50, 50, 50));
                       textprintf_ex(buffer,font,510-40,20, makecol(255, 0, 0), -1, "%i", savetimer);
                       textprintf_ex(buffer,font,510-40,20, makecol(255, 0, 0), -1, "  %c Finished", 37);
                    textprintf_ex(buffer,font,400,SH/2, makecol(255, 0, 0), -1, "Waiting for the game to save...", NULL);
                    
                
                    
    GAME.SAVE=true;
    
fpscounter(buffer); 
               
            }      
                  
}
if (menu.RUNNING==true)
{
                       if (key[KEY_ESC])
                       {
                       GAME.RUNNING=false;
                       menu.RUNNING=false;
                       }
                       }
enablemouse(buffer);
                        
            if (!key[KEY_M])
            {
blit (buffer, screen, 0, 0, 0, 0, SCREEN.WIDTH, SCREEN.HEIGHT);

clear_bitmap(buffer);
}
else if (key[KEY_M])
{
blit (map, MAP, 0, 0, 0, 0, SCREEN.WIDTH, SCREEN.HEIGHT);
blit (MAP, screen, 0, 0, 0, 0, SCREEN.WIDTH, SCREEN.HEIGHT);

clear_bitmap(MAP);
}
                       }
    return 0;   
}   
END_OF_MAIN();
