#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b){
    return (a.first < b.first);
}

int main(){
    int n, m, q, index = 0;
    vector<int> area;
    vector<int>::iterator it;
    
    cin >> n >> m;
    for(int i = 0; i < n*m; i++){
        int aux;
        cin >> aux;
        area.push_back(aux);
    }
    sort(area.begin(), area.end());

    cin >> q;
    for(int i = 0; i < q; i++){
        int aux;
        cin >> aux;
        it = upper_bound(area.begin(), area.end(), aux);
        cout << it - area.begin() << endl;
    }

    return 0;
}