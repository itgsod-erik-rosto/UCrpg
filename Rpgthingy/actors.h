

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
           
      
           NPC[1].Wtarget;
           
           NPC[1].Stime[0]=10;
           NPC[1].Etime[0]=12;
           
            NPC[1].StimeM[0]=0;
           NPC[1].EtimeM[0]=10;
           
           
            NPC[1].Stime[1]=20;
           NPC[1].Etime[1]=23;
           
            NPC[1].StimeM[1]=0;
           NPC[1].EtimeM[1]=59;
           
              NPC[1].Stime[2]=7;
           NPC[1].Etime[2]=9;
           
            NPC[1].StimeM[2]=0;
           NPC[1].EtimeM[2]=59;
           
           NPC[1].hasTarget=false;
           
           
            
            
            
        actor[0]=player;
     }

void schedules(BITMAP *buffer)
{
     
           if (NPC[1].Wtarget==0)
           {
           NPC[1].targetX[-1]=1320;
           NPC[1].targetY[-1]=460+560;
           
           NPC[1].targetX[0]=1320;
           NPC[1].targetY[0]=460+560-250;
           
           NPC[1].targetX[1]=1250;
           NPC[1].targetY[1]=460+560-30;
           
           NPC[1].targetX[2]=1180;
           NPC[1].targetY[2]=460+560-250;
           
           NPC[1].targetX[3]=1320;
           NPC[1].targetY[3]=460+560;
           
           NPC[1].targetX[4]=1320;
           NPC[1].targetY[4]=460+560;
            }
            
           if (NPC[1].Wtarget==1)
           {
           NPC[1].targetX[-1]=1200;
           NPC[1].targetY[-1]=460+560-1600;
           
           NPC[1].targetX[0]=1320;
           NPC[1].targetY[0]=460+560-80;
           
           NPC[1].targetX[1]=1070;
           NPC[1].targetY[1]=460+560-80;
           
           NPC[1].targetX[2]=1070;
           NPC[1].targetY[2]=460+560-1600;
           
           NPC[1].targetX[3]=1070;
           NPC[1].targetY[3]=460+560-1600;
           
           NPC[1].targetX[4]=1150;
           NPC[1].targetY[4]=460+560-1600;
           }
           
           
           if (NPC[1].Wtarget==2)
           {
           NPC[1].targetX[0]=1150;
           NPC[1].targetY[0]=460+560-1600;
           
           NPC[1].targetX[-1]=1070;
           NPC[1].targetY[-1]=460+560-1600;
           
             
           NPC[1].targetX[1]=1070;
           NPC[1].targetY[1]=460+560-1600;
             
           NPC[1].targetX[2]=1070;
           NPC[1].targetY[2]=460+560-80;
           
           NPC[1].targetX[3]=1200;
           NPC[1].targetY[3]=460+560-1600;
           
           NPC[1].targetX[4]=1320;
           NPC[1].targetY[4]=460+560-80;
           
         
         
           
           
           
          
           }
     }
