#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, char> a, pair<int, char> b){
    return (a.first < b.first);
}

int main(){
    int n, m;
    vector<pair<int, char> > livros;
    pair<int, char> auxPair;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> auxPair.first >> auxPair.second;
        livros.push_back(auxPair);
    }

    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> auxPair.first;
        vector<pair<int, char> >::iterator r = lower_bound(livros.begin(), livros.end(), auxPair, cmp);

        if((*r).first == auxPair.first) cout << (*r).second << endl;
        else cout << "Ausente" << endl;
    }

    return 0;
}