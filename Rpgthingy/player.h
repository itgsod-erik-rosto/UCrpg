         #include <fstream>
          #include <config.h>
      
        
          
             struct PLAYER
                 {
                        
                       
                        
                          char *name;
                       
                       int Rnd;
                       int i5;
                       BITMAP *bitmap;
                       
                   int gshotX;
                   int gshotY;
                    
                    
                     int fnpcsi;
                     
                    int HP;
                    
                        int x;
                        int y;
                        int r;
                        
                    int tempX;
                    int tempY;
                       
                       bool gunfire1;
                       
                       int targetX;
                       int targetY;
                       
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
bool hasTarget;
bool isrunning;
bool iscollided;
bool isDead;
bool isShot;

bool activate;
bool itemeq;
bool itemout;
bool gunfire;

int gunfireT;
                        
                        int item[20];
                        
                        int SSX;
                        int SSY;
                        
                        int speed;
                        int dir;
                        
                        int posx;
                        int posy;
                        
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
    
    void PLAYER::STATUS(BITMAP *buffer)
    {
        
        FNPCS << name;
        FNPCS << " //Name";
       FNPCS << endl;
    
       FNPCS << HP;
       FNPCS << " //HP";
       FNPCS << endl;
       
       FNPCS << x;
       FNPCS << " //x";
       FNPCS << endl;
       
       FNPCS << y;
       FNPCS << " //y";
       FNPCS << endl;
       
       FNPCS << r;
       FNPCS << " //r";
       FNPCS << endl;
       
       FNPCS << tempX;
       FNPCS << "// tempX";
       FNPCS << endl;
       
       FNPCS << tempY;
       FNPCS << " //tempY";
       FNPCS << endl;
       
       FNPCS << isNPC;
       FNPCS << " //isNPC";
       FNPCS << endl;
       
       FNPCS << isMoving;
       FNPCS << " //isMoving";
       FNPCS << endl;
       
       FNPCS << isDead;
       FNPCS << " //isDead";
       FNPCS << endl;
       
       FNPCS << iscollided;
       FNPCS << " //isCollided";
       FNPCS << endl;
       
       FNPCS << activate;
       FNPCS << " //Activate";
       FNPCS << endl;
       
       FNPCS << itemeq;
       FNPCS << " //itemequipped";
       FNPCS << endl;
       
       FNPCS << isShot;
       FNPCS << " //isShot";
       FNPCS << endl;
       
       FNPCS << itemout;
       FNPCS << " //itemout";
       FNPCS << endl;
       FNPCS << endl;

  
     
    
    }
    void PLAYER::alert()
    {
         if (isNPC==true && iscollided!=true && hasTarget==true)
         {
                         if (x<target[0].x1)
                         {
                                            isMoving=true;
                         dir=4;
                         }
                         else if (x>target[0].x1)
                         {
                                            isMoving=true;
                         dir=2;
                         }
                         else if (y>target[0].y1)
                         {
                              isMoving=true;
                              dir=1;
                              }
                              else if (y<target[0].y1)
                              {
                                   isMoving=true;
                                   dir=3;
                                   }
                         else if (x==target[0].x1 && y==target[0].y1)
                         isMoving=false;
                         
                         }
         }
         
         
void PLAYER::controls()
{
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
    ofY+=speed;
    else if (dir==3)
    ofY-=speed;
    else if (dir==2)
    ofX+=speed;
    else if (dir==4)
    ofX-=speed;
    
    iscollided=false;
}
}

else if (isNPC==true)
{
     
     
     if (isShot==true)
     {
                      if (iscollided!=true)
                      {
                       if (dir==1)
                  y+=speed+5;
                  else if (dir==3)
                  y-=speed+5;
                  else if (dir==2)
                  x+=speed+5;
                  else if (dir==4)
                  x-=speed+5;
                  }
                  else if (iscollided==true)
                  {
                       if (dir==1)
                  y-=speed+20;
                  else if (dir==3)
                  y+=speed+20;
                  else if (dir==2)
                  x-=speed+20;
                  else if (dir==4)
                  x+=speed+20;
                  
                  
                      iscollided=false;
                       }
                      HP-=10;
                      isShot=false;
                      }
}

    
     if (HP<=0)
     {
               isDead=true;
               }
     
     if (isNPC==true && name=="NPC1")
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
         
         y--;   
         
         if (dir==2)
         x--;   
         
         if (dir==3)
         y++;   
         
         if (dir==4)
         x++;   
      
    }
     dTimer++;
     
     if (key[KEY_F] && itemout!=true && itemeq==true)
     {
                    itemout=true;
                    }
                    if (itemout==true)
                    {
                                      itemtimer++;
                                      
                                      if (key[KEY_G])
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
    ofY-=speed;
    if (!key[KEY_SPACE])
    dir=1;
    
}
else if (key[KEY_S] && isNPC!=true)
    {
        isMoving=true;
        SSX=0;
        if (!key[KEY_SPACE])
         dir=3;
    ofY+=speed;
   
}
    else if (key[KEY_A] && isNPC!=true)
    {
         isMoving=true;
        SSX=0;
        if (!key[KEY_SPACE])
         dir=2;
    ofX-=speed;
     
}
  
    else if (key[KEY_D] && isNPC!=true)
   {
         isMoving=true;
        SSX=0;
        if (!key[KEY_SPACE])
         dir=4;
    ofX+=speed;
     
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
    
    
       
    STATUS(buffer);

    if (isNPC!=true && isTravelroute!=true)
    {
                 
     
     masked_blit(bitmap, buffer, SSX, SSY, x-r, y-r, 40, 40);

     }
     if (isNPC==true && isTravelroute!=true)
     {
                
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
         
        
      


                       if (isDead!=true)
                       {
     animation(buffer);
     controls();
     
     
 
 
     if (isNPC==true)
     {
                     textprintf_ex( buffer, font, x+cam-20, y+cam2-30, makecol (255,0,0), -1, " HP %i", HP);
     alert();
     }
     if (isNPC!=true)
                     textprintf_ex( buffer, font, 700, 10, makecol (255,0,0), 0, " HP %i", HP);
     
     }
     
    
     
 }
