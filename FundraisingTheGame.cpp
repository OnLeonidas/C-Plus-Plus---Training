#include <iostream>
#include <string>
using namespace std;

int donors, budget, total, donate;

int main(){
    cin >> donors >> budget;

    while(donors > 0){
        cin >> donate;
        total += donate;
        donors--;
    }

    if (total > budget){
        cout << "Success";
    }
    else if (total == budget){
        cout << "Just enough";
    }
    else {
        cout << "More funding required";
    }

}