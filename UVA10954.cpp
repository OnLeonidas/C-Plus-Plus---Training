#include "bits/stdc++.h"
using namespace std;
int qnt, num, total_temp;
bool loop = true;
priority_queue<int, vector<int>, greater<int> > pq;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    while(cin >> qnt && qnt != 0){
        for (int i = 0; i < qnt; i++){
            cin >> num;
            pq.push(num);
        }

        int total = 0;

        while(pq.size() > 1){

            int min_num = pq.top();
            pq.pop();
            int min_num2 = pq.top();
            pq.pop();
            int a = min_num + min_num2;
            total += a;
            pq.push(a);

        }

        cout << total << endl;

        while(!pq.empty()){
            pq.pop();
        }
    }

    return 0;

}