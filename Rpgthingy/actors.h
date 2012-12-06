
 BITMAP *shadow;
void loadch(BITMAP *buffer)
{
     player.itemout=false;
     player.activate=false;
     
      player.speed=2;
                 player.x=SW/2;
                 player.y=SH/2;
            player.r=20;     
           player.dTimer=0;     
           
            player.SSY=0;
            player.bitmap=load_bitmap("./Images/sofia.bmp", NULL);
            
             shadow=load_bitmap("./Images/shadow.bmp", NULL);
                
              test1.itemout=false;
     test1.activate=false;
      test1.speed=2;
      test1.isMoving=false;
                 test1.x=1325-test1.r;
                 test1.y=1015;
            test1.r=20;     
            test1.dir=2;
           test1.isNPC=true;
            test1.SSY=0;
            test1.SSX=0;
            test1.bitmap=load_bitmap("./Images/player.bmp", NULL);
           
           
            
            travelroute[0].x_1=600;
            travelroute[0].x_2=600;
            travelroute[0].y_1=-100;
            travelroute[0].y_2=200;
            travelroute[0].isNPC=true;
            travelroute[0].isTravelroute=true;
            
             travelroute[1].x_1=501;
            travelroute[1].x_2=650;
            travelroute[1].y_1=200;
            travelroute[1].y_2=200;
            travelroute[1].isNPC=true;
            travelroute[1].isTravelroute=true;
            
            travelroute[2].x_1=500;
            travelroute[2].x_2=500;
            travelroute[2].y_1=100;
            travelroute[2].y_2=200;
            travelroute[2].isNPC=true;
            travelroute[2].isTravelroute=true;
            
            travelroute[3].x_1=500;
            travelroute[3].x_2=500;
            travelroute[3].y_1=201;
            travelroute[3].y_2=250;
            travelroute[3].isNPC=true;
            travelroute[3].isTravelroute=true;
            
            
            
            
        actor[0]=player;
        actor[1]=test1;
     }
