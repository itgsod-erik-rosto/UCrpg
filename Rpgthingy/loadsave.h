void load(BITMAP *buffer)
{
     
ifstream load;
            load.open("Data/Save/save.dat");
  
            load >> ofX;
            load >> ofY;
            load >> player.HP;
            load >> player.dir;
            load >> tclockH;
            load >> tclockM;
            load >> cday_i;
            load.close();

     }
     
     void save(BITMAP *buffer)
     {
          
            ofstream Fpos;
            Fpos.open("Data/Save/save.dat");
            Fpos << ofX;
            Fpos << endl;
            Fpos << ofY;
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
             
          }
