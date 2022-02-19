#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> coins = {1, 5, 10, 25, 50};

int CoinChange(int amount){
    vector<int> combinations(amount+1);
    combinations[0] = 1;

    for (int i = 0; i < coins.size(); i++){
        for(int j = 0; j < combinations.size(); j++){
            if(coins[i] <= j){
                combinations[j] += combinations[j - coins[i]];
            }
        }
    }
    return combinations[amount];
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int myCoin;

    while (cin>>myCoin){
        cout<<CoinChange(myCoin)<<"\n";
    }
    return 0;

}