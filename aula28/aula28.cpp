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

    cout << "Tamanho da pilha: " << cartas.size() << "\n";
    cout << "Carta do topo: " << cartas.top() << "\n\n";
    cartas.pop();
    cartas.pop();

    cout << "Update do Tamanho da pilha: " << cartas.size() << "\n";
    cout << "Nova carta do topo: " << cartas.top() << "\n";
    return 0;
}