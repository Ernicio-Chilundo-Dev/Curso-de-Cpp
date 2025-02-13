#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int num = 30;

    // float pi = M_PI;

    // float pi = M_PI;
    // cout.precision(30);

    // printf("Valor de pi: %f", pi);

    // cout << "Valor de Num em dec: "<<num<<endl;
    // cout <<"Valor de Num em hex: "<< setbase(16) <<num;
    // cout << "Valor PI: " << pi << "\n";

    // cout.precision(-1);
    // cout << "Valor PI: " << std::scientific << pi << "\n";

    cout << " valor de Num: " << setw(10) << setfill('#') << num<< endl;

    return 0;
}