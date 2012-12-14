
 
void PLAYER::animation(BITMAP *buffer)
{
     if (HP<=0)
     {
               isDead=true;
               }
               
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
                {
                  
                gshotX+=40;
            }
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
                                        if (gunfireT<12)
                                        masked_blit(items, buffer, 43, 30, x-r-23, y-(r/2)+6, 13, 43-30);
                                           
                                           if (gunfireT<7) 
                                           {
                                                
                                            ofX++;
                                        }
                                            
                                           if (gunfireT>=7)
                                            ofX--;
                                            }
                                            
                                 if (dir==4)
                                 {
                                        if (gunfireT<12)
                                        masked_blit(items, buffer, 15, 30, x+r+9, y-(r/2)+3, 13, 43-30);
                                            
                                           if (gunfireT<7) 
                                           {
                                                  
                                            ofX--;
                                        }
                                            
                                           if (gunfireT>=7)
                                            ofX++;
                                            }
                                 
                                 if (dir==1)
                                 {
                                        if (gunfireT<12)
                                        masked_blit(items, buffer, 1, 30, x-r/2+2, y-r*2-3, 13, 43-30);
                                           
                                           if (gunfireT<7) 
                                            ofY++;
                                            
                                           if (gunfireT>=7)
                                            ofY--;
                                            }
                                            
                                 if (dir==3)
                                 {
                                          if (gunfireT<12)
                                        masked_blit(items, buffer, 29, 30, x-r/2+5, y+r+9, 13, 43-30);
                                           
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
                                                 if (player.gunfire==true)
                                 if (player.gshotX>=x+cam-r 
                                 && player.gshotX<=x+cam+r 
                                 && player.gshotY>=y+cam2-r 
                                 && player.gshotY<=y+cam2+r
                                 || (player.gshotX>=x-3+cam-r 
                                 && player.gshotX<=x-3+cam+r 
                                 && player.gshotY>=y-3+cam2-r 
                                 && player.gshotY<=y-3+cam2+r
                                 || (player.gshotX>=x+3+cam-r 
                                 && player.gshotX<=x+3+cam+r 
                                 && player.gshotY>=y+3+cam2-r 
                                 && player.gshotY<=y+3+cam2+r)))
                                 
                                 isShot=true;
                                 
                                 if (isShot==true)
                                 {
                                 if (player.dir==4)
                                 {
                                      
                                                   dir=4;
                                 }
                                 else if (player.dir==3)
                                 {
                                      
                                      dir=3;
                                     
                                 }
                                 else if (player.dir==2)
                                 {
                                      
                                      dir=2;
                                     
                                 }
                                 else if (player.dir==1)
                                 {
                                      
                                      dir=1;
                                     
                                 }
                                 
                                 }
}
}
