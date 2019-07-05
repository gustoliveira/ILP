#include <iostream>
using namespace std;

int main (){
    int n, soma = 0;
    cin >> n;
    int vetor[n] = {};

    for(int i = 0; i < n; i++){
        cin >> vetor[i];
    }

    for(int i = 0; i < n; i++){
        soma+=vetor[i];
    }

    int meio = soma/2;
    soma = 0;
    for(int i = 0; i < n; i++){
        soma+= vetor[i];
        if(soma == meio){
            meio = i+1;
            break;
        }
    }
    cout << meio << endl;


    return 0;
}
