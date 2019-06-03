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

        // ler coordenadas e tamanhos
        // Atribuir a cada local escolhido o valor 1
        // Adiciona-se +1 quando coloca na matriz, pra quando olhar as
        // bordas, não ficar sem contar pois não há zero
        for (int i = 0; i < n; i++){
            cin >> x >> y >> l >> c;
            for (int j = x; j < x + l; j++){
                for (int k = y; k < y+ c; k++) matriz[j+1][k+1] = 1;
            }
        }

        // Somando o valor da área total do terreno,
        // ou seja, todos os 1
        // Somando o valor de cada borda, ou seja, cada 1, que é
        // vizinho de algum 0
        for (int i = 0; i < 2000; i++){
            for (int j = 0; j < 2000; j++){
                if (matriz[i][j] == 1) {
                    area++;
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
