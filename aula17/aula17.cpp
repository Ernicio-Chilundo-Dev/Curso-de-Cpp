#include <iostream>
using namespace std;
int main()
{
    /*for(ini; cond; inc/dec){
        comando
    }*/

    int x, y, z;

    for (x = 0, y = 1, z = 2; x <= 15 && z <= 12; x++, y += 2, z += 2)
    {
        cout << x << " - ";
        cout << y << " - ";
        cout << z << "\n";
    }

    return 0;
}