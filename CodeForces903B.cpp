#include "bits/stdc++.h"
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int vova_life, vova_atk, vova_pote;
    cin >> vova_life >> vova_atk >> vova_pote;
    int mod_life, mod_atk;
    cin >> mod_life >> mod_atk;
    int actions = 0;
    queue<string> actions_str;

    while(mod_life > 0){

        if(mod_life - vova_atk <= 0 || vova_life - mod_atk > 0) {
            actions_str.push("STRIKE");
            mod_life -= vova_atk;
        }
        else{
            actions_str.push("HEAL");
            vova_life += vova_pote;
        }

        if(vova_life > 0 || mod_life > 0) {
            vova_life -= mod_atk;
        }

        if(vova_life <= 0 || mod_life <= 0) break;
         
    }

    cout << actions_str.size() << endl;
    while (!actions_str.empty()){
        cout << actions_str.front() << endl;
        actions_str.pop();
    }

    


    return 0;

}
//h2 = pontos saude mosntro
// a2 = poder de ataque mosntro

//h1 pontos de saude vova
//a1 pontos de ataque vova
//c1 pontos de vida a masi que o pote oferece 
//c1 > a2

//ataque vova = h2 - a1
//beber = h2 + c1
//saude de vova pode passar de h1
//ataque modcrab h1 - a2


// a batalha acaba quando h1 >= 0 ou h2 >= 0
// a batalha pode acabar no meio da fase após o ataque de vova

