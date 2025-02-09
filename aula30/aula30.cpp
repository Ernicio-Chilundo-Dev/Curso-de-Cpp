#include <iostream>
#include <queue>

using namespace std;
int main(){
    queue <string> cartas;
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout <<"Tamanho da fila: "<<cartas.size()<<"\n";
    cout <<"Primeia carta..: "<<cartas.front()<<"\n";
    cout <<"Ultima carta...: "<<cartas.back()<<"\n";

    // while(!cartas.empty()){
    //     cout << "Primeira carta: "<<cartas.front()<<"\n";
    //     cartas.pop();
    // }

    return 0;
}