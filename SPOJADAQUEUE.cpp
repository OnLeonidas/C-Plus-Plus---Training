#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int num, rev = 1;
long int q;
deque<int> lista;
deque<int> temp;
string command;

int main(){
    cin >> q;
    while(q--){
        cin >> command;
        if(command == "back"){

            if(!lista.empty()){
                if(rev == 1){
                    cout << lista.back() << endl;
                    lista.pop_back();
                }
                else{
                    cout << lista.front() << endl;
                    lista.pop_front();
                }
            }
            else{
                cout << "No job for Ada?" << endl;
            }
        }
        else if(command == "front"){
            if(!lista.empty()){
                if(rev == 1){
                    cout << lista.front() << endl;
                    lista.pop_front();
                }
                else{
                    cout << lista.back() << endl;
                    lista.pop_back();
                }
            }
            else{
                cout << "No job for Ada?" << endl;
            }
        }
        else if(command == "reverse"){
            rev = 1 - rev;
        }
        else if(command == "push_back"){
            cin >> num;
            if(rev == 1){
                lista.push_back(num);
            }
            else{
                lista.push_front(num);
            }
        }
        else if(command == "toFront"){
            cin >> num;
            if(rev == 1){
                lista.push_front(num);
            }
            else{
                lista.push_back(num);
            }
        }
    }
    return 0;

}