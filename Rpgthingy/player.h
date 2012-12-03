             struct PLAYER
                 {
                       int Rnd;
                       int i5;
                       BITMAP *bitmap;
                       
                   int gshotX;
                   int gshotY;
                    
                    int tempX;
                    int tempY;
                       
                       bool gunfire1;
                       
                       int targetX;
                       int targetY;
                       
                        int x;
                        int y;
                        int r;
                        
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
                        
                        void alert();
                        void animation(BITMAP *buffer);
                        void controls();
                        void draw();
                        
                        }
                        player, 
                        test1, 
                        actor[100],
                        travelroute[100];
    
    
    #include <actors.h>
    void PLAYER::alert()
    {
         if (player.x<=x+cam && player.x>=x+cam-300 && player.y<=y+cam2+50 && player.y>=y+cam2-50)
         dir=2;
         
         
         if (player.x<=x+cam+300 && player.x>=x+cam && player.y<=y+cam2+50 && player.y>=y+cam2-50)
         dir=4;
         
         if (player.x<=x+cam+50 && player.x>=x+cam-50 && player.y<=y+cam2 && player.y>=y+cam2-300)
         dir=1;
         
         
         if (player.x<=x+cam+50 && player.x>=x+cam-50 && player.y<=y+cam2+300 && player.y>=y+cam2)
         dir=3;
         }
         
         
void PLAYER::controls()
{
     
         

    
    
    
    
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
        SSX=0;
    ofY-=speed;
    if (!key[KEY_SPACE])
    dir=1;
    
}
else if (key[KEY_S] && isNPC!=true)
    {
        SSX=0;
        if (!key[KEY_SPACE])
         dir=3;
    ofY+=speed;
   
}
    else if (key[KEY_A] && isNPC!=true)
    {
        SSX=0;
        if (!key[KEY_SPACE])
         dir=2;
    ofX-=speed;
     
}
  
    else if (key[KEY_D] && isNPC!=true)
   {
        SSX=0;
        if (!key[KEY_SPACE])
         dir=4;
    ofX+=speed;
     
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
                   speed=5;
                   }
                   else speed=2;
                   
                  
               
}
void PLAYER::draw()
{
    if (isNPC!=true && isTravelroute!=true)
     masked_blit(bitmap, buffer, SSX, SSY, x-r, y-r, 40, 40);
     
     if (isNPC==true && isTravelroute!=true)
       masked_blit(bitmap, buffer, SSX, SSY, x-r+cam, y-r+cam2, 40, 40);
       
       if (isTravelroute==true)
       line(buffer, x_1+cam, y_1+cam2, x_2+cam, y_2+cam2, makecol(255, 0, 0));
       
     masked_blit(items, buffer, 30, 18, posx, posy, 40, 40);
     
 if (dir==4)
                       line(buffer, gshotX-10, gshotY, gshotX, gshotY, makecol(0,255,0));
            
 if (dir==2)
                       line(buffer, gshotX, gshotY, gshotX+10, gshotY, makecol(0,255,0));
                       
                       
 if (dir==3)
                       line(buffer, gshotX, gshotY-10, gshotX, gshotY, makecol(0,255,0));
            
            
 if (dir==1)
                       line(buffer, gshotX, gshotY, gshotX, gshotY+10, makecol(0,255,0));
            
                       
     animation(buffer);
     controls();
 
 
     if (isNPC==true)
     {
     alert();
     }
 }
