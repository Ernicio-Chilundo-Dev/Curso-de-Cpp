#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char nome[10];
    int ano;
    // nome[0] = 'E';
    // nome[1] = 'r';
    // nome[2] = 'n';
    // nome[3] = 'i';
    // nome[4] = 'c';
    // nome[5] = 'i';
    // nome[6] = 'o';
    // nome[7] = '\0';

    // int num1, num2, num3;
    // num1 = 10;
    // num2 = 20;
    // num3 = 30;
    printf("Digite o seu nome: ");
    scanf("%s",&nome);

    printf("\nData de nascimento: ");
    scanf("%d",&ano);

    printf("\nNome: %s - Ano de nascimento: %d\n\n",nome,ano);
    return 0;
}

/*
d,i => int
x,X => Hexadecimal
u => int sem sinal
s => string, char*
f => double
p => ponteiros

*/