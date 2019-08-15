//Não passou no SPOJ
//Passou no URI

#include <iostream>
using namespace std;

int main (){
    int n, tam;
    char lado;

    while (cin>>n) {
        int tans[n] = {}, soma = 0;
        char lados[n] = {};
        for (int i = 0; i < n; i++){
            cin >> tam >> lado;
            tans[i] = tam;
            lados[i] = lado;
        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (tans[i] != 0 && tans[j] != 0 && lados[i] != 'O' && lados[j] != 'O'){
                    if (tans[i] == tans[j] && lados[i] != lados[j]){
                        soma++;
                        tans[i] = 0;
                        tans[j] = 0;
                        lados[i] = 'O';
                        lados[j] = 'O';
                    }
                }
            }
        }
        cout << soma << endl;
    }
    return 0;
}
