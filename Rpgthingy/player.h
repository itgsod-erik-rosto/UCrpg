
             struct PLAYER : WORLD
                 {
                    int* POS;
                    int* POS2;
                        
                        float l_end_x;
                        
                        float l_end_y;
                              
                        int Stime[100];
                        int Etime[100];
                        int StimeM[100];
                        int EtimeM[100];
                        int Wtarget;
                        int getcell;
                        
                        bool dtC_collides;
                        
                        int dtC_x1;
                        int dtC_x2;
                        
                        int dtC_y1;
                        int dtC_y2;
                        
                        int distancetocollision;
                        char* collidingobject;
                        bool do_once;
                        
                        int routewalked[100];
                       
                    int Ti;
                    int Ti_max;
                    
                          char *name;
                       
                       int Rnd;
                       int i5;
                       BITMAP *bitmap;
                       
                   int gshotX;
                   int gshotY;
                    
                    
                     int fnpcsi;
                     
                    int HP;
                    
                        float x;
                        float y;
                        float r;
                        
                    float tempX;
                    float tempY;
                       
                       bool gunfire1;
                       
                       int targetX[100];
                       int targetY[100];
                       
                    int status[];
                        
                        int x_1;
                        int y_1;
                        int x_2;
                        int y_2;
int timer2;
int dTimer;

bool isNPC;
bool isMoving;
bool isTravelroute;
bool isOnTravelroute;
bool isrunning;
bool iscollided;
bool isDead;
bool isShot;
bool isSelected;
bool isPatrolling;
bool isFleeing;

bool hasTarget;
bool hascontrols;

bool activate;
bool itemeq;
bool itemout;
bool gunfire;

int gunfireT;
                        
                        int item[20];
                        
                        int Tselect;
                        
                        int SSX;
                        int SSY;
                        
                        float speed;
                        int dir;
                        
                        int posx;
                        int posy;
                        
                        void target();
                        void mouseselect();
                        void enablecontrols();
                        void LOADSTATUS(BITMAP *buffer);
                        void STATUS(BITMAP *buffer);
                        void alert();
                        void animation(BITMAP *buffer);
                        void controls();
                        void draw();
                        
                        }
                        player, 
                        
                        NPC[100],
                        actor[100],
                        travelroute[100];
    
  
    
    #include <actors.h>
    void PLAYER::target()
    {
         
   
         if (tclockH>=Stime[Wtarget+1] && tclockH<=Etime[Wtarget+1])
         Wtarget+=1;
         
          if (tclockH>=Stime[Wtarget-1] && tclockH<=Etime[Wtarget-1])
         Wtarget-=1;
         
        if (tclockH>=Stime[Wtarget] && tclockH<=Etime[Wtarget] && tclockM>=StimeM[Wtarget] && tclockM<=EtimeM[Wtarget])
        {
                                    
                              hasTarget=true;
                              }
       
                                                                    
                                                                    if (hasTarget==true && isNPC==true)
                                                                    {
                                                                                        if (iscollided==true)
                                                                                        {
                                                                                                             Ti=0;
                                                                                                             }
                                                                                      
                                                                                                                                       
                                                                                        isMoving=true;
                                                                              }
                                                             
         if (hasTarget==true && targetX[Ti]!=0 && targetY[Ti]!=0 && tclockH>=Stime[Wtarget] && tclockH<=Etime[Wtarget])
         {
                        if (targetX[Ti]>x)
                        {
                                      dir=4;
                        isMoving=true;
                        }
                        else if (targetX[Ti]<x)
                        {
                                      dir=2;
                        isMoving=true;
                        }
                        else if (targetY[Ti]>y)
                        {
                                      dir=3;
                        isMoving=true;
                        }
                        else if (targetY[Ti]<y)
                        {
                                      dir=1;
                        isMoving=true;
                        }
                        
                        if (targetX[Ti]==x && targetY[Ti]==y && hasTarget==true && Ti<Ti_max)
                        {
                                       Ti++;
                        
                        
                        }
                        if (Ti>=Ti_max && y==targetY[Ti] && x==targetX[Ti] && tclockH<Etime[Wtarget] && tclockM>=StimeM[Wtarget] && tclockM<=EtimeM[Wtarget])
                        {
                                  Ti=0;
                                           }
                                           else if (Ti==Ti_max ||(targetY[Ti]==0) && y==targetY[Ti] && x==targetX[Ti])
                        {
                                           isMoving=false;
                                           hasTarget=false;
                                           isPatrolling=false;
                                           }
                        }
         }
    void PLAYER::mouseselect()
    {
         if ((mouse_x >= x-r+cam && mouse_x <= x+r+cam && mouse_y >= y-r+cam2 && mouse_y <= y+r+cam2 && mouse_b & 1 || mouse_b & 2 && Tselect==0 && isNPC==true)
         || (mouse_x >= x-r && mouse_x <= x+r && mouse_y >= y-r && mouse_y <= y+r && mouse_b & 1 || mouse_b & 2 && Tselect==0 && isNPC!=true))
         {
                     if (mouse_b & 1)
                     isSelected=true;
                     else if (mouse_b & 2)
                     isSelected=false;
                     
                     Tselect++;
                     
                     
                     }
                     if (Tselect>=40)
                     Tselect=0;
                     
                     if (isSelected==true && key[KEY_DEL])
                     {
                                          isSelected=false;
                                          hascontrols=false;
                                          }
                                          
                     
                                          
                                          if (isSelected==true && isNPC==true)
                                          {
                     
                     //line(buffer, x+cam, y+cam2, targetX[Ti]+cam, targetY[Ti]+cam2, makecol(0, 255, 0));
                     textprintf_ex(buffer,font,x+r+cam,y+r-10+cam2, makecol(255, 0, 0), 1, "Ti_max: %i", Ti_max);
                     textprintf_ex(buffer,font,x+r+cam,y+r-20+cam2, makecol(255, 0, 0), 1, "Ti: %i", Ti);
                     textprintf_ex(buffer,font,x+r+cam,y+r-30+cam2, makecol(255, 0, 0), 1, "Wtarget: %i", Wtarget);
                     textprintf_ex(buffer,font,x+r+cam,y+r-40+cam2, makecol(255, 0, 0), 1, "Name: %s", name);
                     textprintf_ex(buffer,font,x-r-40+cam,y+r+cam2, makecol(255, 255, 255), 1, "x: %f", x);
                     textprintf_ex(buffer,font,x-r-40+cam,y+r+10+cam2, makecol(255, 255, 255), 1, "y: %f", y);
                     textprintf_ex(buffer,font,x+r-22+cam,y+r+cam2, makecol(0, 0, 255), 1, "T_x: %i", targetX[Ti]);                                                               
                     textprintf_ex(buffer,font,x+r-22+cam,y+r+10+cam2, makecol(0, 0, 255), 1, "T_y: %i", targetY[Ti]);
                     textprintf_ex(buffer,font,x+r-22+cam,y+r+20+cam2, makecol(0, 0, 255), 1, "D to C %i", distancetocollision);
                                                               hascontrols=true;
                                                               
                                                               }
         if (mouse_x <= x-r+cam && mouse_x >= x+r+cam && mouse_y <= y-r+cam2 && mouse_y >= y+r+cam2 && mouse_b & 1 || mouse_b & 2)
         {
                     isSelected=false;
                     hascontrols=false;
                     }
         }
    void PLAYER::enablecontrols()
  {
         hascontrols=true;
  }
   void PLAYER::LOADSTATUS(BITMAP *buffer)
   {

       LOADNPCS >> HP;
       
       LOADNPCS >> x;
       
       LOADNPCS >> y;
       
       LOADNPCS >> r;
       
       LOADNPCS >> tempX;
       
       LOADNPCS >> tempY;
       
       LOADNPCS >> isNPC;
       
       LOADNPCS >> isMoving;
       
       LOADNPCS >> isPatrolling;
       
       LOADNPCS >> dir;
       
       LOADNPCS >> isDead;
       
       LOADNPCS >> iscollided;
       
       LOADNPCS >> activate;
       
       LOADNPCS >> item[0];
       
       LOADNPCS >> itemeq;
       
       LOADNPCS >> isShot;
       
       LOADNPCS >> itemout;
       
       LOADNPCS >> Wtarget;
       
       LOADNPCS >> hasTarget;
       
       LOADNPCS >> Stime[0];
       LOADNPCS >> Etime[0];
       LOADNPCS >> StimeM[0];
       LOADNPCS >> EtimeM[0];
       
       LOADNPCS >> Stime[1];
       LOADNPCS >> Etime[1];
       LOADNPCS >> StimeM[1];
       LOADNPCS >> EtimeM[1];
       
       LOADNPCS >> Stime[2];
       LOADNPCS >> Etime[2];
       LOADNPCS >> StimeM[2];
       LOADNPCS >> EtimeM[2];
       
       LOADNPCS >> Ti;
       
       LOADNPCS >> Ti_max;
       
       LOADNPCS >> targetX[-1];
       LOADNPCS >> targetY[-1];
       
       LOADNPCS >> targetX[0];
       LOADNPCS >> targetY[0];
       
       LOADNPCS >> targetX[1];
       LOADNPCS >> targetY[1];
       
       LOADNPCS >> targetX[2];
       LOADNPCS >> targetY[2];
       
       LOADNPCS >> targetX[3];
       LOADNPCS >> targetY[3];
       
       LOADNPCS >> targetX[4];
       LOADNPCS >> targetY[4];
       
       LOADNPCS >> targetX[5];
       LOADNPCS >> targetY[5];
       
       LOADNPCS >> targetX[6];
       LOADNPCS >> targetY[6];
       
       
   
        } 
    void PLAYER::STATUS(BITMAP *buffer)
    {
        

       FNPCS << HP;
       FNPCS << endl;
       
       FNPCS << x;
       FNPCS << endl;
       
       FNPCS << y;
       FNPCS << endl;
       
       FNPCS << r;
       FNPCS << endl;
       
       FNPCS << tempX;
       FNPCS << endl;
       
       FNPCS << tempY;
       FNPCS << endl;
       
       FNPCS << isNPC;
       FNPCS << endl;
       
       FNPCS << isMoving;
       FNPCS << endl;
       
       FNPCS << isPatrolling;
       FNPCS << endl;
       
       FNPCS << dir;
       FNPCS << endl;
       
       FNPCS << isDead;
       FNPCS << endl;
       
       FNPCS << iscollided;
       FNPCS << endl;
       
       FNPCS << activate;
       FNPCS << endl;
       
       FNPCS << item[0];
       FNPCS << endl;
       
       FNPCS << itemeq;
       FNPCS << endl;
       
       FNPCS << isShot;
       FNPCS << endl;
       
       FNPCS << itemout;
       FNPCS << endl;
       
       FNPCS << Wtarget;
       FNPCS << endl;
       
       FNPCS << hasTarget;
       FNPCS << endl;
       
       FNPCS << Stime[0];
       FNPCS << endl;
       
       FNPCS << Etime[0];
       FNPCS << endl;
           
       FNPCS << StimeM[0];
       FNPCS << endl;
           
       FNPCS << EtimeM[0];
       FNPCS << endl;
       
       FNPCS << Stime[1];
       FNPCS << endl;
       
       FNPCS << Etime[1];
       FNPCS << endl;
           
       FNPCS << StimeM[1];
       FNPCS << endl;
           
       FNPCS << EtimeM[1];
       FNPCS << endl;
       
       FNPCS << Stime[2];
       FNPCS << endl;
       
       FNPCS << Etime[2];
       FNPCS << endl;
           
       FNPCS << StimeM[2];
       FNPCS << endl;
           
       FNPCS << EtimeM[2];
       FNPCS << endl;
       
       FNPCS << Ti;
       FNPCS << endl;
       
       FNPCS << Ti_max;
       FNPCS << endl;
       
       FNPCS << targetX[-1];
       FNPCS << endl;
       FNPCS << targetY[-1];
       FNPCS << endl;
       
       FNPCS << targetX[0];
       FNPCS << endl;
       FNPCS << targetY[0];
       FNPCS << endl;
       
       FNPCS << targetX[1];
       FNPCS << endl;
       FNPCS << targetY[1];
       FNPCS << endl;
       
       FNPCS << targetX[2];
       FNPCS << endl;
       FNPCS << targetY[2];
       FNPCS << endl;
       
       FNPCS << targetX[3];
       FNPCS << endl;
       FNPCS << targetY[3];
       FNPCS << endl;
       
       FNPCS << targetX[4];
       FNPCS << endl;
       FNPCS << targetY[4];
       FNPCS << endl;
       
       FNPCS << targetX[5];
       FNPCS << endl;
       FNPCS << targetY[5];
       FNPCS << endl;
       
       FNPCS << targetX[6];
       FNPCS << endl;
       FNPCS << targetY[6];
       FNPCS << endl;
       FNPCS << endl;
       
       
       FNPCS << endl;
  
     
    
    }
    void PLAYER::alert()
    {
     }
         
         
void PLAYER::controls()
{
     if (isPatrolling==true)
     speed=1;
     
     if (isShot==true)
     {
                      player.gshotX=-1000;
                      player.gshotY=-1000;
                      }
     if (isNPC!=true)
     {
     if (iscollided==true)
     {
     if (dir==1)
    ofY.varvalue+=speed*TIME;
    else if (dir==3)
    ofY.varvalue-=speed*TIME;
    else if (dir==2)
    ofX.varvalue+=speed*TIME;
    else if (dir==4)
    ofX.varvalue-=speed*TIME;
    
    iscollided=false;
}
}

else if (isNPC==true)
{
     
 if (targetX[Ti]==0 && targetY[Ti]==0)
 {
                    hasTarget=false;
                }    
                
     if (isShot==true)
     {
                      
                  if (iscollided==true)
                  {
                       if (dir==1)
                  y-=speed*TIME+20;
                  else if (dir==3)
                  y+=speed*TIME+20;
                  else if (dir==2)
                  x-=speed*TIME+20;
                  else if (dir==4)
                  x+=speed*TIME+20;
                  
                  
                      iscollided=false;
                       }
                       else if (iscollided==false)
                       {
                              if (dir==1)
                  y-=10;
                  else if (dir==3)
                  y+=+10;
                  else if (dir==2)
                  x-=+10;
                  else if (dir==4)
                  x+=+10;
                            }
                      HP-=10;
                      isShot=false;
                      }
}
if (iscollided==true && isShot!=true)
{
                     if (dir==1)
                  y+=speed*TIME*max_npc;
                  else if (dir==3)
                  y-=speed*TIME*max_npc;
                  else if (dir==2)
                  x+=speed*TIME*max_npc;
                  else if (dir==4)
                  x-=speed*TIME*max_npc; 
                  
                  if (hasTarget!=true)
                  isMoving=false;
                  iscollided=false;
                     }
    
     
     
     if (isNPC==true && hascontrols==true && hasTarget!=true)
     {
                
                                        
     if (key[KEY_LEFT])
            {
                            isMoving=true;
                
                              dir=2;
                             }
                             
            else if (key[KEY_UP])
            {
                 isMoving=true;
                             dir=1;
                             }
                             
            else if (key[KEY_RIGHT])
            {
                 isMoving=true;
                
                              dir=4;
                             }
                             
            else if (key[KEY_DOWN])
            {
                 isMoving=true;
                
                             dir=3;
                             }
                             if (!key[KEY_UP] && !key[KEY_RIGHT] && !key[KEY_DOWN] && !key[KEY_LEFT])
                             {
                             isMoving=false;
                             }
                             }
                             
         
ctimer+=7;          
if (ctimer>=50)
ctimer=0;  



    
    
    
    
    if (x>=travelroute[i5].x_1 && x<=travelroute[i5].x_2 && y>=travelroute[i5].y_1 && y<=travelroute[i5].y_2)
    isOnTravelroute=true;
    
 
    
    else isOnTravelroute=false;
    
 
    
    if (isMoving==false && isNPC==true)
    {

       // dir++;
        
    if (x>=travelroute[i5+1].x_1 && x<=travelroute[i5+1].x_2 && y>=travelroute[i5+1].y_1 && y<=travelroute[i5+1].y_2)
    {
    if (i5==0)
    i5=1;
    else if (i5==1)
    i5=2;
    else if (i5==2)
    i5=3;
}
    
        //isMoving=true;
    }
    if (dir>4)
    dir=1;
    
      if (dir<=0)
      dir=4;
    
     if (isMoving==true && isNPC==true)
     {
         if (dir==1)
         
         y-=speed*TIME;   
         
         if (dir==2)
         x-=speed*TIME;   
         
         if (dir==3)
         y+=speed*TIME;   
         
         if (dir==4)
         x+=speed*TIME;   
      
    }
     dTimer++;
     
     if (key[KEY_F] && itemout!=true && itemeq==true)
     {
                    itemout=true;
                    }
                    if (itemout==true)
                    {
                                      itemtimer++;
                                      
                                      if (key[KEY_G] || key[KEY_Q])
                                      {
                                                   
                                                    itemout=false; 
                                                   player.SSY=0; 
                                                        }
                                                        
                                      }
     if (itemout==true && itemeq==true)
     {
                        
                        SSY=82;
                        }
                        
     if (key[KEY_E])
     {
                    
                    if (dTimer>=20)
                    activate=true;
               else activate=false;
                    }
                    if (activate==true)
                    {                   
                    dTimer=0;
                    
                    }
                    
    if (key[KEY_W] && isNPC!=true)
    {
                   isMoving=true;
        SSX=0;
    ofY.varvalue-=speed*TIME;
    if (!key[KEY_SPACE])
    dir=1;
    
}
else if (key[KEY_S] && isNPC!=true)
    {
        isMoving=true;
        SSX=0;
        if (!key[KEY_SPACE])
         dir=3;
    ofY.varvalue+=speed*TIME;
   
}
    else if (key[KEY_A] && isNPC!=true)
    {
         isMoving=true;
        SSX=0;
        if (!key[KEY_SPACE])
         dir=2;
    ofX.varvalue-=speed*TIME;
     
}
  
    else if (key[KEY_D] && isNPC!=true)
   {
         isMoving=true;
        SSX=0;
        if (!key[KEY_SPACE])
         dir=4;
    ofX.varvalue+=speed*TIME;
     
}
if (!key[KEY_W] && !key[KEY_D] && !key[KEY_S] && !key[KEY_D])
{
                player.isMoving=false;
                player.isrunning=false;
                }
if (dir==4)
SSX=41;
else if (dir==2)
SSX=123;
else if (dir==3)
 SSX=82;
 else if (dir==1)
 SSX=0;
if (key[KEY_LSHIFT] && isNPC!=true)
{
                    isrunning=true;
                    
                    if (isrunning==true)
                    {
                   speed=5;
                   clear_keybuf();
                   }
                   
                   else if (isrunning==false) 
                   speed=2;
                   clear_keybuf();
                   }
                   else if (!key[KEY_LSHIFT])
                   {
                   isrunning=false;
                   speed=2;
                   }
                  
               
}
void PLAYER::draw()
{ 
     if (SCREEN.LOCK==true)
     {
     player.x=SW/2;
     player.y=SH/2;
     }
    
    
     if (do_once!=true)
     {
                        l_end_x=x;
                        l_end_y=y;
                        do_once=true;
                        }
                        
    if (isSelected==true && key[KEY_N])
                     {
                                          }
     
    if (GAME.QUIT==true)
    {
                   
    STATUS(buffer);
}

if (POS!=0)
circlefill(buffer, *POS+cam, *POS2+2+cam2, 10, makecol(255, 0, 0));
    if (isNPC!=true && isTravelroute!=true)
    {
                 
         if (isSelected==true)
                circlefill(buffer, x, y, 15, makecol(255, 0, 0));
                
     masked_blit(bitmap, buffer, SSX, SSY, x-r, y-r, 40, 40);

     }
     if (isNPC==true && isTravelroute!=true)
     {
                     if (isSelected==true)
                circlefill(buffer, x+cam, y+cam2, 15, makecol(255, 0, 0));
       masked_blit(bitmap, buffer, SSX, SSY, x-r+cam, y-r+cam2, 40, 40);
       } 
       if (posx!=0 && posy!=0)
       {
     masked_blit(items, buffer, 30, 18, posx, posy, 40, 40);
   
    }
     if (gshotX!=0 && gshotY!=0)
     {
 if (dir==4)
 {
         
                       line(buffer, gshotX-10, gshotY, gshotX, gshotY, makecol(255,255,0));
}          
 if (dir==2)
                       line(buffer, gshotX, gshotY, gshotX+10, gshotY, makecol(255,255,0));
                       
                       
 if (dir==3)
                       line(buffer, gshotX, gshotY-10, gshotX, gshotY, makecol(255,255,0));
            
            
 if (dir==1)
                       line(buffer, gshotX, gshotY, gshotX, gshotY+10, makecol(255,255,0));
        }
         
         if (isNPC!=true)
         {
                         
         dtC_x1=x;
         dtC_y1=y;
         
         
         if (dtC_x2-dtC_x1 > 500 || dtC_x2-dtC_x1 < -500 && (dir==2 || dir==4))
         {
         dtC_x2=x;
         dtC_y2=y;                    
         }
         else if (dtC_y2-dtC_y1 > 500 || dtC_y2-dtC_y1 < -500 && (dir==1 || dir==3))
         {
         dtC_x2=x;
         dtC_y2=y;                     
         }
         
         if (dtC_collides==true)
         {
                                if (dir==2 || dir==4)
                                {
                                           
                                distancetocollision=dtC_x2-dtC_x1;
                                }
                                else 
                                {
                                     distancetocollision=dtC_y2-dtC_y1;
                                     }
                                     
                                     if (distancetocollision<0)
                                distancetocollision=distancetocollision*-1;
                                
         dtC_x2=x;
         dtC_y2=y;
         dtC_collides=false;
         }
         
         if (dir==1)
         {
                    if (dtC_y2>y)
                    dtC_y2=y;
         dtC_x2=x;
         if (dtC_collides!=true)
         dtC_y2-=10;
         }
         if (dir==2)
         {
                    
                    if (dtC_x2>x)
                    dtC_x2=x;
                    
         dtC_y2=y;
         
         
         if (dtC_collides!=true)
         dtC_x2-=10;
         }
         if (dir==3)
         {
                    
                    if (dtC_y2<y)
                    dtC_y2=y;
                    
         dtC_x2=x;
         
         if (dtC_collides!=true)
         dtC_y2+=10;
         }
         if (dir==4)
         {
                    
                    if (dtC_x2<x)
                    dtC_x2=x;
                    
         dtC_y2=y;
         
         if (dtC_collides!=true)
         dtC_x2+=10;
         }
         
         if (showobjectframes==true)
         {
                                   
                               textprintf_ex( buffer, font, 30, 300, makecol (0,0,255), -1, " D to Col: %i", distancetocollision);  
                               if (collidingobject!=NULL)    
         textprintf_ex( buffer, font, 30, 320, makecol (0,0,255), -1, " Collidingobj: %s", collidingobject);      
         
         if (dtC_collides!=true)
        line(buffer, dtC_x1, dtC_y1, dtC_x2, dtC_y2, makecol(0, 0, 255)); 
        else
        line(buffer, dtC_x1, dtC_y1, dtC_x2, dtC_y2, makecol(255, 0, 0)); 
        }
        }
        
        else if (isNPC==true)
         {
                         
         dtC_x1=x+cam;
         dtC_y1=y+cam2;
         
         
         if (dtC_x2-dtC_x1 > 500 || dtC_x2-dtC_x1 < -500 && (dir==2 || dir==4))
         {
         dtC_x2=x;
         dtC_y2=y;                    
         }
         else if (dtC_y2-dtC_y1 > 500 || dtC_y2-dtC_y1 < -500 && (dir==1 || dir==3))
         {
         dtC_x2=x;
         dtC_y2=y;                     
         }
         
         if (dtC_collides==true)
         {
                                if (dir==2 || dir==4)
                                {
                                distancetocollision=dtC_x2-dtC_x1;
                                }
                                else 
                                {
                                     distancetocollision=dtC_y2-dtC_y1;
                                     }
                                     
                                     if (distancetocollision<0)
                                distancetocollision=distancetocollision*-1;
                                
         dtC_x2=x+cam;
         dtC_y2=y+cam2;
         dtC_collides=false;
         }
         
         if (dir==1)
         {
                    if (dtC_y2>y+cam2)
                    dtC_y2=y+cam2;
         dtC_x2=x+cam;
         if (dtC_collides!=true)
         dtC_y2-=10;
         }
         if (dir==2)
         {
                    
                    if (dtC_x2>x+cam)
                    dtC_x2=x+cam;
                    
         dtC_y2=y+cam2;
         
         
         if (dtC_collides!=true)
         dtC_x2-=10;
         }
         if (dir==3)
         {
                    
                    if (dtC_y2<y+cam2)
                    dtC_y2=y+cam2;
                    
         dtC_x2=x+cam;
         
         if (dtC_collides!=true)
         dtC_y2+=10;
         }
         if (dir==4)
         {
                    
                    if (dtC_x2<x+cam)
                    dtC_x2=x+cam;
                    
         dtC_y2=y+cam2;
         
         if (dtC_collides!=true)
         dtC_x2+=10;
         }
         
         if (showobjectframes==true)
         {
                                    if (dtC_collides!=true)
        line(buffer, dtC_x1, dtC_y1, dtC_x2, dtC_y2, makecol(0, 0, 255)); 
        else
        line(buffer, dtC_x1, dtC_y1, dtC_x2, dtC_y2, makecol(255, 0, 0)); 
        }
        }


                       if (isDead!=true)
                       {
                                        //target();
     
     if (GAME.PAUSE!=true)
     {
     animation(buffer);
     controls();
     }
     
 
 
     if (isNPC==true)
     {
                     textprintf_ex( buffer, font, x+cam-20, y+cam2-30, makecol (255,0,0), -1, " HP %i", HP);
     alert();
     }
     if (isNPC!=true)
                     textprintf_ex( buffer, font, 700, 10, makecol (255,0,0), 0, " HP %i", HP);
     
     }
     mouseselect();
     
     
if (showobjectframes==true)
{
  if (isNPC==true)
  {
     rect(buffer, x-r+cam, y-r+cam2, x+r+cam, y+r+cam2, makecol(0, 0, 255));
     line(buffer, x-r+cam, y-r+cam2, x+r+cam, y+r+cam2, makecol(0, 0, 255));
     line(buffer, x-r+cam, y+r+cam2, x+r+cam, y-r+cam2, makecol(0, 0, 255));
}
else if (isNPC!=true)
{
     rect(buffer, x-r, y-r, x+r, y+r, makecol(255, 255, 0));
     line(buffer, x-r, y-r, x+r, y+r, makecol(255, 255, 0));
     line(buffer, x-r, y+r, x+r, y-r, makecol(255, 255, 0));
}
if (name!=NULL)
{
if (isNPC==true)
textprintf_ex(buffer, font, x-10+cam, y-40+cam2, makecol(0, 0, 0), -1, "%s", name);
else if (isNPC!=true)
textprintf_ex(buffer, font, x-10, y-40, makecol(0, 0, 0), -1, "%s", name);
}

}
     
    
     
 }
 
 

           
