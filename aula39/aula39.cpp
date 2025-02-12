#include <iostream>
#include <stdio.h>// para funcao gets
#include <stdlib.h> //para funcao malloc
using namespace std;

int main(){

    char *vnome;
    vnome = (char *) malloc(sizeof(char)+1);

    gets(vnome);
    cout << vnome;
    return 0;
}