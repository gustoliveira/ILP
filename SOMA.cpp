#include <iostream>
using namespace std;

int main (){
    int n, soma = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        soma += aux;
    }
    cout << soma << endl;
    return 0;
}
