#include <iostream>
using namespace std;
struct Carro
{
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;

    void insere(string stnome, string stcor, int stpot, int stvelMax)
    {
        nome = stnome;
        cor = stcor;
        pot = stpot;
        velMax = stvelMax;
        vel = 0;
    }
    void mostra()
    {
        cout << "\nNome.............: " << nome << "\n";
        cout << "Cor..............: " << cor << "\n";
        cout << "Potencia.........: " << pot << "\n";
        cout << "Velocidade actal.: " << vel << "\n";
        cout << "Velocidade Maxima: " << velMax << "\n\n";
    }

    void mudaVel(int mv)
    {
        vel = mv;
        if (vel > velMax)
        {
            vel = velMax;
        }
        if (vel < 0)
        {
            vel = 0;
        }
    }
};

int main()

{
    Carro car1,car2;
    car1.insere("Toyota", "Branca", 450, 350);
    // car2.insere("Luxo", "Vermelho", 350, 250);
    
    car1.mostra();
    car1.mudaVel(500);
    car1.mostra();
    
    return 0;
}