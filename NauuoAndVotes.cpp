#include <iostream>
#include <string>
using namespace std;

int x, y, z;

int main(){
    cin >> x >> y >> z;

    if (x > y){
        if ((y + z) >= x){
            cout << "?";
        }
        else {
            cout << "+";
        }
    }
    else if(x < y){
        if ((x + z) >= y){
            cout << "?";
        }
        else {
            cout << "-";
        }
    }
    else if (x == y){
        if (z != 0){
            cout << "?";
        }
        else {
            cout << "0";
        }

    }

    return 0;

}