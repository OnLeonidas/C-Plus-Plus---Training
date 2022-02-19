#include <iostream>
#include <string>
using namespace std;
int casos, mid, count;
string sequence, mid_sequence, end_sequence;

int main(){
    cin >> casos;
    while(casos--){
        cin >> sequence;

        if (sequence.size() % 2 == 0){
            mid = sequence.size() / 2;
            mid_sequence.append(sequence, 0, mid);
            end_sequence.append(sequence, mid, sequence.size());

            if (mid_sequence == end_sequence){
                cout << "YES" << endl;
                mid_sequence.clear();
                end_sequence.clear();
            }
            else {
                cout << "NO" << endl;
                mid_sequence.clear();
                end_sequence.clear();
            }
        }
        else{
            cout << "NO" << endl;
            mid_sequence.clear();
            end_sequence.clear();
        }



    }
    return 0;

}