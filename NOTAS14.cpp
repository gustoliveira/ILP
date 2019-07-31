#include <iostream>
using namespace std;

int main (){
    int n, num, x;
    cin >> n;
    int vetor[n] = {}, vezes[200] = {}, maior = 0;

    for(int i = 0; i < n; i++){
        cin >> vetor[i];
    }

    for(int i = 0; i < n; i++){
        x = vetor[i]-1;
        vezes[x]++;
    }

    for(int i = 0; i < 200; i++){
        if(vezes[i] > maior) {
            maior = vezes[i];
            num = i;
        }
        else if(vezes[i] == maior){
            if(num < i) num = i;
        }
    }
    cout << num+1 << endl;
    return 0;
}
