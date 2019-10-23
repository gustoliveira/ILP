#include <iostream>
using namespace std;

int main () {
    int n, m, valor;
    cin >> n >> m;
    int matriz[2][n]={0};
/*
Cria uma matriz, em que nas posições matriz[0][x] estão a numeração
dos carros, para poder marcar qual é qual;
O loop a seguir, serve para colocar nas posições matriz[0][x] os números
dos carros e nas posições matriz[1][x] o valor 0 para não ter lixo.
*/
    for (int i = 0; i < n; i++){
        matriz[0][i] = i+1;
        matriz[1][i] = 0;
    }
/*
A variavel "valor" vai pegar o tempo da corrida e somar nas
posições matriz[1][x];
*/
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> valor;
            matriz[1][i] += valor;
        }
    }
/*
A Ordenação a seguir foi a SelectionSort;
Ela vai funcionar em duas etapas nessa questão, primeiro muda o tempo
do lugar, e depois muda o número do carro para o mesmo lugar, criando
assim a ordem dos tempos de forma crescente;
*/
    int continua, fim = n, aux;
    do {
        continua = 0;
        for (int i = 0; i < fim - 1; i++){
            if (matriz[1][i] > matriz[1][i+1]){
                aux = matriz[1][i];
                matriz[1][i] = matriz[1][i+1];
                matriz[1][i+1] = aux;

                aux = matriz[0][i];
                matriz[0][i] = matriz[0][i+1];
                matriz[0][i+1] = aux;
                continua = 1;
            }
        }
        fim--;
    }
    while(continua != 0);
/*
Imprime o valor dos 3 primeiros carros
*/
    for (int i = 0; i < 3; i++){
        cout << matriz[0][i] << endl;
    }

    return 0;
}
