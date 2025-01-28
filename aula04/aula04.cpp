#include <iostream>

using namespace std;

int main()
{
    /*Aula 4 ensina como criar variaveis e trabalhar com tipos de variaveis*/

    // TIPO NOME;
    // TIPO NOME = VALOR;
    int vidas = 0;        // 10, 20
    char letra = 'B';     // 'B'
    double decimal = 2.5; // 2.499999;
    // float decimal2; //2.5;
    bool vivo = true;        // true=verdadeiro; false=falso
    string nome = "Ernicio"; // Ernicio

    cout << "Digite o numero de vidas: ";
    cin >> vidas;

    cout << "Digite uma letra: ";
    cin >> letra;

    cout << "Dinheiro: ";
    cin >> decimal;

    cout << "Digite o seu nome: ";
    cin >> nome;
    cout << "\n";
    cout << "\n";

    cout << vidas << "\n";
    cout << letra << "\n";
    cout << decimal << "\n";
    cout << vivo << "\n";
    cout << nome << "\n";

    return 0;
}