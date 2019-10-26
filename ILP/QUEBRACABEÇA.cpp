#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    int numero = n;
    string pnum[n] = {}, snum[n] = {}, let[n] = {}, palavra[numero] = {}, chave;
    bool ini = true;

    for(int i = 0; i < n; i++){
        cin >> pnum[i] >> let[i] >> snum[i];
    }

    for(int i = 0; i < n; i++){
        if (ini == true) chave = "0";
        for(int j = 0; j < n; j++){
            if(pnum[j] == chave) {
                palavra[i] = let[j];
                chave = snum[j];
                ini = false;
                break;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << palavra[i];
    }
    cout << endl;
    return 0;
}
