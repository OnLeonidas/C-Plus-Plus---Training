#include "bits/stdc++.h"
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);

    int loops;
    while(cin >> loops){
        queue<int> fila;
        stack<int> pilha;
        priority_queue<int> priority;

        bool is_stack = true;
        bool is_queue = true;
        bool is_priority = true;
        int s = 0, q = 0, p = 0;

        for(int i = 0; i < loops; i++){
            int action, object;
            cin >> action >> object;

            if(action == 1){
                fila.push(object);
                pilha.push(object);
                priority.push(object);
            }
            else{
                if(!pilha.empty()){
                    if(pilha.top() != object) is_stack = false;
                    pilha.pop();
                }
                else is_stack = false;

                if(!fila.empty() && is_queue){
                    if(fila.front() != object) is_queue = false;
                    fila.pop();
                }
                else is_queue = false;

                if(!priority.empty() && is_priority){
                    if(priority.top() != object) is_priority = false;
                    priority.pop();
                }
                else is_priority = false;
            }
        }

        while(!fila.empty()) fila.pop();
        while(!pilha.empty()) pilha.pop();
        while(!priority.empty()) priority.pop();

        if(is_stack) s = 1;
        if(is_queue) q = 1;
        if(is_priority) p = 1;

        //verificando casos
        if((s+q+p) > 1) cout << "not sure\n";
        else if ((s+q+p) == 0) cout << "impossible\n";
        else if (q == 1) cout << "queue\n";
        else if (s == 1) cout << "stack\n";
        else cout << "priority queue\n";
    }

    return 0;

}