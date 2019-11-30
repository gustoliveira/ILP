#include <iostream>
#include <queue>
using namespace std;

typedef pair<string, int> tipo;

bool cmp(tipo a, tipo b){
    return(a.second < b.second || a.second == b.second && a.first < b.first);
}

int main(){
    int d, x, n;
    string nome;
    tipo auxT;
    priority_queue<tipo, vector<tipo>, bool(*)(tipo, tipo)> pq(cmp);

    cin >> d >> x;
    for(int i = 0; i < d; i++){
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> auxT.first >> auxT.second;
            pq.push(auxT);
        }
        for(int j = 0; j < x; j++){
            if(pq.empty()) break;
            cout << pq.top().first << endl;
            pq.pop();
        }
    }

    return 0;
}