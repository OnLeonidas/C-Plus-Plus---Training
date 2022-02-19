#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
long long loops, tipos, value, total = 0, sum = 0, b;
vector<long long> coins;

int main(){
    cin >> loops;

    for(long long i = 0; i < loops; i++){
        cin >> tipos;

        for(long long j = 0; j < tipos; j++){
            cin >> value;
            coins.push_back(value); 
            sum += value;
        }

        if(sum <= 0){
            return 0;
        }

        b = 1;
        total = coins[0];

        for(long long j = 1; j < tipos-1; j++){
            if(total + coins[j] < coins[j+1]){
                total += coins[j];
                b++;
            }
            else{
                ;
            }
        }

        cout << b + 1 << endl;
        coins.clear();

    }  

    return 0;
}