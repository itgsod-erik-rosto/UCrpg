
void fpscounter(BITMAP *buffer)
{
     
     if (fpsclock==0)
     {    
     fps1++;
     }
     if (fpsclock==1)
     fps=fps1;
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
     if (tclockH>15)
     {
     sh[0]=tclockH*5;
     sh[1]=tclockH*5;
     sh[2]=tclockH*5;
     sh[3]=tclockH*5;
     }
     if (tclockH==0)
     {
               sh[0]=tclockH+30*5;
     sh[1]=tclockH+30*5;
     sh[2]=tclockH+30*5;
     sh[3]=tclockH+30*5;      
                    }
                    if (tclockH>0 && tclockH<=6)
                    {
     sh[0]=(tclockH+35);
     sh[1]=(tclockH+35);
     sh[2]=(tclockH+35);
     sh[3]=(tclockH+35); 
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
}
