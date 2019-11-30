#include <iostream>
#include <queue>
using namespace std;

typedef pair<string, int> tipo;

bool cmp(tipo a, tipo b){
    return(a.second > b.second || (a.second == b.second && a.first > b.first));
}

int main(){
    int n, j, x;
    tipo aux;
    priority_queue<tipo, vector<tipo>, bool(*)(tipo, tipo)> pq(cmp);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> aux.first >> aux.second;
        pq.push(aux);
    }
    cin >> j;
    for(int i = 0; i < j; i++){
        cin >> x;
        if(pq.empty()) break;
        aux = pq.top();
        pq.pop();

        aux.second += x;
        pq.push(aux);
    }

    // cout << "Teste" << endl;
    while(!pq.empty()){
        cout << pq.top().first << ' ' << pq.top().second << endl;
        pq.pop();
    }


    return 0;
}