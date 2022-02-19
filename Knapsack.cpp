#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> Value;
vector<int> Weight;
int S, N, W, V;
// S = SIZE MOCHILA | N = QUANTIDADE DE ITENS
// W = TAMANHO DO ITEM | V = PESO DO ITEM

int KnapSack(int N, int S){

    int myMatrix[N + 1][S + 1];
    for (int i = 0; i <= N; i++){
        for(int j = 0; j <= S; j++){

            if(i == 0 || j == 0){
                myMatrix[i][j] = 0;
            }
            else if (Weight[i - 1] <= j){
                myMatrix[i][j] = max(myMatrix[i - 1][j], Value[i - 1] + myMatrix[i - 1][j - Weight[i - 1]]);
            }
            else{
                myMatrix[i][j] = myMatrix[i - 1][j];
            }
        }
    }
    return myMatrix[N][S];
}

int main(){
    cin >> S >> N;
    Value.resize(N), Weight.resize(N);

    for (int i = 0; i < N; i++){
        cin >> W >> V;
        Weight[i] = W;
        Value[i] = V;
    }

    cout << KnapSack(N, S);

}