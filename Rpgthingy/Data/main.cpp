#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char var[100];
int value;

int main(int argc, char *argv[])
{
    ofstream consoledat;
    
    consoledat.open("console.dat");
    cin >> var;
    cin >> value;
    
    consoledat << var;
    consoledat << " ";
    consoledat << value;
    
    consoledat.close();
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
