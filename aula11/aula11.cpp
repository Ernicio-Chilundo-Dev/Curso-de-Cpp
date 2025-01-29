#include <iostream>

using namespace std;

int main()
{
    int num;
    /*1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    
        3  a  6
        10 a 14
        16 a 19
        */

    num = 1;

    // if ((num >= 3 && num <= 6) || (num > 9 && num < 14) ||(num > 14 && num < 20))
    // {
    //     cout << "\n\nValor aceito\n";
    // }
    // else
    // {
    //     cout << "Nao aceito\n";
    // }

    // 1 = verdadeiro / true
    // 0 = falso / false

    if(!num){
        cout << "Vou ao clube";
    }else{
        cout << "Vou ao cinema";   
    }

    return 0;
}