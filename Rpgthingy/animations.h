

void PLAYER::animation(BITMAP *buffer)
{
if ((key[KEY_W] || key[KEY_A] || key[KEY_S] || key[KEY_D]) && isNPC!=true)
{
               timer2+=speed/2;
               
               if (timer2>=17)
               {
               SSY=41;
               if (timer2>=30)
               timer2=0;
               }
               else SSY=0;
               }
               else if (isNPC==true && isMoving==true)
{
               timer2+=speed/2;
               
               if (timer2>=17)
               {
               SSY=41;
               if (timer2>=30)
               timer2=0;
               }
               else SSY=0;
               }
               
               if (itemout==true && key[KEY_SPACE] && isNPC!=true && gunfireT==0)
               {
                                 gunfireT++;
                                 gunfire1=true;
                                 
                                 if (gunfire1==true)
                                 {
                                 tempX=x;
                                 tempY=y-2;
               
               gshotX=tempX;
               gshotY=tempY;
               
               gunfire=true;
               gunfire1=false;
               }
               }
               if (gunfire==true)
               {
               
                if (dir==4)
                gshotX+=40;
                if (dir==2)
                gshotX-=40;
                if (dir==3)
                gshotY+=40;
                if (dir==1)
                gshotY-=40;
                                 gunfireT++;
                                 
                                 if (gunfireT<=11)
                                 {
                                                 
                                 if (dir==2)
                                 {
                                           
                                           if (gunfireT<7) 
                                            ofX++;
                                            
                                           if (gunfireT>=7)
                                            ofX--;
                                            }
                                            
                                 if (dir==4)
                                 {
                                            
                                           if (gunfireT<7) 
                                            ofX--;
                                            
                                           if (gunfireT>=7)
                                            ofX++;
                                            }
                                 
                                 if (dir==1)
                                 {
                                           if (gunfireT<7) 
                                            ofY++;
                                            
                                           if (gunfireT>=7)
                                            ofY--;
                                            }
                                            
                                 if (dir==3)
                                 {
                                           if (gunfireT<7) 
                                            ofY--;
                                            
                                           if (gunfireT>=7)
                                            ofY++;
                                            }
                                 }
                                 
                                 if (gunfireT>=40)
                                 {
                                                  gunfire=false;
                                 gunfireT=0;
                                 }
                                 }
                                 
                                 if (isNPC==true)
                                 {
                                 if (player.gshotX>=x+cam-r && player.gshotX<=x+cam+r && player.gshotY>=y+cam2-r && player.gshotY<=y+cam2+r)
                                 if (player.dir==4)
                                 x+=10;
                                 else if (player.dir==3)
                                 y+=10;
                                 else if (player.dir==2)
                                 x-=10;
                                 else if (player.dir==1)
                                 y-=10;
}
}