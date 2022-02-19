#include <iostream>
using namespace std;
int stops, in, out, total, temp, capacity;

int main(){
    cin >> stops;

    for (int i = 1; i <= stops; i++){
        cin >> out >> in;
        total += (in - out);
        if (capacity > total){
            capacity = capacity;
        }
        else {
            capacity = total;
        }
    }

    cout << capacity << endl;
    return 0;

}