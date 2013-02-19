#include <allegro.h>
//#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>
#include <declarations.h>
#include <config.h>

using namespace std;
struct WORLD
{
       char* ID;
       
       };
       
struct VAR
         {
                string varID;
                float varvalue;
                
                int WIDTH;
                int HEIGHT;
                int DEPTH;
                
                bool LOAD;
                bool SAVE;
                bool RUNNING;
                bool PAUSE;
                bool NEW;
                bool QUIT;
                bool LOCK;
                
         void EXIT(BITMAP *buffer);
                void varfunc();   
                             
                }ofX, ofY, currentcell, save_delete, NPCS_delete, GAME, menu, SCREEN;
                
                void VAR::varfunc()
                {       
    if (var==varID)
    {
                varvalue=value;   
                
                   }
                     }
                     
                     void VAR::EXIT(BITMAP *buffer)
{
                     
                       if (savetimer<=2 && !key[KEY_LSHIFT])
                       {
                                        
                                        if (QUIT!=true)
                                        {
                       savetimer=0;
                QUIT=true;
                }
                
                
                   if (savetimer>=2)
                   RUNNING=false;
                   }
                   
                   else if (key[KEY_LSHIFT])
                   RUNNING=false;

}

                     void load_vars()
                     {
                          ofX.varID="ofX";
                      ofX.varvalue=-655;


                          ofY.varID="ofY";
                          ofY.varvalue=-540;
                           
                        currentcell.varID="current_cell";
                        
                        save_delete.varID="deletesave";
                        
                        NPCS_delete.varID="deletenpcs";
                        
                        GAME.RUNNING=false;
                        GAME.PAUSE=false;
                        
                        menu.LOAD=true;
                        menu.RUNNING=true;
                        
                        SCREEN.LOCK=true;
                        SCREEN.WIDTH=1080;
                        SCREEN.HEIGHT=670;
                        SCREEN.DEPTH=32;
                          }



#include <weapons.h>

#include <player.h>

#include <animations.h>

#include <messagebox.h>   
#include <objectstruct.h>

#include <objects.h>    

#include <loadsave.h>
#include <menu.h>
 
  void SETUP(BITMAP *buffer)
  {
   TESTAN=load_bitmap("Data/Images/Characters/sofia.bmp", NULL);

 clear_to_color(screen, makecol(255, 255, 255));
 
  textprintf_ex(screen,font,510,SH/2, makecol(255, 0, 0), -1, "Loading textures...", NULL);
load_bitmaps(buffer);

clear_to_color(screen, makecol(255, 255, 255));

  textprintf_ex(screen,font,510,SH/2, makecol(255, 0, 0), -1, "Loading models...", NULL);

load_flora(buffer);
load_architecture(buffer);
load_furniture(buffer);
load_weapons(buffer);
load_walls(buffer);
load_hud(buffer);
load_messageboxes(buffer);

clear_to_color(screen, makecol(255, 255, 255));

  textprintf_ex(screen,font,510,SH/2, makecol(255, 0, 0), -1, "Loading animations...", NULL);
load_anims();

clear_to_color(screen, makecol(255, 255, 255));

  textprintf_ex(screen,font,510,SH/2, makecol(255, 0, 0), -1, "Loading characters...", NULL);
    
    loadch(buffer);
    
    
    
    

//clear_to_color(screen, makecol(255, 255, 255));
       
        // textprintf_ex(screen,font,510,SH/2, makecol(255, 0, 0), -1, "Loading saved game...", NULL);


    }
#include <worldfuncs.h>
void drawworld (void)
      {
           i++;
          
clear_bitmap(buffer);


          if (GAME.QUIT==true)
     FOBJECTS.open("Data/Objects/FObjects.dat");
     
     if (GAME.QUIT==true)
     FNPCS.open("Data/NPCS/NPCS.dat");

     
    

     drawobjects(buffer);
            drawplayers(); 
            
            draw_messageboxes(buffer);
             

     if (GAME.QUIT==true)       
           FNPCS.close();   
          
       
              
          if (DISABLE_HUD!=true)
          {                         
           hud[0].draw(); 
            hud[1].draw(); 
hud[2].draw(); 
}

       if (GAME.QUIT==true)
 FOBJECTS.close();
 
 
 
 
        textprintf_ex(buffer,font,400,60,makecol(255,0,0), 0, " x: %i", player.x-cam+750+540);
textprintf_ex(buffer,font,480,60,makecol(255,0,0), 0," y: %i", player.y-cam2+835+555);

textprintf_ex(buffer,font,200,0,makecol(255,0,0), 0," S-Time %i", starttimer);

textprintf_ex(buffer,font,400,33,makecol(255,0,0), 0," SaveTimer: %i", savetimer);
textprintf_ex(buffer,font,400,43,makecol(255,0,0), 0," B: %i", b);


 
}

      void enablemouse(BITMAP *buffer)
       {
                           if (mouse_x!=SW/2 && mouse_y!=SH/2)
     circlefill(buffer, mouse_x, mouse_y, 2, makecol(255,0,0));
}
void timerfunc(void)
                                              {
                                                               
                                                               fpsclock+=1;
                                                               if (fpsclock==2)
                                                               {
                                                                              
                                                                              fps1=0; 
                                                               fpsclock=0;
                                                               }
                                                               if (GAME.PAUSE!=true)
                                                               {
                                                   tclockM+=1;
                                                   if (tclockM>=60)
                                                   {
                                                                   tclockH+=1;
                                                   tclockM=0;
                                                   }
                                                   if (tclockH>=24)
                                                   {
                                                                   cday_i+=1;
                                                   tclockH-=24;
                                                   }
                                                   }
       
                                            
                                                   }
