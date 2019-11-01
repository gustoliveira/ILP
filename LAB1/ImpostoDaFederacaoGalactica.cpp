#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b){
    return (a.first < b.first);
}

int main(){
    int n, m, index = 0;
    string nome;
    vector<pair<string, int> > planetas;
    pair<string, int> auxPair;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> auxPair.first >> auxPair.second;
        planetas.push_back(auxPair);
    }

    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> auxPair.first;
        vector<pair<string, int> >::iterator r = lower_bound(planetas.begin(), planetas.end(), auxPair, cmp);
        index += (*r).second;
    }

    cout << index << endl;

    return 0;
}