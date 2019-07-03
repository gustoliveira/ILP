#include <iostream>
using namespace std;

int main (){
    int n, m;
    cin >> n >> m;
    int matriz[n][m];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matriz[i][j];
        }
    }


    bool resposta = true;
    for(int i = 0; i < n; i++){
        int cnt = 0, zeros = 0;
        for (int j = 0; j < m; j++){
            if (matriz[i][j] == 0) ++zeros;
            else if (matriz[i][j] != 0) {
                cnt = j;
                break;
            }
        }
        if(zeros == n) {
            for (int k = i+1; k < n; k++){
                for (int l = 0; l < n; l++){
                    if (matriz[k][l] != 0){
                        resposta = false;
                        break;
                    }
                }
                resposta = false;
            }
        }
        resposta = false;
        for (int k = i+1; k < n; k++){
            for (int l = 0; l <= cnt; l++){
                if (matriz[k][l] != 0){
                    resposta = false;
                    break;
                }
            }
            if (resposta == false) break;
        }
        if (resposta == false) break;
    }

    if (resposta == true) cout << 'S' << endl;
    else cout << 'N' << endl;
    return 0;
}
