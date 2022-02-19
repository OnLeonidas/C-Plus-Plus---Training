#include <iostream>
using namespace std;
int cases, speeds, vel, temp = 0, total;

int main(){
    cin >> cases;
    for(int i = 0; i < cases; i++){
        cin >> speeds;
        while (speeds--){
            cin >> vel;
            if (vel > temp){
                temp = vel;
            }
        }
        cout << "Case " << i+1 << ": " << temp << endl;
        temp = 0;
    }


    return 0;

}