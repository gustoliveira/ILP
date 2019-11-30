#include <iostream>
#include <queue>
using namespace std;

int main(){
    int t, p, n, aux;
    priority_queue<int, vector<int>, greater<int>> pq;

    cin >> t >> p;
    for(int i = 0; i < t; i++){
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> aux;
            pq.push(aux);
        }
        for(int j = 0; j < p; j++){
            if(pq.empty()) break;
            aux = pq.top();
            cout << aux << ' ';
            pq.pop();
        }
    }
    cout << endl;

    return 0;
}