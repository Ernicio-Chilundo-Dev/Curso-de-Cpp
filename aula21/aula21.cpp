#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main(int argc, char *argv[])
{
    // cout << argv[3] << "\n";
    // cout << argc << "\n";
    if(argc > 1){
        if(!strcmp(argv[1], "sol")){
            cout << "Vou ao clube.\n\n";
        }else if(!strcmp(argv[1],"nublado")){
            cout << "Vou ao cinema.\n\n";
        }else{
            cout << "Vou ficar encasa.";
        }
    }
    system("pause");
    return 0;
}