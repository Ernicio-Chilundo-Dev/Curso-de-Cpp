#include <iostream>

using namespace std;
int n1, n2; // variaveis globais
int main()
{
    //Operadores Matematicos: + - / % * ()
    int n3, n4; // variaveis locais
    // int res;
    int res1, res2;

    n1 =11;
    n2 = 3;
    n3 = 5;
    n4 = 15;

    // res = n1+n2+n3+n4;
    // res = (n1+n2+n3+n4) - 10;
    res1 = n1 / n2; 
    res2 = n1 % n2; // Usado o operador mode "%" para obter o resto da divisao 
    
    cout << "Divis: " << res1  << "\n";
    cout << "Resto: " << res2  << "\n";
    return 0;
}