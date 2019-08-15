#include <iostream>
using namespace std;

int main (){
    int n, m;
    cin >> n >> m;
    int matriz[n][m] = {}, v1[n] = {}, v2[m] = {};

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        int soma = 0;
        for(int j = 0; j < m; j++){
            soma += matriz[i][j];
        }
        v1[i] = soma;
    }
    for(int i = 0; i < m; i++){
        int soma = 0;
        for(int j = 0; j < n; j++){
            soma += matriz[j][i];
        }
        v2[i] = soma;
    }
    int maior = 0;
    for(int i = 0; i < n; i++){
        if(i == 0) maior = v1[i];
        if(v1[i] >= maior) maior = v1[i];
    }
    for(int i = 0; i < m; i++){
        if(v2[i] >= maior) maior = v2[i];
    }
    cout << maior << endl;

    return 0;
}
