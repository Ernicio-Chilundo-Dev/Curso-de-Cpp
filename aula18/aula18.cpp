#include <iostream>
using namespace std;

int main()
{

    int i;

    int vetor[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    for (i = 0; i < sizeof(vetor) / 4; i++)
        cout << "\n"
             << vetor[i] << "\n";

    return 0;
}