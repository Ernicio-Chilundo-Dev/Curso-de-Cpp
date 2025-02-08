#include <iostream>
using namespace std;
void imp(string txt = "Ricardo");
int main()
{
    imp("Ernicio");
    return 0;
}

void imp(string txt)
{
    cout << "\n"
         << txt;
}