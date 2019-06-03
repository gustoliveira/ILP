#include <iostream>
using namespace std;

int main () {
    int x, y, l, c, n;

    while (true){
        cin >> n;
        if (n == 0) break;

        /*
        Declarando uma matriz com dobro de tamanho para ter margem,
        e zerando toda ela;
        Area é o área e borda mostrará o perimetro;
        Armazena-se todas as coordenadas e tamanhos dentro de um vetor;
        */
        int matriz[2000][2000] = {0};
        int area = 0, borda = 0;
        int coordX[30] = {}, coordY[30] = {};
        int tamL[30] = {}, tamC[30] = {};

        /*
        Lendo os valores das coordenadas e dos tamanhos,
        cada loop irá representar um terreno diferente;
        */
        for (int i = 0; i < n; i++){
            cin >> x >> y >> l >> c;
            coordX[i] = x;
            coordY[i] = y;
            tamL[i] = l;
            tamC[i] = c;
        }

        /*
        Cada local, que é faz parte do terreno, será representado com '1';
        Quando o acrescenta, adiciona +1 as coordenadas (matriz[j+1][k+1],
        para que quando for ler as bordas, não dê nenhum tipo de erro,
        por este motivo também que a matriz é maior do que o tamanho máximo
        da questão;
        */
        for (int i = 0; i < n; i++){
            for (int j = coordX[i]; j < coordX[i]+tamL[i]; j++){
                for (int k = coordY[i]; k <coordY[i]+tamC[i]; k++){
                    matriz[j+1][k+1] = 1;
                }
            }
        }

        /*
        Se na matriz está '1', adiciona mais 1km2 a area, assim temos a
        área total;
        */
        for (int i = 0; i < 2000; i++){
            for (int j = 0; j < 2000; j++){
                if (matriz[i][j] == 1) area++;
            }
        }
        /*
        Toda vez que há um '1', irá verificar todas as coordenadas em volta
        buscando um '0', caso ache, soma-se mais uma unidade a borda, e assim
        aumenta-se o perimetro;
        */
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
