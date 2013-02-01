

void loadF(BITMAP *buffer)
{




            load.open("Data/Save/save.dat");
  
            load >> DISABLE_HUD;
            load >> ofX.varvalue;
            load >> ofY.varvalue;
            load >> currentcell.varvalue;
            load >> player.HP;
            load >> player.dir;
            load >> tclockH;
            load >> tclockM;
            load >> cday_i;
            load.close();
            
       

     }
     
     void load_npcs(BITMAP *buffer)
     {
          
    LOADNPCS.open("Data/NPCS/NPCS.dat");
    
NPC[0].LOADSTATUS(buffer);
NPC[1].LOADSTATUS(buffer);
NPC[2].LOADSTATUS(buffer);



LOADNPCS.close();


          }
     
     void saveF(BITMAP *buffer)
     {
          
            
            Fpos.open("Data/Save/save.dat");
            Fpos << DISABLE_HUD;
            Fpos << endl;
            Fpos << ofX.varvalue;
            Fpos << endl;
            Fpos << ofY.varvalue;
            Fpos << endl;
            Fpos << currentcell.varvalue;
            Fpos << endl;
            Fpos << player.HP;
            Fpos << endl;
            Fpos << player.dir;
            Fpos << endl;
            Fpos << tclockH;
            Fpos << endl;
            Fpos << tclockM;
            Fpos << endl;
            Fpos << cday_i;
            Fpos << endl;
            Fpos << player.x-cam+750+540;
            Fpos << endl;
            Fpos << player.y-cam2+835+555;
            Fpos << endl;
            Fpos << player.isNPC;
            Fpos << endl;
            Fpos << player.itemout;
            Fpos << endl;
            Fpos << player.isMoving;
            Fpos << endl;
            Fpos << player.isrunning;
            Fpos << endl;
            Fpos << player.itemeq;
            Fpos << endl;
            Fpos << player.item[20];
            Fpos << endl;
            Fpos.close();
             
          }
