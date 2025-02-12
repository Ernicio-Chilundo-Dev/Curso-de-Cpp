#include <iostream>
using namespace std;
void soma(float *var, float valor);
void ptar(float *v);

int main()
{
    float vetor[5];
    float num = 0;
    soma(&num,15);
    ptar(vetor);
    cout << num << "\n";

    for( int i = 0; i < 5; i++){
        cout << vetor[i] << "\n";
    }
    return 0;
}

void soma(float *var, float valor){
    *var+=valor;
}

void ptar(float *v){
    v[0]=9;
    v[1]=9;
    v[2]=9;
    v[3]=9;
    v[4]=9;
}