#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n, g, aux;
    priority_queue<int, vector<int>, less<int>> pq;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> g;
        for(int j = 0; j < g; j++){
            cin >> aux;
            pq.push(aux);
        }
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}