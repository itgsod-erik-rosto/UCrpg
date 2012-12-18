
void configF(BITMAP *buffer)
{
CONFIGS.open("Data/Config.txt");                

CONFIGS >> SW;
CONFIGS >> SH;
CONFIGS >> colordepth;

CONFIGS.close();

}


