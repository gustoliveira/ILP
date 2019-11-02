#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b){
    return (a.first < b.first);
}

int main(){
    int n, m, tempo = 0;
    vector<int> casas, ordemEncomendas;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        casas.push_back(aux);
    }
    for(int i = 0; i < m; i++){
        int aux;
        cin >> aux;
        ordemEncomendas.push_back(aux);
    }
    
    vector<int>::iterator atual = casas.begin();
    for(int i = 0; i < m; i++){
        int aux = ordemEncomendas[i];
        vector<int>::iterator it = lower_bound(casas.begin(), casas.end(), aux);
        tempo += abs(atual-it);
        atual = it;
    }
    cout << tempo << endl;
    return 0;
}