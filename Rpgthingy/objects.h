
int Deagle=0;

void loadobj(BITMAP *buffer)
            {
                    pHouse=load_bitmap("./Images/pHouse.bmp", NULL);
                    house_1=load_bitmap("./Images/house_1.bmp", NULL);
                    Store1=load_bitmap("./Images/House1.bmp", NULL);
                    grass1=load_bitmap("./Images/grass1.bmp", NULL);
                    road1=load_bitmap("./Images/road1.bmp", NULL);
                    fence1=load_bitmap("./Images/fence1.bmp", NULL);
                    hSS1=load_bitmap("./Images/hSS1.bmp", NULL);
                    hfurniture=load_bitmap("./Images/Hfurniture.bmp", NULL);
                    SSanim=load_bitmap("./Images/SSanim.bmp", NULL);
                    items=load_bitmap("./Images/items.bmp", NULL);
                    HUD=load_bitmap("./Images/hud.bmp", NULL);
                    
                 wall[0].x1=200;
                 wall[0].x2=200;
                 wall[0].y1=300;
                 wall[0].y2=400;
                 
                 wall[1].x1=340;
                 wall[1].x2=600;
                 wall[1].y1=300;
                 wall[1].y2=300;
                 
                 wall[2].x1=600;
                 wall[2].x2=600;
                 wall[2].y1=300;
                 wall[2].y2=600;
                 
                 wall[3].x1=200;
                 wall[3].x2=600;
                 wall[3].y1=600;
                 wall[3].y2=600;
                 
                 wall[4].x1=160;
                 wall[4].x2=250;
                 wall[4].y1=300;
                 wall[4].y2=300;
                 
                 wall[5].x1=520;
                 wall[5].x2=520;
                 wall[5].y1=80;
                 wall[5].y2=180;
                 
                 wall[6].x1=160;
                 wall[6].x2=520;
                 wall[6].y1=80;
                 wall[6].y2=80;
                 
                 wall[7].x1=160;
                 wall[7].x2=160;
                 wall[7].y1=80;
                 wall[7].y2=300;
                 
                 wall[8].x1=520;
                 wall[8].x2=520;
                 wall[8].y1=270;
                 wall[8].y2=300;
                 
                 wall[9].x1=200;
                 wall[9].x2=200;
                 wall[9].y1=490;
                 wall[9].y2=600;
                 
                 wall[10].x1=60;
                 wall[10].x2=200;
                 wall[10].y1=400;
                 wall[10].y2=400;
                 
                 wall[11].x1=60;
                 wall[11].x2=60;
                 wall[11].y1=400;
                 wall[11].y2=600;
                 
                 wall[12].x1=60;
                 wall[12].x2=200;
                 wall[12].y1=600;
                 wall[12].y2=600;
                 
                 wall[13].x1=-90;
                 wall[13].x2=730;
                 wall[13].y1=-40;
                 wall[13].y2=-40;
                 
                 wall[14].x1=-90;
                 wall[14].x2=-90;
                 wall[14].y1=-40;
                 wall[14].y2=800;
                 
                 wall[15].x1=-90;
                 wall[15].x2=730;
                 wall[15].y1=800;
                 wall[15].y2=800;
                 
                 wall[16].x1=730;
                 wall[16].x2=730;
                 wall[16].y1=-40;
                 wall[16].y2=150;
                 
                 wall[17].x1=730;
                 wall[17].x2=730;
                 wall[17].y1=280;
                 wall[17].y2=800;
                 
                 road[0].bmap=true;
                 road[0].bitmap=road1;
                 road[0].x1=730;
                 road[0].y1=-880;
                 road[0].SSX=350;
                 road[0].SSY=840;
                 
                 road[1].bmap=true;
                 road[1].bitmap=road1;
                 road[1].x1=730;
                 road[1].y1=-40;
                 road[1].SSX=350;
                 road[1].SSY=840;
                 
                 road[2].bmap=true;
                 road[2].bitmap=road1;
                 road[2].x1=730;
                 road[2].y1=800;
                 road[2].SSX=350;
                 road[2].SSY=841;
                 
                 house[0].mbmap=true;
                 house[0].bitmap=pHouse;
                 house[0].x1=60;
                 house[0].y1=80;
                 house[0].SSX=541;
                 house[0].SSY=521;
                 
                 house[2].mbmap=true;
                 house[2].bitmap=Store1;
                 house[2].x1=1150;
                 house[2].y1=700;
                 house[2].SSX=204;
                 house[2].SSY=362;
                 
                 house[3].mbmap=true;
                 house[3].bitmap=house_1;
                 house[3].x1=1200;
                 house[3].y1=230;
                 house[3].SSX=416;
                 house[3].SSY=343;
                 
                 wall[20].x1=1152;
                 wall[20].x2=1152;
                 wall[20].y1=700;
                 wall[20].y2=900;
                 
                 wall[21].x1=1152;
                 wall[21].x2=1152+house[2].SSX-10;
                 wall[21].y1=700;
                 wall[21].y2=700;
                 
                 wall[22].x1=1152+house[2].SSX;
                 wall[22].x2=1152+house[2].SSX;
                 wall[22].y1=700;
                 wall[22].y2=700+house[2].SSY;
                 
                 wall[23].x1=1152;
                 wall[23].x2=1152;
                 wall[23].y1=998;
                 wall[23].y2=700+house[2].SSY;
                 
                 wall[24].x1=1152;
                 wall[24].x2=1152+house[2].SSX-10;
                 wall[24].y1=700+house[2].SSY;
                 wall[24].y2=700+house[2].SSY;
                 
                 fence[0].mbmap=true;
                 fence[0].bitmap=fence1;
                 fence[0].x1=-90;
                 fence[0].y1=-40;
                 fence[0].SSX=500;
                 fence[0].SSY=6;
                 
                 fence[1].mbmap=true;
                 fence[1].bitmap=fence1;
                 fence[1].x1=-90+250+110;
                 fence[1].y1=-40;
                 fence[1].SSX=500;
                 fence[1].SSY=6;
                 
                 fence[2].mbmap=true;
                 fence[2].bitmap=fence1;
                 fence[2].x1=-90+250+250+310;
                 fence[2].y1=-40;
                 fence[2].SSX=450;
                 fence[2].SSY=215;
                 fence[2].SSX1=1;
                 fence[2].SSY1=7;
                 
                 fence[3].mbmap=true;
                 fence[3].bitmap=fence1;
                 fence[3].x1=-90+250+250+310;
                 fence[3].y1=-40+215+105;
                 fence[3].SSX=450;
                 fence[3].SSY=500;
                 fence[3].SSX1=1;
                 fence[3].SSY1=7;
                 
                 fence[4].mbmap=true;
                 fence[4].bitmap=fence1;
                 fence[4].x1=-90+250+250+310;
                 fence[4].y1=-40+215+50+450;
                 fence[4].SSX=450;
                 fence[4].SSY=120;
                 fence[4].SSX1=1;
                 fence[4].SSY1=7;
                 
                 fence[5].mbmap=true;
                 fence[5].bitmap=fence1;
                 fence[5].x1=-90+250+110;
                 fence[5].y1=-40+215+50+450+120;
                 fence[5].SSX=500;
                 fence[5].SSY=6;
                 
                 fence[6].mbmap=true;
                 fence[6].bitmap=fence1;
                 fence[6].x1=-90+250+110-360;
                 fence[6].y1=-40+215+50+450+120;
                 fence[6].SSX=500;
                 fence[6].SSY=6;
                 
                 fence[7].mbmap=true;
                 fence[7].bitmap=fence1;
                 fence[7].x1=-90;
                 fence[7].y1=-40;
                 fence[7].SSX=450;
                 fence[7].SSY=450;
                 fence[7].SSX1=1;
                 fence[7].SSY1=7;
                 
                 fence[8].mbmap=true;
                 fence[8].bitmap=fence1;
                 fence[8].x1=-90;
                 fence[8].y1=-40+450;
                 fence[8].SSX=450;
                 fence[8].SSY=390;
                 fence[8].SSX1=1;
                 fence[8].SSY1=7;
                 
                 grass[0].x1=-90;
                 grass[0].y1=-40;
  
                 grass[1].x1=-90;
                 grass[1].y1=-881;
                 
                 grass[2].x1=-90;
                 grass[2].y1=801;
                 
                 grass[3].x1=-90-821;
                 grass[3].y1=801;
                    
                 grass[4].x1=-90-821;
                 grass[4].y1=-40;
                 
                 grass[5].x1=-90-821;
                 grass[5].y1=-881;
                 
                 grass[6].x1=630;
                 grass[6].y1=-40;
                 
                 grass[7].x1=630;
                 grass[7].y1=-881;
                 
                 grass[8].x1=630;
                 grass[8].y1=800;
                 
                 grass[9].x1=630+821;
                 grass[9].y1=-881;
                 
                 grass[10].x1=630+821;
                 grass[10].y1=-40;
                 
                 
                 grass[11].x1=630+821;
                 grass[11].y1=800;
               
                 bed[0].bmap=true;
                 bed[0].bitmap=hfurniture;
                 bed[0].x1=550;
                 bed[0].y1=490;
                 bed[0].SSX=40;
                 bed[0].SSY=100;
                 bed[0].SSX1=41;
                 bed[0].collide=true;
                 
                 toilet[0].mbmap=true;
                 toilet[0].bitmap=hfurniture;
                 toilet[0].x1=100;
                 toilet[0].y1=405;
                 toilet[0].SSX=22;
                 toilet[0].SSY=32;
                 toilet[0].SSX1=386;
                 toilet[0].SSY1=0;
                 toilet[0].collide=false;
                 
                 sink[0].mbmap=true;
                 sink[0].bitmap=hfurniture;
                 sink[0].x1=69;
                 sink[0].y1=460;
                 sink[0].SSX=19;
                 sink[0].SSY=29;
                 sink[0].SSX1=409;
                 sink[0].SSY1=0;
                 sink[0].collide=true;
                 
                 kitchensink[0].bmap=true;
                 kitchensink[0].bitmap=hfurniture;
                 kitchensink[0].x1=165+36+36;
                 kitchensink[0].y1=87;
                 kitchensink[0].SSX=36;
                 kitchensink[0].SSY=33;
                 kitchensink[0].SSX1=605;
                 kitchensink[0].SSY1=0;
                 kitchensink[0].collide=true;
                 
              
                 stove[0].bmap=true;
                 stove[0].bitmap=hfurniture;
                 stove[0].x1=165+36;
                 stove[0].y1=87;
                 stove[0].SSX=36;
                 stove[0].SSY=33;
                 stove[0].SSX1=568;
                 stove[0].SSY1=0;
                 stove[0].collide=true;
                 
                 fridge[0].bmap=true;
                 fridge[0].bitmap=hfurniture;
                 fridge[0].x1=165;
                 fridge[0].y1=83;
                 fridge[0].SSX=36;
                 fridge[0].SSY=37;
                 fridge[0].SSX1=642;
                 fridge[0].SSY1=0;
                 fridge[0].collide=true;
                 
                 bathtub[0].mbmap=true;
                 bathtub[0].bitmap=hfurniture;
                 bathtub[0].x1=96;
                 bathtub[0].y1=564;
                 bathtub[0].SSX=70+31;
                 bathtub[0].SSY=31;
                 bathtub[0].SSX1=430;
                 bathtub[0].SSY1=0;
                 bathtub[0].collide=true;
                 
                 door[0].mbmap=true;
                 door[0].bitmap=SSanim;
                 door[0].x1=252;
                 door[0].y1=300;
                 door[0].SSX=86;
                 door[0].SSY=87;
                 door[0].SSX1=0;

                 door[1].mbmap=true;
                 door[1].bitmap=SSanim;
                 door[1].x1=518;
                 door[1].y1=182;
                 door[1].SSX=86;
                 door[1].SSY=87;
                 door[1].SSX1=0;
                 door[1].SSY1=87;
            
                 door[2].mbmap=true;
                 door[2].bitmap=SSanim;
                 door[2].x1=198;
                 door[2].y1=403;
                 door[2].SSX=86;
                 door[2].SSY=87;
                 door[2].SSX1=0;
                 door[2].SSY1=87;
                 
                 mat[0].bmap=true;
                 mat[0].bitmap=hfurniture;
                 mat[0].x1=280;
                 mat[0].y1=410;
                 mat[0].SSX=62;
                 mat[0].SSY=100;
                 mat[0].SSX1=82;
                 
                 deagle[0].isitem=true;
                 deagle[0].mbmap=true;
                 deagle[0].bitmap=items;
                 deagle[0].x1=424;
                 deagle[0].y1=470;
                 deagle[0].SSX=16;
                 deagle[0].SSY=10;
                 deagle[0].SSX1=0;
                 deagle[0].item=Deagle;
            
            
                 deagle[1].isitem=true;
                 deagle[1].mbmap=true;
                 deagle[1].bitmap=items;
                 deagle[1].x1=260;
                 deagle[1].y1=470;
                 deagle[1].SSX=16;
                 deagle[1].SSY=10;
                 deagle[1].SSX1=0;
                 deagle[1].item=Deagle;
                 
                 hud[0].ispersistent=true;
                 hud[0].mbmap=true;
                 hud[0].bitmap=HUD;
                 hud[0].y1=30;
                 hud[0].SSX=162;
                 hud[0].SSY=26;
                 hud[0].SSX1=0;
                 hud[0].x1=SW/2-hud[0].SSX;
                 hud[0].slotfill[0]=false;
                 hud[0].slotfill[1]=false;
                 hud[0].slotfill[2]=false;
                 hud[0].slotfill[3]=false;
                 
                 cupboard[0].bmap=true;
                 cupboard[0].bitmap=hfurniture;
                 cupboard[0].x1=418;
                 cupboard[0].y1=460;
                 cupboard[0].SSX=31;
                 cupboard[0].SSY=75;
                 cupboard[0].SSX1=355;
                 cupboard[0].collide=true;
                 
                 shopcounterGR[0].bmap=true;
                 shopcounterGR[0].bitmap=hfurniture;
                 shopcounterGR[0].x1=1200;
                 shopcounterGR[0].y1=800;
                 shopcounterGR[0].SSX=30;
                 shopcounterGR[0].SSY=83;
                 shopcounterGR[0].SSX1=0;
                 shopcounterGR[0].SSY1=101;
                 shopcounterGR[0].collide=true;
                 
                 shopcounterGR[1].bmap=true;
                 shopcounterGR[1].bitmap=hfurniture;
                 shopcounterGR[1].x1=1270;
                 shopcounterGR[1].y1=800;
                 shopcounterGR[1].SSX=30;
                 shopcounterGR[1].SSY=83;
                 shopcounterGR[1].SSX1=0;
                 shopcounterGR[1].SSY1=101;
                 shopcounterGR[1].collide=true;
                 
                 shopcounterGR[2].mbmap=true;
                 shopcounterGR[2].bitmap=hfurniture;
                 shopcounterGR[2].x1=1190;
                 shopcounterGR[2].y1=710;
                 shopcounterGR[2].SSX=78;
                 shopcounterGR[2].SSY=38;
                 shopcounterGR[2].SSX1=97;
                 shopcounterGR[2].SSY1=101;
                 shopcounterGR[2].collide=true;
                 
                 shoppay[0].bmap=true;
                 shoppay[0].bitmap=hfurniture;
                 shoppay[0].x1=1270;
                 shoppay[0].y1=990;
                 shoppay[0].SSX=28;
                 shoppay[0].SSY=62;
                 shoppay[0].SSX1=31;
                 shoppay[0].SSY1=101;
                 shoppay[0].collide=true;
                 
                 shoppay[1].mbmap=true;
                 shoppay[1].bitmap=hfurniture;
                 shoppay[1].x1=1270;
                 shoppay[1].y1=990-27;
                 shoppay[1].SSX=28;
                 shoppay[1].SSY=27;
                 shoppay[1].SSX1=125;
                 shoppay[1].SSY1=162;
                 shoppay[1].collide=true;
                 
                 
                 simonsbreda[0].mbmap=true;
                 simonsbreda[0].bitmap=hfurniture;
                 simonsbreda[0].x1=273;
                 simonsbreda[0].y1=87;
                 simonsbreda[0].SSX=43;
                 simonsbreda[0].SSY=33;
                 simonsbreda[0].SSX1=681;
                 simonsbreda[0].collide=true;
                 
                 simonsbreda[1].mbmap=true;
                 simonsbreda[1].bitmap=hfurniture;
                 simonsbreda[1].x1=314;
                 simonsbreda[1].y1=87;
                 simonsbreda[1].SSX=43;
                 simonsbreda[1].SSY=33;
                 simonsbreda[1].SSX1=681;
                 simonsbreda[1].collide=true;
                 
                 mat[1].mbmap=true;
                 mat[1].bitmap=hfurniture;
                 mat[1].x1=110;
                 mat[1].y1=470;
                 mat[1].SSX=72;
                 mat[1].SSY=100;
                 mat[1].SSX1=145;
            
                 bush[0].bmap=true;
                 bush[0].bitmap=hfurniture;
                 bush[0].x1=605;
                 bush[0].y1=395;
                 bush[0].SSX=35;
                 bush[0].SSY=91;
                 bush[0].SSX1=283;
                 bush[0].collide=true;
                 
                 bush[1].bmap=true;
                 bush[1].bitmap=hfurniture;
                 bush[1].x1=605;
                 bush[1].y1=395-91;
                 bush[1].SSX=35;
                 bush[1].SSY=91;
                 bush[1].SSX1=283+36;
                 bush[1].collide=true;
                 
                 bush[2].bmap=true;
                 bush[2].bitmap=hfurniture;
                 bush[2].x1=605;
                 bush[2].y1=395+91;
                 bush[2].SSX=35;
                 bush[2].SSY=91;
                 bush[2].SSX1=532;
                 bush[2].collide=true;
                 
                 
                 trail[0].mbmap=true;
                 trail[0].bitmap=hfurniture;
                 trail[0].x1=523;
                 trail[0].y1=178;
                 trail[0].SSX=62;
                 trail[0].SSY=102;
                 trail[0].SSX1=220;
                 
                 trail[1].mbmap=true;
                 trail[1].bitmap=hfurniture;
                 trail[1].x1=523+58;
                 trail[1].y1=178;
                 trail[1].SSX=62;
                 trail[1].SSY=102;
                 trail[1].SSX1=220;
                 
                 trail[2].mbmap=true;
                 trail[2].bitmap=hfurniture;
                 trail[2].x1=523+58+58;
                 trail[2].y1=178;
                 trail[2].SSX=62;
                 trail[2].SSY=102;
                 trail[2].SSX1=220;
                 
                 trail[3].mbmap=true;
                 trail[3].bitmap=hfurniture;
                 trail[3].x1=523+58+58+58;
                 trail[3].y1=178;
                 trail[3].SSX=62;
                 trail[3].SSY=102;
                 trail[3].SSX1=220;
                 
                 wall[18].x1=415;
                 wall[18].x2=415;
                 wall[18].y1=415;
                 wall[18].y2=600;
                 
                 wall[19].x1=415;
                 wall[19].x2=415;
                 wall[19].y1=100;
                 wall[19].y2=240;
                 
                 wall[20].x1=79;
                 wall[20].x2=79;
                 wall[20].y1=55;
                 wall[20].y2=177;
                 
                 wall[21].x1=415;
                 wall[21].x2=415;
                 wall[21].y1=100;
                 wall[21].y2=240;
                  }
                 
                                  int i2=0;
                 void drawobjects(BITMAP *buffer)
                 {
grass[i2].bitmap=grass1;
grass[i2].bmap=true;     
grass[i2].SSX=821;
grass[i2].SSY=841;
grass[i2].collide=false;
grass[i2].x2=-910;
grass[i2].y2=-882;

fence[i2].x2=-910;
fence[i2].y2=-882;


door[i2].isdoor=true;
i2++;

if (i2>19)
i2=0;

                      grass[0].draw();
                      grass[1].draw();
                      grass[2].draw();
                      grass[3].draw();
                      grass[4].draw();
                      grass[5].draw();
                      grass[6].draw();
                      grass[7].draw();
                      grass[8].draw();
                      grass[9].draw();
                      grass[10].draw();
                      grass[11].draw();
                      
                           wall[0].draw(); 
                           wall[1].draw(); 
                           wall[2].draw(); 
                           wall[3].draw(); 
                           wall[4].draw(); 
                           wall[5].draw(); 
                           wall[6].draw(); 
                           wall[7].draw(); 
                           wall[8].draw(); 
                           wall[9].draw(); 
                           wall[10].draw(); 
                           wall[11].draw(); 
                           wall[12].draw(); 
                           wall[13].draw(); 
                           wall[14].draw(); 
                           wall[15].draw(); 
                           wall[16].draw(); 
                           wall[17].draw(); 
                           wall[18].draw(); 
                           wall[19].draw(); 
                           wall[20].draw(); 
                           wall[21].draw(); 
                           wall[22].draw(); 
                           wall[23].draw(); 
                           wall[24].draw(); 
                            
                         trail[0].draw();
                        trail[1].draw();
                        trail[2].draw();
                        trail[3].draw();
                           
                           road[0].draw();
                           road[1].draw();
                           road[2].draw();
                      
                      
                      fence[0].draw();
                      fence[1].draw();
                      fence[2].draw();
                      fence[3].draw();
                      fence[4].draw();
                      
                           fence[5].draw();
                           fence[6].draw();
                           fence[7].draw();
                           fence[8].draw();
                           
                           house[0].draw();
                           house[2].draw();
                           house[3].draw();
                           
                           toilet[0].draw();
                           
                           sink[0].draw();
                           
                           kitchensink[0].draw();
                           
                            simonsbreda[0].draw();
                            simonsbreda[1].draw();
                            
                           stove[0].draw();
                           
                           fridge[0].draw();
                           
                           bathtub[0].draw();
                           
                           bed[0].draw();
                           
                        mat[0].draw();
                        mat[1].draw();
                        
                        cupboard[0].draw();
                        
                        shopcounterGR[0].draw();
                        shopcounterGR[1].draw();
                        shopcounterGR[2].draw();
                        
                        shoppay[0].draw();
                        shoppay[1].draw();
                        
                        bush[0].draw();
                        bush[1].draw();                        
                        bush[2].draw();

                        door[0].draw();
                        door[1].draw();
                        door[2].draw();
                        
                        
                        hud[0].draw();
                        deagle[0].draw();
                        gunFIRE[0].draw();
                        //deagle[1].draw();
                        
                        }
