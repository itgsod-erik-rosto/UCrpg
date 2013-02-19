
void coc(int t_cell_i)
{
     
     player.getcell=cell[t_cell_i].cellnumber;
     ofX.varvalue=cell[t_cell_i].x2+cell[t_cell_i].x1-640;
     ofY.varvalue=cell[t_cell_i].y2+cell[t_cell_i].y1-700;
     }
void DRAW_MAP()
{
     
     
     }
void commands(BITMAP *buffer)
{
  
     
if (GAME.SAVE==true)
{
saveF(buffer);
}

if (GAME.LOAD==true)
{
                     clear_to_color(screen, makecol(255, 255, 255));
 clear_to_color(MAP, makecol(255, 255, 255));
 textprintf_ex(screen,font,510,SH/2, makecol(255, 0, 0), -1, "Loading saved game...", NULL);
  
  
          
       load_npcs(buffer);
       loadF(buffer);
                    GAME.LOAD=false;
                    }
                    
                    
     if (key[KEY_0])
     coc(0);
     if (key[KEY_1])
     coc(1);
     if (key[KEY_2])
     coc(2);
     if (key[KEY_3])
     coc(3);
     if (key[KEY_4])
     coc(4);      
     if (key[KEY_5])
     coc(5);
     if (key[KEY_6])
     coc(6);      
     if (key[KEY_7])
     coc(7);
        
     if (key[KEY_P] && P_timer<=0)
     {
                    if (GAME.PAUSE!=true)
                    {
                    P_timer=0;
                    GAME.PAUSE=true;
                    }
                    }
                    if (GAME.PAUSE==true && P_timer<=100)
                    {
                                         P_timer++;
                                         }
                    if (key[KEY_P] && GAME.PAUSE==true && P_timer>=10)
                    {
                                   
                    GAME.PAUSE=false;
                    
                    }
                    if (GAME.PAUSE==false && P_timer>=-100)
                    {
                                          
                                          P_timer--;
                                          }
                                          
                    
     
if (key[KEY_O])
showobjectframes=true;


else if (key[KEY_L])
showobjectframes=false;

     }
void fpscounter(BITMAP *buffer)
{
      
     if (fpsclock==0)
     {    
     fps1++;
     }
     if (fpsclock==1)
     fps=fps1;
     
     fps=fps;
         textprintf_ex(buffer,font,150,630, makecol(255, 0, 0), -1, "FPS: %i", fps);
         
                  //textprintf_ex(buffer,font,150,650, makecol(0, 0, 0), -1, "FPSclock: %i", fpsclock);
     }
void settime(long int H, long int M)
{
     tclockH=H;
     tclockM=M;
     }
void Wclock(BITMAP *buffer)
{
     
      if (TIME==0)
        GAME.PAUSE=true;
        else 
        GAME.PAUSE=false;
        
     if (tclockH>=15)
     {
     sh[0]=10;
     sh[1]=10;
     sh[2]=10;
     sh[3]=10;
     }
     if (tclockH>=16)
     {
     sh[0]=30;
     sh[1]=30;
     sh[2]=30;
     sh[3]=30;    
                    }
     if (tclockH>=17)
                    {
     sh[0]=50;
     sh[1]=50;
     sh[2]=50;
     sh[3]=50;
     }
     if (tclockH>=18)
                    {
     sh[0]=70;
     sh[1]=70;
     sh[2]=70;
     sh[3]=70;
     }
     if (tclockH>=19)
                    {
     sh[0]=100;
     sh[1]=100;
     sh[2]=100;
     sh[3]=100;
     }
     if (tclockH>=20)
                    {
     sh[0]=120;
     sh[1]=120;
     sh[2]=120;
     sh[3]=120;
     }
     if (tclockH>=21)
                    {
     sh[0]=140;
     sh[1]=140;
     sh[2]=140;
     sh[3]=140;
     }
     if (tclockH>=22)
                    {
     sh[0]=160;
     sh[1]=160;
     sh[2]=160;
     sh[3]=160;
     }
     if (tclockH>=23)
                    {
     sh[0]=170;
     sh[1]=170;
     sh[2]=170;
     sh[3]=170;
     }
     if(tclockH<7)
     {
     if (tclockH>=0)
                    {
     sh[0]=180;
     sh[1]=180;
     sh[2]=180;
     sh[3]=180;
     }
     if (tclockH>=1)
                    {
     sh[0]=170;
     sh[1]=170;
     sh[2]=170;
     sh[3]=170;
     }
     if (tclockH>=2)
                    {
     sh[0]=140;
     sh[1]=140;
     sh[2]=140;
     sh[3]=140;
     }
     if (tclockH>=3)
                    {
     sh[0]=100;
     sh[1]=100;
     sh[2]=100;
     sh[3]=100;
     }
     if (tclockH>=4)
                    {
     sh[0]=70;
     sh[1]=70;
     sh[2]=70;
     sh[3]=70;
     }
     if (tclockH>=5)
                    {
     sh[0]=40;
     sh[1]=40;
     sh[2]=40;
     sh[3]=40;
     }
     if (tclockH>=6)
                    {
     sh[0]=20;
     sh[1]=20;
     sh[2]=20;
     sh[3]=20;
     }
     }      
                                  
     if (cday_i>=7)
     cday_i=0;
     
     textprintf_ex(buffer,font,70,12,makecol(255,255,255), -1,"%s", currentday[cday_i]);
     
     if (tclockH<10)
     {
     textprintf_ex(buffer,font,15,12, makecol(0, 0, 0), -1, "  %i ", tclockH);
          textprintf_ex(buffer,font,23,12, makecol(0, 0, 0), -1, "0", NULL);
     }
else 
     textprintf_ex(buffer,font,6,12, makecol(0, 0, 0), -1, "  %i", tclockH);
if (tclockM<10)
{
textprintf_ex(buffer,font,35,12, makecol(0, 0, 0), -1, ": %i", tclockM);
textprintf_ex(buffer,font,42,12, makecol(0, 0, 0), -1, "0", NULL);
}

else 
{
textprintf_ex(buffer,font,36,12, makecol(0, 0, 0), -1, ":", NULL);
textprintf_ex(buffer,font,34,12, makecol(0, 0, 0), -1, " %i", tclockM);
}

textprintf_ex(buffer,font,150,640, makecol(255, 0, 0), -1, "Current cell: %i", player.getcell);
textprintf_ex(buffer,font,300,610, makecol(255, 0, 0), -1, "ofX: %f", ofX.varvalue);
textprintf_ex(buffer,font,300,620, makecol(255, 0, 0), -1, "ofY: %f", ofY.varvalue);
}

      
void timer1F(BITMAP *buffer)
{
 

timer1++;
if (timer1>=40)
{
              
    timer1=0;
               }
   
}

void vfunc(BITMAP *buffer)
{
     ofX.varfunc();
ofY.varfunc();
currentcell.varfunc();
save_delete.varfunc();
NPCS_delete.varfunc();
     }

