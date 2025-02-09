#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    // if(cartas.empty()){
    //     cout << "\nPilha vazia!"<<"\n\n";
    // }else{
    //     cout <<"\nPilha com cartas!"<<"\n\n";
    // }

    cout << "Tamanho da pilha: " << cartas.size() << "\n\n";

    while (!cartas.empty())
    {
        cout << "Carta do topo: " << cartas.top() << "\n\n";
        cartas.pop();
    }

    // cartas.pop();
    // cartas.pop();

    // cout << "Update do tamanho da pilha: "<<cartas.size()<<"\n";
    // cout << "Update da carta do topo: "<<cartas.top()<<"\n\n";
    // return 0;
}