#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n, m, teste = 0;

    queue <int> fila;
    cin >> n;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        fila.push(k);
    }

    cin >> m;
    queue <int> fila2;
    for(int i = 0; i < m; i++){
        int k;
        cin >> k;
        fila2.push(k);
    }

    for(int i = 0; i < m; i++){
        if(fila.empty()) break;
        if(fila.front() >= fila2.front()){
            int k = fila.front();
            fila.pop();
            fila.push(k);

            fila2.pop();
        }
        else{
            fila.pop();
            fila2.pop();
            teste++;
        }
    }

    cout << teste << endl;
    return 0;
}
