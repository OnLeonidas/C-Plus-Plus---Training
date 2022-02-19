#include <iostream>
#include <algorithm>
using namespace std;
int doors, num, a, b, exit_door;


int main(){
    cin >> doors;
    int array[doors];

    for(int i = 0; i < doors; i++){
        cin >> array[i];

        if (array[i] == 1){
            a++;
        }
        else{
            b++;
        }
    }

    for(int j = 0; j < doors; j++){
        if (array[j] == 1){
            a--;
            if (a == 0){
                cout << j+1;
                break;
            }
        }
        else{
            b--;
            if (b == 0){
                cout << j+1;
                break;
            }
        }
    }

    
    return 0;

}