#include <iostream>
using namespace std;
void texto();
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);
int main()
{
    string transp[4] = {"Carro", "Moto", "Navio", "Aviao"};
    // for(int i = 0; i < 10; i++){
    //     texto();
    //     cout << " = " << i << "\n";
    // }

    // soma(24,1);
    int res = soma2(275, 25);
    cout << "Soma dos valores: " << res << "\n";

    tr(transp);

    return 0;
}

void texto()
{
    cout << "\nCanal Ernicio Jermias Chilundo";
}

void soma(int n1, int n2)
{
    int res = n1 + n2;

    cout << "A soma de " << n1 << " + " << n2 << " = " << res << "\n";
}

int soma2(int n1, int n2)
{

    return n1 + n2;
}

void tr(string tra[4])
{
    for (int i = 0; i < 4; i++)
    {
        cout << tra[i] << "\n";
    }
}