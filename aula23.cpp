#include <iostream>
using namespace std;
void soma(int n1, int n2);
void soma();
int main()
{
    soma(20,30);
    soma();
    return 0;
}

void soma(int n1, int n2){
    int re;
    re = n1 + n2;
    cout << "\nSoma de " <<n1 << " com " << n2 << " = " << re <<"\n";
}

void soma()
{
    int n1, n2, re;
    n1 = 20;
    n2 = 10;
    re = n1 + n2;
    cout << "\nSoma de " << n1 << " com " << n2 << " = " << re <<"\n";
}