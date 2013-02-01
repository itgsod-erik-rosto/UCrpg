 

 

#define black makecol( 0, 0, 0)
#define white makecol( 255, 255, 255)
#define red makecol(255, 0, 0)
#define cam int (ofX.varvalue)*-1-640
#define cam2 int (ofY.varvalue)*-1-700



  using namespace std;

BITMAP *buffer;
BITMAP *MAP;
BITMAP *map;
BITMAP *sub_buffer_1;
BITMAP *sub_buffer_2;
BITMAP *menuscreen;

BITMAP *nightF;              
BITMAP *shadow;
BITMAP *HUD;
BITMAP *background;
BITMAP *playerB;
BITMAP *testB;
BITMAP *pHouse;
BITMAP *house_1;
BITMAP *house_2;
BITMAP *grass1;
BITMAP *road1;
BITMAP *fence1;
BITMAP *hSS1;
BITMAP *hfurniture;
BITMAP *SSanim;
BITMAP *Store1;
BITMAP *items;

ofstream Fpos;
ofstream FNPCS;
ofstream FOBJECTS;
ofstream cache;
 
ifstream CONFIGS;
ifstream LOADNPCS;
ifstream LOADOBJECTS;
ifstream load;
ifstream load_NPC;
ifstream consoledat;

string var;
string var1;

int value;
int value1;

            char* currentday[7]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"} ;

        float load_time;
 
 float t_speed=10;
 
 float TIME_2=t_speed*100;
 float TIME=1/t_speed*10;
                
    float fpsclock;     
    long int tclockM=0;
    long int tclockH=12;
              long int tclockM_standard=0;
              long int tclockH_standard=12;
              
              long int GetGamehour=tclockH;
              long int GetGameminute=tclockM;
              
              
              string str;
            
            int P_timer;  
              int CRi; 
            
        //int current_cell;
        int npc_i[100];
        int act_timer;
        int max_npc=3;
        int n1;
        int FSW;
        int FSH;
        int sh[4];
        int fps;
        int fps1;
        int objMAX=1000;
        int cday_i;
        
        int GetCurrentday=cday_i;
        
        int cAct=0;
        int wallmax=100;
        int itemtimer=0;
        int Tobjects=2;
        int objectsdrawn;
        int timer1=0;
        //float ofX=-650;
        //float ofY=-470;
        int i;
        int colordepth=32;
        int SW=1080;
        int SH=670;
        int timessaved;
        int mx1;
        int mx2;
        int my1;
        int my2;
        int savetimer;   
        int Fobjects;
        int i10=0;
        int ctimer=0;
        int stimer=0;
        int b=0;               
        int Deagle=0;
        int starttimer=0;
        int objectamount=0;
            
        
        bool showobjectframes;
        bool LOAD=false;
        bool issaved=false;
       
        bool startdone=false;
        bool DISABLE_HUD;
        bool consoleactive;
        bool console2active;

