#include <iostream>
#include <algorithm>
using namespace std;
int windows, shots;


int main(){
    cin >> windows;
    if (windows%2 == 0){
        shots = (windows/2) + 1;
        cout << shots << endl;
        for(int i = 0; i < windows; i+=2){
            cout << i+1 << " ";
        }
        cout << windows << " ";
    }
    else{
        shots = (windows/2) + 1;
        cout << shots << endl;
        for(int i = 0; i < windows; i+=2){
            cout << i+1 << " ";
        }
    }
    
    return 0;

}