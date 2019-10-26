#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    int vetor[n+2] = {};

    for(int i = 0; i < n+1; i++){
        if(i == 0 || i == n+2) {
            vetor[i] = 0;
            continue;
        }
        cin >> vetor[i];
    }

    for(int i = 1; i < n+1; i++){
        int soma = 0;
        if(vetor[i] == 1) soma++;
        if(vetor[i+1] == 1) soma++;
        if(vetor[i-1] == 1) soma++;
        cout << soma << endl;
    }


    return 0;
}
