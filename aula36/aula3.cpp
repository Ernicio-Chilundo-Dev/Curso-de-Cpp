#include <iostream>
using namespace std;

int main(){
    string veiculo = "Carro";
    string *pv;

    pv = &veiculo;// Ponteiro PV recebi o enderenco da variavel Veiculo.

    cout << pv << "\n"<< &veiculo << "\n";

    *pv = "Moto";// No enderenco apontado pelo *PV adicione o valor "Moto"

    cout << *pv<< "\n"<<veiculo;
    return 0;
}