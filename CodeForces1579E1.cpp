#include "bits/stdc++.h"
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int loops;
    cin >> loops;
    for(int i = 0; i < loops; i++){
        int tam_array, num;
        deque<int> dq;
        cin >> tam_array;
        for(int k = 0; k < tam_array; k++){
            cin >> num;
            if(k == 0){
                dq.push_front(num);
            }
            else{
                if(num < dq.front()){
                    dq.push_front(num);
                }
                else{
                    dq.push_back(num);
                }
            }
        }

        while(!dq.empty()){
            cout << dq.front() << " ";
            dq.pop_front();
        }

        cout << endl;
    }

    return 0;

}