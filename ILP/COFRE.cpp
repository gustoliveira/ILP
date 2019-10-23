#include <iostream>
using namespace std;

int main (){
    int n, teste = 0;

    while (cin >> n) {
        if (n == 0) break;
        int soma = 0, j, z;
        cout << "Teste " << ++teste << endl;
        for(int i = 0; i < n; i++){
            cin >> j >> z;
            soma += j - z;
            cout << soma << endl;
        }
        cout << endl;
    }


    return 0;
}
