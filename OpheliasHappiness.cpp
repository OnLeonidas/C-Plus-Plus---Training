#include <iostream>
#include <string>
using namespace std;

int queries, num;
int total = 0;
string action;

int main(){
    cin >> queries;
    while(queries > 0){
        cin >> action;
        if (action == "R"){
            cin >> num;
            total += num;
        }
        else {
            cout<<total<<endl;
        }
        queries--;

    }
}