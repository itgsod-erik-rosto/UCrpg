#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string var;
int value;

int main(int argc, char *argv[])
{
    ofstream consoledat;
    
    consoledat.open("console.dat");
    cin >> var;
    cin >> value;
    
    consoledat << var;
    consoledat << endl;
    consoledat << value;
    
    consoledat.close();
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
