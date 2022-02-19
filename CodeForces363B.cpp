#include "bits/stdc++.h"
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num, piano_widht, height;
    while(cin >> num >> piano_widht){
        vector<int> array;
        int index;
        for (int i = 0; i < num; i++){
            cin >> height;
            array.push_back(height);
        }

        int total = 0;
        for (int i = 0; i < piano_widht; i++){
            total += array[i];
        }

        int min_sum = total;
        index = 0;

        for(int i = 1; i+piano_widht-1 < num; i++){
            total -= array[i-1];
            total += array[i+piano_widht-1];

            if (total < min_sum){
                min_sum = total;
                index = i;
            }
        }

        cout << index+1 << endl;

    }

    return 0;

}