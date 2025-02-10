#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> aula,teste;
    list<int>::iterator it;

    int tam;

    tam = 10;
    for (int i = 0; i < tam; i++)
    {
        aula.push_front(i);
    }

    for(int i = 0; i < 5; i++){
        teste.push_front(9);
    }

    it = aula.begin();
    advance(it, 5);
    aula.insert(it, 10);
    aula.erase(--it);

    aula.sort();

    aula.merge(teste);

    cout << "\nTamanho da fila: " << aula.size() << "\n\n";
    tam = aula.size();
    for (int i = 0; i < tam; i++)
    {
        cout << aula.back() << "\n";
        aula.pop_back();
    }

    return 0;
}