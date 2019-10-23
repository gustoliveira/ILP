#include <iostream>
using namespace std;

int main () {
    int n, c, m, teste = 0;

    while (cin >> n) {
        if (n == 0) break;
        int matriz[2][n], maior = 0;
        for (int i = 0; i < n; i++){
            cin >> matriz[0][i] >> matriz[1][i];
        }

        for (int i = 0; i < n; i++){
            if (matriz[1][i] >= maior) maior = matriz[1][i];
        }
        cout << "Turma " << ++teste << endl;
        for (int i = 0; i < n; i++){
            if (matriz[1][i] == maior) cout << matriz[0][i] << ' ';
        }
        cout << endl;
    }
    return 0;
}
