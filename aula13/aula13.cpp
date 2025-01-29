#include <iostream>

using namespace std;

int main()
{
    int val;

    cout << "[1]=Carro, [2]=Moto, [3]=Aviao, [4]=Helicoptero\n";
    cout << "Selecione um transporte: ";
    cin >> val;

    switch (val)
    {
    case 1:
    case 2:
        cout << "Transporte terrestre selecionado\n";
        switch (val)
        {
        case 1:
            cout << "Carro selecionado\n";
            break;
        case 2:
            cout << "Moto selecionada\n";
            break;
        }
        break;
    case 3:
    case 4:
        cout << "Transporte aerio selecionado\n";
        switch (val)
        {
        case 3:
            cout << "Aviao selecionado\n";
            break;
        case 4:
            cout << "Helicoptero selecionado\n";
            break;
        }
        break;
    default:
        cout << "Opcao invalida!\n";
    }

    cout << "Programa finalizado";
    return 0;
}