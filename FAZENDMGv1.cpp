#include <iostream>
using namespace std;

int main () {
    int x, y, l, c, n;

    while (true){
        cin >> n;
        if (n == 0) break;

        // Declarando variaveis e zerando toda a matriz
        int matriz[2000][2000] = {0};
        int area = 0, borda = 0;
        int coordX[30] = {}, coordY[30] = {};
        int tamL[30] = {}, tamC[30] = {};

        // ler coordenadas e tamanhos
        for (int i = 0; i < n; i++){
            cin >> x >> y >> l >> c;
            coordX[i] = x;
            coordY[i] = y;
            tamL[i] = l;
            tamC[i] = c;
        }

        // Atribuir a cada local escolhido o valor 1
        // Adiciona-se +1 quando coloca na matriz, pra quando olhar as
        // bordas, não ficar sem contar pois não há zero
        for (int i = 0; i < n; i++){
            for (int j = coordX[i]; j < coordX[i]+tamL[i]; j++){
                for (int k = coordY[i]; k <coordY[i]+tamC[i]; k++){
                    matriz[j+1][k+1] = 1;
                }
            }
        }

        // Somando o valor da área total do terreno,
        // ou seja, todos os 1
        for (int i = 0; i < 2000; i++){
            for (int j = 0; j < 2000; j++){
                if (matriz[i][j] == 1) area++;
            }
        }
        // Somando o valor de cada borda, ou seja, cada 1, que é
        // vizinho de algum 0
        for (int i = 0; i < 2000; i++){
            for (int j = 0; j < 2000; j++){
                if (matriz[i][j] == 1) {
                    if (matriz[i][j+1] == 0) borda++;
                    if (matriz[i][j-1] == 0) borda++;
                    if (matriz[i+1][j] == 0) borda++;
                    if (matriz[i-1][j] == 0) borda++;
                }
            }
        }

        cout << area << ' ' << borda << endl;
    }
    return 0;
}
