#include <iostream>
using namespace std;

int main () {
    int soma = 0, linhas, colunas;
    char mapa[1010][1010];

    cin >> linhas >> colunas;

    for (int i = 0; i < 1002; i++) {
        for (int j = 0; j < 1002; j++) mapa[i][j] = '.';
    }

    for (int i = 5; i < linhas+5; i++){
        for (int j = 5; j < colunas+5; j++) {
          cin >> mapa[i][j];
        }
    }

    for (int i = 0; i < linhas+6; i++){
        for (int j = 0; j < colunas+6; j++){
            if (mapa[i][j] == '#'){
                if (mapa[i][j+1] == '#' && mapa[i][j-1] == '#' && mapa[i+1][j] == '#' && mapa[i-1][j] == '#' && mapa[i][j+1] == '#'){
                  soma+= 0;
                }
                else soma+= 1;
            }
        }
    }
    cout << soma << endl;
    return 0;
}
