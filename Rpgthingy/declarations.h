#define black makecol( 0, 0, 0)
#define white makecol( 255, 255, 255)
#define red makecol(255, 0, 0)
#define cam int (ofX)*-1-640
#define cam2 int (ofY)*-1-700

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


int mx1;
int mx2;
int my1;
int my2;
int savetimer;

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

float ofX=-650;
float ofY=-470;

int i;

int SW=1080;
int SH=670;


    
