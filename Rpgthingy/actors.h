

void loadch(BITMAP *buffer)
{
     player.itemout=false;
     player.activate=false;
     
      player.speed=2;
                 player.x=SW/2;
                 player.y=SH/2;
            player.r=20;     
           player.dTimer=0;     
           
           player.HP=100;
            player.SSY=0;
            player.bitmap=load_bitmap("Data/Images/sofia.bmp", NULL);
            player.name="Player";
             shadow=load_bitmap("Data/Images/shadow.bmp", NULL);
                player.fnpcsi=0;
                
                NPC[2].HP=100;
              NPC[2].itemout=false;
     NPC[2].activate=false;
     NPC[2].isrunning=false;
      NPC[2].speed=2;
      NPC[2].isMoving=false;
                 NPC[2].x=1360;
                 NPC[2].y=460;
            NPC[2].r=20;     
            NPC[2].dir=3;
           NPC[2].isNPC=true;
            NPC[2].SSY=0;
            NPC[2].SSX=0;
            NPC[2].bitmap=load_bitmap("Data/Images/player.bmp", NULL);
           NPC[2].name="NPC1";
           
           NPC[0].HP=100;
              NPC[0].itemout=false;
     NPC[0].activate=false;
     NPC[0].isrunning=false;
      NPC[0].speed=2;
      NPC[0].isMoving=false;
                 NPC[0].x=1360;
                 NPC[0].y=460-600;
            NPC[0].r=20;     
            NPC[0].dir=3;
           NPC[0].isNPC=true;
            NPC[0].SSY=0;
            NPC[0].SSX=0;
            NPC[0].bitmap=load_bitmap("Data/Images/NPC_1.bmp", NULL);
           NPC[0].name="NPC2";
            
            
           NPC[1].HP=100;
              NPC[1].itemout=false;
     NPC[1].activate=false;
     NPC[1].isrunning=false;
      NPC[1].speed=2;
      NPC[1].isMoving=false;
                 NPC[1].x=1320;
                 NPC[1].y=460+560;
            NPC[1].r=20;     
            NPC[1].dir=2;
           NPC[1].isNPC=true;
            NPC[1].SSY=0;
            NPC[1].SSX=0;
            NPC[1].bitmap=load_bitmap("Data/Images/NPC_2.bmp", NULL);
           NPC[1].name="NPC3";
           
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
     }
