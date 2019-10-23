#include <iostream>
using namespace std;

int main () {
    int n,  m, o, p, b;
    int matriz[2][100] = {0};

    cin >> n >> m;

    for (int i = 0; i < 100; i++){
        matriz[0][i] = i+1;
        matriz[1][i] = 0;
    }

    for (int i = 1; i < m+1; i++){
        cin >> o >> p >> b;
        matriz[1][o-1]++;
        matriz[1][p-1]++;
        matriz[1][b-1]++;
    }

//Ordenação
    int continua, fim = n, aux;
    do {
        continua = 0;
        for (int i = 0; i < fim - 1; i++){
            if (matriz[1][i] < matriz[1][i+1]) {
                aux = matriz[1][i];
                matriz[1][i] = matriz[1][i+1];
                matriz[1][i+1] = aux;

                aux = matriz[0][i];
                matriz[0][i] = matriz[0][i+1];
                matriz[0][i+1] = aux;
                continua = i;
            }
        }
        fim--;
    }
    while(continua != 0);

    for (int i = 0; i < n; i++){
        cout << matriz[0][i] << ' ';
    }
    cout << endl;
    return 0;
}
