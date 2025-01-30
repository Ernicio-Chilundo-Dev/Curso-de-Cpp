#include <iostream>
using namespace std;

int main(){

    int cont;

    cont = 0;
    while(cont  < 20){
        cout << "Ernicio Jermias Chilundo = " << cont <<"\n";
        cont++;
        if(cont == 10)
            break;
    }

    cout << "Rotina finalizada";

    return 0;
}