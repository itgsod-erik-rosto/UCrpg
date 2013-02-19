struct ANIMATIONS : PLAYER
{
       BITMAP *bitmap;
       
       int F_i;
       int F_time;
       int F_time_max;
       int F_amount;
       int F[10];
       int FH[10];
       int F_current;
       int F_W;
       int F_H;
       int ANIM_time_total;
       int ANIM_time_total_counter;
       
      void playanimation();
       }test;
       void ANIMATIONS::playanimation()
       {
            ANIM_time_total=F_time_max*F_amount-1;
            ANIM_time_total_counter++;
            if (ANIM_time_total_counter<=ANIM_time_total)
            {
            player.isinanimation=true;
            
            F_time++;
            
            
        masked_blit (TESTAN, buffer, F[F_i], FH[F_i]-1, x+520, y+315, F_W, F_H);              
                    
            if (F_time>=F_time_max && F_i<F_amount-1)
            {
                                   F_i++;
                                   F_time=0;
                                   
                    }
                    }
                    else player.isinanimation=false;
                      }
                      void load_anims()
                      {
                           test.bitmap=TESTAN;
                           test.F_time_max=20;
                           test.F_amount=3;
                           test.F[0]=1;
                           test.F[1]=41;
                           test.F[2]=82;
                           test.FH[0]=42;
                           test.FH[1]=42;
                           test.FH[2]=42;
                           test.F_W=39;
                           test.F_H=39;
                           }
 
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
               
               if (itemout==true && itemeq==true && key[KEY_SPACE] && isNPC!=true && gunfireT==0)
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
                                                
                                            ofX.varvalue++;
                                        }
                                            
                                           if (gunfireT>=7)
                                            ofX.varvalue--;
                                            }
                                            
                                 if (dir==4)
                                 {
                                        if (gunfireT<12)
                                        masked_blit(items, buffer, 15, 30, x+r+9, y-(r/2)+3, 13, 43-30);
                                            
                                           if (gunfireT<7) 
                                           {
                                                  
                                            ofX.varvalue--;
                                        }
                                            
                                           if (gunfireT>=7)
                                            ofX.varvalue++;
                                            }
                                 
                                 if (dir==1)
                                 {
                                        if (gunfireT<12)
                                        masked_blit(items, buffer, 1, 30, x-r/2+2, y-r*2-3, 13, 43-30);
                                           
                                           if (gunfireT<7) 
                                            ofY.varvalue++;
                                            
                                           if (gunfireT>=7)
                                            ofY.varvalue--;
                                            }
                                            
                                 if (dir==3)
                                 {
                                          if (gunfireT<12)
                                        masked_blit(items, buffer, 29, 30, x-r/2+5, y+r+9, 13, 43-30);
                                           
                                           if (gunfireT<7) 
                                            ofY.varvalue--;
                                            
                                           if (gunfireT>=7)
                                            ofY.varvalue++;
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
