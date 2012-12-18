#include <allegro.h>

#include <iostream>
#include <string>
#include <fstream>

#include <declarations.h>
#include <config.h>

using namespace std;
#include <worldfuncs.h>
#include <player.h>
#include <weapons.h>
#include <objectstruct.h>
#include <objects.h>       
#include <animations.h>
#include <loadsave.h>
 
  void SETUP(BITMAP *buffer)
  {
   
   
 clear_to_color(screen, makecol(255, 255, 255));
 
  textprintf_ex(screen,font,510,SH/2, makecol(255, 0, 0), -1, "Loading textures...", NULL);
load_bitmaps(buffer);

clear_to_color(screen, makecol(255, 255, 255));

  textprintf_ex(screen,font,510,SH/2, makecol(255, 0, 0), -1, "Loading models...", NULL);

load_flora(buffer);
load_architecture(buffer);
load_walls(buffer);
load_furniture(buffer);
load_weapons(buffer);
load_hud(buffer);

clear_to_color(screen, makecol(255, 255, 255));

  textprintf_ex(screen,font,510,SH/2, makecol(255, 0, 0), -1, "Loading characters...", NULL);
    loadch(buffer);

clear_to_color(screen, makecol(255, 255, 255));
       
         textprintf_ex(screen,font,510,SH/2, makecol(255, 0, 0), -1, "Loading saved game...", NULL);

    }

void drawworld (void)
      {
           i++;
          
clear_bitmap(buffer);

      FNPCS.open("Data/NPCS/NPCS.dat");
    
     FOBJECTS.open("Data/Objects/FObjects.dat");
     
     drawobjects(buffer);
            drawplayers(); 
           
          
    FNPCS.close();      
              
                                   
           hud[0].draw(); 
            hud[1].draw(); 
hud[2].draw(); 

 FOBJECTS.close();
 
        textprintf_ex(buffer,font,400,60,makecol(255,0,0), 0, " x: %i", player.x-cam+750+540);
textprintf_ex(buffer,font,480,60,makecol(255,0,0), 0," y: %i", player.y-cam2+835+555);

textprintf_ex(buffer,font,200,0,makecol(255,0,0), 0," S-Time %i", starttimer);

textprintf_ex(buffer,font,400,33,makecol(255,0,0), 0," SaveTimer: %i", savetimer);
textprintf_ex(buffer,font,400,43,makecol(255,0,0), 0," B: %i", b);


       
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
