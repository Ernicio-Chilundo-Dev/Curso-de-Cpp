#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
inicio:
    system("cls");
    //(Expessao) ? valor1 : valor2;

    int n1, x;
    char opc;

    x = 5;

    cout << "Digite um valor: ";
    cin >> n1;

    (n1 >= 10) ? x++ : x--;

    cout << "\nNovo valor de X: " << x << "\n";

    cout << "Deseja cotinuar? [s/n]: ";
    cin >> opc;
    if (opc == 's' || opc == 'S')
    {
        goto inicio;
    }

    return 0;
}