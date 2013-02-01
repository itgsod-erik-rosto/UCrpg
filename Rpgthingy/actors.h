

void loadch(BITMAP *buffer)
{
     player.itemout=false;
     player.activate=false;
     player.Wtarget=-2;
      player.speed=2;
                 
     player.x=SW/2;
     player.y=SH/2;
            player.r=20;     
           player.dTimer=0;     
           player.isPatrolling=false;
           player.HP=100;
            player.SSY=0;
            
            player.name="Player";
             
                player.fnpcsi=0;
                
                NPC[2].HP=100;
                NPC[2].Wtarget=-2;
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
           
           NPC[2].name="NPC1";
           
           NPC[0].HP=100;
            NPC[0].Wtarget=-2;
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
           
           NPC[0].Wtarget=0;
           
           NPC[0].Stime[0]=7;
           NPC[0].Etime[0]=13;
           
           NPC[0].StimeM[0]=0;
           NPC[0].EtimeM[0]=59;
            
            NPC[0].Stime[1]=14;
           NPC[0].Etime[1]=16;
           
           NPC[0].StimeM[1]=0;
           NPC[0].EtimeM[1]=59;
           
            
            
           
        actor[0]=player;
     }

void schedules(BITMAP *buffer)
{
     if (NPC[0].Wtarget==0)
     {
                           
           NPC[0].Ti_max=6;
           NPC[0].targetX[-1]=1360;
           NPC[0].targetY[-1]=-140;
           
           NPC[0].targetX[0]=1320;
           NPC[0].targetY[0]=-70;
           
           NPC[0].targetX[1]=1470;
           NPC[0].targetY[1]=-200;
           
           NPC[0].targetX[2]=1580;
           NPC[0].targetY[2]=-200;
           
           NPC[0].targetX[3]=1580;
           NPC[0].targetY[3]=-280;
           
           NPC[0].targetX[4]=1580;
           NPC[0].targetY[4]=-330;
           
           NPC[0].targetX[5]=1240;
           NPC[0].targetY[5]=-330;
           
           NPC[0].targetX[6]=1240;
           NPC[0].targetY[6]=-310;
                           }
                           if (NPC[0].Wtarget==1)
     {
                           NPC[0].isPatrolling=true;
                           
                              NPC[0].Ti_max=5;
           NPC[0].targetX[-1]=1240;
           NPC[0].targetY[-1]=-310;
           
           NPC[0].targetX[0]=1320;
           NPC[0].targetY[0]=-70;
           
           NPC[0].targetX[1]=1470;
           NPC[0].targetY[1]=-200;
           
           NPC[0].targetX[2]=1080;
           NPC[0].targetY[2]=-200;
           
           NPC[0].targetX[3]=1080;
           NPC[0].targetY[3]=960;
           
           NPC[0].targetX[4]=1250;
           NPC[0].targetY[4]=960;
           
           NPC[0].targetX[5]=1240;
           NPC[0].targetY[5]=960;
           
           NPC[0].targetX[6]=1240;
           NPC[0].targetY[6]=950;
           
                           }
           if (NPC[1].Wtarget==0)
           {
                                 NPC[1].Ti_max=4;
                                 
                                 NPC[1].isPatrolling=true;
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
                                 NPC[1].Ti_max=6;
                                 
           NPC[1].targetX[-1]=1200;
           NPC[1].targetY[-1]=460+560-1600;
           
           NPC[1].targetX[0]=1320;
           NPC[1].targetY[0]=460+560-80;
           
           NPC[1].targetX[1]=1070;
           NPC[1].targetY[1]=460+560-80;
           
           NPC[1].targetX[2]=1070;
           NPC[1].targetY[2]=460+560-630;
           
           NPC[1].targetX[3]=1400;
           NPC[1].targetY[3]=460+560-630;
           
           NPC[1].targetX[4]=1450;
           NPC[1].targetY[4]=460+560-480;
           
           
           NPC[1].targetX[5]=1250;
           NPC[1].targetY[5]=460+560-480;
           
           
           NPC[1].targetX[6]=1240;
           NPC[1].targetY[6]=460+560-480;
           }
           
           
           if (NPC[1].Wtarget==2)
           {
                                 NPC[1].Ti_max=4;
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
void drawplayers()
{
                         
          NPC[0].draw();
          NPC[1].draw();
          NPC[2].draw();
           player.draw();  
           }
