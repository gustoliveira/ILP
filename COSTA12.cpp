#include <iostream>
using namespace std;

int main () {
    int soma = 0, linhas, colunas;
    char mapa[1002][1002];

    cin >> linhas >> colunas;

    for (int i = 0; i < 1002; i++) {
        for (int j = 0; j < 1002; j++) mapa[i][j] = '.';
    }

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++) cin >> mapa[i][j];
    }

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            if (mapa[i][j] == '#'){
                if (mapa[i][j+1] == '.') {soma++; continue;}
                else if (mapa[i][j-1] == '.') {soma++; continue;}
                else if (mapa[i+1][j] == '.') {soma++; continue;}
                else if (mapa[i-1][j] == '.') {soma++; continue;}
            }
        }
    }
    cout << soma << endl;
    return 0;
}
