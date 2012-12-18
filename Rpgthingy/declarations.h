#define black makecol( 0, 0, 0)
#define white makecol( 255, 255, 255)
#define red makecol(255, 0, 0)
#define cam int (ofX)*-1-640
#define cam2 int (ofY)*-1-700

int n1;

  using namespace std;

              int objMAX=1000;
              int max_npc=3;
         
         long int fpsclock;     
              long int tclockM=0;
               long int tclockH=12;
 int sh[4];
 int fps;
 int fps1;
BITMAP *nightF;              
BITMAP *shadow;
BITMAP *HUD;
BITMAP *background;
BITMAP *buffer;
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

char* currentday[7]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"} ;
int cday_i;

int timessaved;
int mx1;
int mx2;
int my1;
int my2;
int savetimer;

bool issaved=false;


int Fobjects;
int i10=0;
 int ctimer=0;
 int stimer=0;
 bool quit;
 int cAct=0;
 
int wallmax=100;
int itemtimer=0;
int Tobjects=2;

int objectsdrawn=0;

int timer1=0;

int ofX=-650;
int ofY=-470;

int i;

int colordepth=32;

int SW=1080;
int SH=670;


 int b=0;
 bool startdone=false;
 int starttimer=0;
 int objectamount=0;
    
int Deagle=0;
