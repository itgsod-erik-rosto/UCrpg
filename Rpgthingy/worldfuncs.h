void settime(long int H, long int M)
{
     tclockH=H;
     tclockM=M;
     }
void Wclock(BITMAP *buffer)
{
     if (tclockH<10)
     {
     textprintf_ex(buffer,font,15,12, makecol(0, 0, 0), -1, "  %i", tclockH);
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
