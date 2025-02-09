#include <iostream>
using namespace std;
int main(){
    enum armas{fuzil=15, revolver=5, rifle=30, escopeta=50};
    armas armaSel;
    armaSel = escopeta;
    cout << armaSel;

    return 0;
}