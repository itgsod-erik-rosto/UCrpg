#include <declarations.h>
#include <fstream>

int FSW;
int FSH;

using namespace std;

  ifstream CONFIGS;
  
void configF(BITMAP *buffer)
{
CONFIGS.open("Data/Config.txt");                

CONFIGS >> SW;
CONFIGS >> SH;
CONFIGS >> colordepth;

CONFIGS.close();

}
