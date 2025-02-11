#include  <iostream>
using namespace std;
struct Carro{
    string nome;
    string cor;
    int pot;
    int velMax;
};

int main()
{
    Carro car1;
    Carro car2;

    car1.nome = "Toyota";
    car1.cor = "Branca";
    car1.pot = 250;
    car1.velMax = 180;

    car2.nome = "Daf";
    car2.cor = "Branca";
    car2.pot = 250;
    car2.velMax = 180;

    cout << "Nome....: "<<car1.nome<<"\n";
    cout << "Cor.....: "<<car1.nome<<"\n";
    cout << "Potencia: "<<car1.nome<<"\n";
    cout << "VelMax..: "<<car1.nome<<"\n";

    cout << "Nome....: "<<car2.nome<<"\n";
    cout << "Cor.....: "<<car2.nome<<"\n";
    cout << "Potencia: "<<car2.nome<<"\n";
    cout << "VelMax..: "<<car2.nome<<"\n";

    return 0;
}