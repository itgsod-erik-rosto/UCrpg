
#include <allegro.h>


#define black makecol( 0, 0, 0)
#define white makecol( 255, 255, 255)
#define red makecol(255, 0, 0)
#define cam int (ofX)*-1-640
#define cam2 int (ofY)*-1-700

BITMAP *HUD;
BITMAP *background;
BITMAP *buffer;
BITMAP *playerB;
BITMAP *testB;
BITMAP *pHouse;
BITMAP *grass1;
BITMAP *road1;
BITMAP *fence1;
BITMAP *hSS1;
BITMAP *hfurniture;
BITMAP *SSanim;
BITMAP *Store1;
BITMAP *items;

 int cAct=0;
int wallmax=100;
int itemtimer=0;
int Tobjects=2;

int objectsdrawn=0;

int timer1=0;

float ofX=-650;
float ofY=-470;

int i;

int SW=1080;
int SH=670;


    
 
struct OBJECTS
{

     
       int x1;
       int y1;
       
        bool slotfill[3];
      
       bool bmap;
       bool mbmap;
       
       bool equipped;
       int x2;
       int y2;
       
       char item;
      

bool hB;

bool isopen;
 bool isitem;
 bool ispersistent;
 
       int w;
       int h;
       
      
       
       BITMAP *bitmap;
       
       int SSX;
       int SSY;
       
       bool isdoor;
       bool isactivated;
       
       int SSX1;
       int SSY1;
       
       bool collide;
       
       int hX;
       int hY;
       
       int color;
       char ID;
       char path;

void collision();
       void draw();
       
       }
        
       deagle[10],
       gunFIRE[10],
       wall[300], 
       road[10], 
       hud[1],
       trail[10], 
       house[10], 
       grass[30], 
       fence[30], 
       bed[10], 
       mat[10], 
       shopcounterGR[10],
       shoppay[10],
       bush[10], 
       cupboard[10],
       sink[10],
       simonsbreda[10],
       toilet[10],
       bathtub[10],
       fridge[10],
       stove[10],
       kitchensink[10],
       door[10];
       
       #include <player.h>
       
      #include <objects.h>
       
void OBJECTS::collision()
{
     
     
     
if (player.dir==2 && x1+SSX+cam>=player.x-30 && x1-10+cam <=player.x && y1-10+cam2<=player.y && y1+SSY+15+cam2>=player.y && player.activate==true)
isactivated=true;

if (player.dir==1 && x1+cam<=player.x && x1+SSX+cam >=player.x && y1+SSY+cam2<=player.y && y1+SSY+cam2>=player.y-35 && player.activate==true)
isactivated=true;

if (player.dir==3 && x1-30+cam<=player.x && x1+SSX+cam>=player.x-20 && y1+SSY+cam2>=player.y && y1+cam2<=player.y+30 && player.activate==true)
isactivated=true;

if (player.dir==4 && x1+SSX+cam>=player.x-30 && x1-30+cam <=player.x && y1+cam2<=player.y && y1+SSY+15+cam2>=player.y && player.activate==true)
isactivated=true;

if (isactivated==true && isitem==true)
{
                      equipped=true;
                      player.itemeq=true;
    

   player.activate=false;
   
}

if (isactivated==true && isitem==true && key[KEY_Q] && player.itemeq==true && player.gunfire==false)
{
                      player.SSY=0;
                      equipped=false;
                      player.itemeq=false;
                      isactivated=false;
                      player.itemout=false;
                      
                             SSY1=0;
                             SSY=10;
                             SSX1=0;
                             
                             if (player.dir==2)
                             {
                             x1=ofX+SW+87-player.r;
                             y1=ofY+SH*1.5f+47-player.r;
                             }
                             
                             else if (player.dir==4)
                             {
                             x1=ofX+SW+140-player.r;
                             y1=ofY+SH*1.5f+47-player.r;
                             }
                             else if (player.dir==1)
                             {
                             x1=ofX+SW+115-player.r;
                             y1=ofY+SH*1.5f+25-player.r;
                             }
                             
                             else if (player.dir==3)
                             {
                             x1=ofX+SW+115-player.r;
                             y1=ofY+SH*1.5f+65-player.r;
                             }
                             }
                             
                              if (test1.x>=x1+cam && test1.x<=x2+cam && test1.y>=y1+cam2 && test1.y<=y2+cam2 && test1.isNPC==true && collide==true)
                                  {
                                                              
    if (test1.dir==4)
    test1.x-=test1.speed;
    if (test1.dir==3)
    test1.y-=test1.speed;
    if (test1.dir==2)
    test1.x+=test1.speed;
    if (test1.dir==1)
    test1.y+=test1.speed;
}

      if (actor[0].y>=y1+cam2-actor[0].r && actor[0].y<=y2+cam2+actor[0].r && actor[0].x>=x1+cam-actor[0].r && actor[0].x <=x2+cam+actor[0].r && collide!=true 
      || (SSY1==87 && actor[cAct].x>=x1-15+cam && actor[cAct].x<=x1+15+cam && actor[cAct].y>=y1+cam2 && actor[cAct].y<=y1+SSY+cam2 && isopen!=true && isdoor==true)
      ||(SSY1==0 && actor[cAct].x>=x1+cam && actor[cAct].x<=x1+SSX+cam && actor[cAct].y>=y1-15+cam2 && actor[cAct].y<=y1+15+cam2 && isopen!=true && isdoor==true)
      ||(actor[cAct].x>=x1+cam-10 && actor[cAct].x<=x1+SSX+10+cam && actor[cAct].y>=y1-10+cam2 && actor[cAct].y<=y1+SSY+10+cam2 && collide==true))
    {
                              
                                  
                                 

    if (actor[0].isNPC!=true)
    {                 
    if (player.dir==1)
    ofY+=player.speed;
    else if (player.dir==3)
    ofY-=player.speed;
    else if (player.dir==2)
    ofX+=player.speed;
    else if (player.dir==4)
    ofX-=player.speed;
}
}


if (isdoor==true)
{
                  
if (player.x>=x1-SSX/2+cam-player.r && player.x<=x1+SSX/2+cam+player.r && player.y>=y1-100+cam2 && player.y<=y1+100+cam2 && isdoor==true && isopen!=true && player.activate==true)
{                     
isopen=true;
player.activate=false;
}
else if (player.x>=x1-SSX/2+cam && player.x<=x1+SSX+cam+player.r && player.y>=y1-70+cam2 && player.y<=y1+200+cam2 && isdoor==true && isopen==true && player.activate==true)
{
isopen=false;
player.activate=false;
}
}

if (isopen==true && SSX1==0)
{
                 SSX1=82;
                 }
                 else if (isopen==false && isdoor==true)
{
                 SSX1=0;
                 }
                 
     }
     
void OBJECTS::draw()
{
  
     
     if (bmap==true)
     {
     blit(bitmap, buffer, SSX1, SSY1, x1+cam, y1+cam2, SSX, SSY);
     }
     
     if (mbmap==true)
     {
                     
                     if (ispersistent!=true)
                     {
                                                               if (player.itemeq==true && equipped==true && isitem==true && player.itemout==true)   
                                         {
                                                               SSY=17;
                                                               SSY1=12;
                                                               
                                                               if (player.dir==1)
                                                               {
                                                               SSX1=1;
                                                                 masked_blit(bitmap, buffer, SSX1, SSY1, SW/2-9, SH/2-32, SSX, SSY);
                                                                 
                                                               }
                                                               
                                                               if (player.dir==4)
                                                               {
                                                               SSX1=18;
                                                               masked_blit(bitmap, buffer, SSX1, SSY1, SW/2+13, SH/2-8, SSX, SSY);
                                                               }
                                                               
                                                               if (player.dir==3)
                                                               {
                                                               SSX1=37;
                                                                 masked_blit(bitmap, buffer, SSX1, SSY1, SW/2-8, SH/2+15, SSX, SSY);
                                                               }
                                                               if (player.dir==2)
                                                               {
                                                               SSX1=56;
                                                                masked_blit(bitmap, buffer, SSX1, SSY1, SW/2-32, SH/2-6, SSX, SSY);
                                                               }
                                                               
     
     }
     
                                     if (isitem!=true)       
     masked_blit(bitmap, buffer, SSX1, SSY1, x1+cam, y1+cam2, SSX, SSY);
     
     
                                     if (isitem==true && isactivated!=true)   
                                         
     masked_blit(bitmap, buffer, SSX1, SSY1, x1+cam, y1+cam2, SSX, SSY);
     
     if (isitem==true && isactivated==true && hud[0].slotfill[0]==false)
     {
                      
                      
      masked_blit(bitmap, buffer, 0, 0, hud[0].x1+15, hud[0].y1+10, 18, 10);
      
      }
      
      }
      
      else if (ispersistent==true)
      masked_blit(bitmap, buffer, SSX1, SSY1, x1, y1, SSX, SSY);
     }
     
     if (hB==true)
     blit(bitmap, buffer, SSX1, SSY1, hX+cam, hY+cam2, SSX, SSY);
      
    collision();
     }



            
            
                 


    #include <animations.h>
     
      void drawworld (void)
      {
           i++;
           
        
                
                
     
          
   
     drawobjects(buffer);
     
          
       
          player.draw();                 
          test1.draw();
          
          
          travelroute[3].draw();                
          travelroute[0].draw();                
          travelroute[1].draw();                
          travelroute[2].draw();                
          
                           if (mouse_x!=SW/2 && mouse_y!=SH/2)
     circlefill(buffer, mouse_x, mouse_y, 2, makecol(255,0,0));
}

int gravity(int y)
{
    
    
    
  
     
     return y;
     }



int main(){
 
 

 
    allegro_init();
    install_keyboard();
    install_mouse();
    
     
  mouse_x=20;
 mouse_y=20;
 mouse_b;
 set_mouse_speed(1, 3);
 
    set_color_depth (32);
    set_gfx_mode( GFX_AUTODETECT_WINDOWED, SW, SH, 0, 0);
    buffer = create_bitmap (SW, SH);
    
    
   
   
background=load_bitmap("./Images/worldmap.bmp", NULL);
 loadobj(buffer);
    loadch(buffer);

while (!key[KEY_ESC])
{
      timer1++;
      
      rest(5);
      

drawworld();
  
   
if (timer1>=40)
{
              
    timer1=0;
               }


blit (buffer, screen, 0, 0, 0, 0, SW, SH);
clear_bitmap(buffer);
}


    
    
    return 0;
    
}   
END_OF_MAIN();
