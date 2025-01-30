#include <iostream>
using namespace std;

int main()
{

    int matriz[6][6];
    int l, c;

    for(l =0; l < 6; l++){
        for(c = 0; c < 6; c++)
            matriz[l][c] = l;
    }

    for (l = 0; l < 6; l++)
    {
        for (c = 0; c < 6; c++)
        {
            cout << matriz[l][c] << " ";
        }

        cout << "\n";
    }

    return 0;
}