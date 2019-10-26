#include <iostream>
using namespace std;

int main (){
    int n, m, p, d;
    cin >> n >> m;
    int vetor[n] = {};

    for(int i = 0; i < m; i++){
        cin >> p >> d;
        vetor[p-1] = 1;
        for(int j = p; j <= n; j+=d){
            vetor[j-1] = 1;
        }
        for(int j = p; j >= 0; j-=d){
            vetor[j-1] = 1;
        }

    }
    for(int i = 0; i < n; i++){
        cout << vetor[i] << endl;
    }
    return 0;
}
