#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;
char myMatrix[8][8];

bool Verify(int column, int row, int N) {

    for (int i = 0; i < row; i++) {
        if (myMatrix[i][column] == 'Q'){
            return false;
        }
    }

    for (int i = row,j = column;i >= 0 && j >= 0; i--,j--) {
        if (myMatrix[i][j] == 'Q') {
            return false;
        }
    }

    for (int i = row, j = column; i >= 0 && j < N; j++, i--) {
        if (myMatrix[i][j] == 'Q') {
            return false;
        }
    }

    return true;
}

void printMatrix(int N){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout<<myMatrix[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\n";
};

bool main_process(int N, int row) {
    if (N == row) {
        printMatrix(N);
        return true;
    }
    bool res = false;
    for (int i = 0; i < N; i++){
        bool safe = Verify(i, row, N);
        if (safe){
            myMatrix[row][i] = 'Q';
            res = main_process(N, row+1) || res;

            myMatrix[row][i] = '-';

        }
    }
    return res;
};


int main() {

    int matrix_size;
    cin>>matrix_size;

    for (int i = 0; i < matrix_size; i++){
        for (int j = 0; j < matrix_size; j++){
            myMatrix[i][j] = '-';
        }
    }

    bool res = main_process(matrix_size, 0);
    if(!res) {
        cout << "Not Possible" << endl;
    } else {
        cout << endl;
    }

    return 0;
}