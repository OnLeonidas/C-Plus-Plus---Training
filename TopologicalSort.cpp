#include <iostream>
#include <list>
#include <algorithm>
#include <stack>
#include <iterator>
#include <vector>
#include <string>
using namespace std;

class Graph{
    int Vert;
    list<int> *adjlist;
    vector<bool> Mark;

public:
    Graph(int Vert){
        this->Vert = Vert;
        adjlist = new list<int>[Vert];
        Mark.resize(Vert);

    }

    stack<int> s;

    void addEdge(int vert1, int vert2){
        adjlist[vert1].push_back(vert2);
        adjlist[vert1].sort();
        adjlist[vert1].unique();
    };

    int first(int vert1){
        list<int>::iterator it;
        for(it = adjlist[vert1].begin(); it != adjlist[vert1].end(); it++){
            if (*it != 0){
                return *it;
            }
        }
        return Vert;
    }

    int next(int vert1, int w){
        list<int>::iterator it;
        for(it = adjlist[vert1].begin(); it != adjlist[vert1].end(); it++){
            if (*it != 0 && *it > w){
                return *it;
            }
        }
        return Vert;
    }

    bool getMark(int v){
        return Mark[v];
    }

    void setMark(int v){
        Mark[v] = true;
    };

    void toposort(int vert1){
        setMark(vert1);
        int w = first(vert1);
        while (w < Vert){
            if (getMark(w) == false){
                toposort(w);
            }
            w = next(vert1, w);
        }
        s.push(vert1);
    }

    void printStack(){
        for(int i = 0; i < Vert; i++){
            int x = s.top();
            cout << x <<'\n';
            s.pop();
        }
    }

    void tp(){
        for (int i = 0; i < Vert; i++){
            if (Mark[i] == false){
                toposort(i);
            }
        }
    }
};

int main() {

    int num1, num2, numvert1, numvert2;
    scanf("%d %d", &numvert1, &numvert2);
    Graph graph(numvert1);

    for (int i = 0; i < numvert2; i++){
        scanf("%d %d", &num1, &num2);
        graph.addEdge(num1, num2);
    }

    graph.tp();
    graph.printStack();

    return 0;
}