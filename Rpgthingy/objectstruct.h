struct OBJECTS
{

     char *ID;
     
     int ammo;
     int ammo_max;
     
       int x1;
       int y1;
       
       bool isHud;
        bool slotfill[3];
      
      bool hastext;
      
       bool bmap;
       bool mbmap;
       
       int status[];
       
       bool equipped;
       int x2;
       int y2;
       
       
       
       char item;
      

bool hB;

bool ishouse;
bool isobject;
bool isopen;
 bool isitem;
 bool ispersistent;
 bool isblood;
 
       int w;
       int h;
       
      int *xpos;
      int *ypos;
       
       BITMAP *bitmap;
       
       int SSX;
       int SSY;
       
       bool isdoor;
       bool isactivated;
       bool istarget;
       
       int SSX1;
       int SSY1;
       
       bool collide;
       
       int hX;
       int hY;
       
       int color;
       char path;

  void OSTATUS(BITMAP *buffer);
  void saveobjects(BITMAP *buffer);
    void reload(BITMAP *buffer);
void collision();

       void draw();
       
       }
        
       deagle[1000],
       gunFIRE[1000],
       wall[1000], 
       road[1000], 
       hud[1000],
       trail[1000], 
       house[1000], 
       grass[1000], 
       fence[1000], 
       bed[1000], 
       target[1000],
       mat[1000], 
       shopcounterGR[1000],
       shoppay[1000],
       bush[1000], 
       cupboard[1000],
       sink[1000],
       simonsbreda[1000],
       toilet[1000],
       bathtub[1000],
       fridge[1000],
       stove[1000],
       kitchensink[1000],
       bloodstain[1000],
       door[1000];
       
       void OBJECTS::OSTATUS(BITMAP *buffer)
       {
          


       if (ID!=NULL)
       {
       FOBJECTS << ID;
       FOBJECTS << " //ID";
       FOBJECTS << endl;
    }
    
      else
       {
       FOBJECTS << "NO ID";
       FOBJECTS << " //ID";
       FOBJECTS << endl;
    }
       
       FOBJECTS << x1;
       FOBJECTS << " //x1";
       FOBJECTS << endl;
       
       FOBJECTS << y1;
       FOBJECTS << " //y1";
       FOBJECTS << endl;
       
       FOBJECTS << x2;
       FOBJECTS << "// x2";
       FOBJECTS << endl;
       
       FOBJECTS << y2;
       FOBJECTS << " //y2";
       FOBJECTS << endl;
       
        FOBJECTS << bmap;
       FOBJECTS << "// bmap";
       FOBJECTS << endl;
       
       FOBJECTS << mbmap;
       FOBJECTS << " //mbmap";
       FOBJECTS << endl;
       
       FOBJECTS << isdoor;
       FOBJECTS << " //isdoor";
       FOBJECTS << endl;
       
       FOBJECTS << ishouse;
       FOBJECTS << " //ishouse";
       FOBJECTS << endl;
       
       FOBJECTS << ispersistent;
       FOBJECTS << " //ispersistent";
       FOBJECTS << endl;
       
       FOBJECTS << isactivated;
       FOBJECTS << " //isactivated";
       FOBJECTS << endl;
       
       FOBJECTS << SSX;
       FOBJECTS << " //SSX";
       FOBJECTS << endl;
       
       FOBJECTS << SSY;
       FOBJECTS << " //SSY";
       FOBJECTS << endl;
       
       FOBJECTS << SSX1;
       FOBJECTS << " //SSX1";
       FOBJECTS << endl;
       
       FOBJECTS << SSY1;
       FOBJECTS << " //SSY1";
       FOBJECTS << endl;
       
       FOBJECTS << isitem;
       FOBJECTS << " //isitem";
       FOBJECTS << endl;
       
       FOBJECTS << isopen;
       FOBJECTS << " //isopen";
       FOBJECTS << endl;
       
       FOBJECTS << collide;
       FOBJECTS << " //collide";
       FOBJECTS << endl;
       
       FOBJECTS << isobject;
       FOBJECTS << " //isobject";
       FOBJECTS << endl;
       FOBJECTS << endl;
        }
         
         void OBJECTS::saveobjects(BITMAP *buffer)
{
     
if (quit==true)
OSTATUS(buffer);

}

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
                             x1=ofX+SW+85-player.r;
                             y1=ofY+SH+380-player.r;
                             }
                             
                             else if (player.dir==4)
                             {
                             x1=ofX+SW+140-player.r;
                             y1=ofY+SH+380-player.r;
                             }
                             else if (player.dir==1)
                             {
                             x1=ofX+SW+115-player.r;
                             y1=ofY+SH+355-player.r;
                             }
                             
                             else if (player.dir==3)
                             {
                             x1=ofX+SW+115-player.r;
                             y1=ofY+SH+405-player.r;
                             }
                             }
                             
                         
if (istarget!=true)
{
               n1++;
               
               if (n1>=max_npc)
               n1=0;    
                   
if (NPC[n1].x>=x1-20 && NPC[n1].x<=x2+20
&& NPC[n1].y>=y1-20 && NPC[n1].y<=y2+20 && collide!=true
|| (NPC[n1].x>=x1-10 
&& NPC[n1].x<=x1+SSX+10
&& NPC[n1].y>=y1-10 
&& NPC[n1].y<=y1+SSY+10
&& collide==true)

 || (SSY1==87 
 && NPC[n1].x>=x1-15
 && NPC[n1].x<=x1+15
 && NPC[n1].y>=y1
 && NPC[n1].y<=y1+SSY
 && isopen!=true 
 && isdoor==true)
 
 ||(SSY1==0 
 && NPC[n1].x>=x1
 && NPC[n1].x<=x1+SSX
 && NPC[n1].y>=y1-15
 && NPC[n1].y<=y1+15
 && isopen!=true 
 && isdoor==true))
{
    NPC[n1].iscollided=true;
}
}
    
                  
                  if (istarget!=true)
{
if (player.gshotX>=x1-20+cam && player.gshotX<=x2+20+cam
&& player.gshotY>=y1-20+cam2 && player.gshotY<=y2+20+cam2 && collide!=true
|| (player.gshotX>=x1-10+cam 
&& player.gshotX<=x1+SSX+10+cam
&& player.gshotY>=y1-10 +cam2
&& player.gshotY<=y1+SSY+10+cam2
&& collide==true)

 || (SSY1==87 
 && player.gshotX>=x1-15+cam
 && player.gshotX<=x1+15+cam
 && player.gshotY>=y1+cam2
 && player.gshotY<=y1+SSY+cam2
 && isopen!=true 
 && isdoor==true)
 
 ||(SSY1==0 
 && player.gshotX>=x1+cam
 && player.gshotX<=x1+SSX+cam
 && player.gshotY>=y1-15+cam2
 && player.gshotY<=y1+15+cam2
 && isopen!=true 
 && isdoor==true))
{
    circlefill(buffer, player.gshotX, player.gshotY, 5, makecol(255, 255, 0));
              
              player.gshotX=-1000;
              player.gshotY=-1000;
                  }
                  }
                  
if (!key[KEY_LCONTROL])
      if (actor[0].y>=y1+cam2-actor[0].r && actor[0].y<=y2+cam2+actor[0].r && actor[0].x>=x1+cam-actor[0].r && actor[0].x <=x2+cam+actor[0].r && collide!=true 
      || (SSY1==87 && actor[cAct].x>=x1-15+cam && actor[cAct].x<=x1+15+cam && actor[cAct].y>=y1+cam2 && actor[cAct].y<=y1+SSY+cam2 && isopen!=true && isdoor==true)
      ||(SSY1==0 && actor[cAct].x>=x1+cam && actor[cAct].x<=x1+SSX+cam && actor[cAct].y>=y1-15+cam2 && actor[cAct].y<=y1+15+cam2 && isopen!=true && isdoor==true)
      ||(actor[cAct].x>=x1+cam-10 && actor[cAct].x<=x1+SSX+10+cam && actor[cAct].y>=y1-10+cam2 && actor[cAct].y<=y1+SSY+10+cam2 && collide==true))
    {
                              
                                  
                                 

    if (actor[0].isNPC!=true)
    {                 
                      player.iscollided=true;
    
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
       

     void OBJECTS::reload(BITMAP *buffer)
     {
          ammo=ammo_max;
          }
void OBJECTS::draw()
{
    
     if (equipped==true)
     {
                        
     if (key[KEY_R] && player.itemout==true)
     {
                    reload(buffer);
                    }
                    
     if (player.gunfireT==2 && equipped==true && player.gunfire==true)
     {
                               ammo-=1;
                               }
                               
                               if (player.gunfire==true && ammo<=0 && equipped==true)
                               {
                               player.gunfire1=false;
                               player.gunfire=false;
                               player.gshotX=-1000;
                               player.gshotY=-1000;
                               }
                        }
                    
    saveobjects(buffer);


  
  if (collide==true)
  {
     x2=x1+SSX1;
     y2=y1+SSY1;
}
else 
{
     }
     
  
     if (bmap==true && isHud!=true)
     {
     blit(bitmap, buffer, SSX1, SSY1, x1+cam, y1+cam2, SSX, SSY);
     }
     
     if (mbmap==true && isHud!=true)
     if(!key[KEY_LCONTROL] || collide!=false || isitem==true || isdoor==true || ishouse!=true)  
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
                                     {
                                     
     masked_blit(bitmap, buffer, SSX1, SSY1, x1+cam, y1+cam2, SSX, SSY);
       }
                                     if (isitem==true && isactivated!=true)   
                                         
     masked_blit(bitmap, buffer, SSX1, SSY1, x1+cam, y1+cam2, SSX, SSY);
     
      
      }
      
      else if (ispersistent==true)
      masked_blit(bitmap, buffer, SSX1, SSY1, x1, y1, SSX, SSY);
     }
     
     if (hB==true)
     blit(bitmap, buffer, SSX1, SSY1, hX+cam, hY+cam2, SSX, SSY);
      
      
      if (isblood==true)
     {
         circlefill(buffer, x1, y1, 3, makecol(255, 0, 0));   
        }
        
    collision();
    
 


if (isHud==true)
{
                 masked_blit(bitmap, buffer, SSX1, SSY1, 0, 0, SSX, SSY);
                 
                
                }
                if (equipped==true)
                {
                textprintf_ex(buffer, font, SW-100 , SH-50, makecol(0, 0, 0), -1, "%i", ammo);
                }
     if (isitem==true && isactivated==true && hud[0].slotfill[0]==false)
     {
                      
                      
      masked_blit(bitmap, buffer, 0, 0, hud[0].x1+15+459, hud[0].y1+10, 18, 10);
      
      }
      
     }