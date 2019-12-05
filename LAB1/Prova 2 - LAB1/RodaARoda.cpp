#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n, vezes, aux;
    queue<int> fila;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> aux;
        fila.push(aux);
    }

    for(int i = 0; i < n-1; i++){
        cin >> vezes;
        for(int j = 0; j < vezes && !fila.empty();j++){
            aux = fila.front();
            fila.pop();
            fila.push(aux);
        }
        fila.pop();
    }

    cout << fila.front() << endl;

    return 0;
}