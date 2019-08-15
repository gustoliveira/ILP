#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int primeiro[n][n] = {0};
    int segundo[n][n] = {0};
    int saida[n][n] = {0};


    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> primeiro[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> segundo[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            saida[i][j] = primeiro[i][j] + segundo[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << saida[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
