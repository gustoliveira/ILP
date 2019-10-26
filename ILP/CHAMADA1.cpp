#include <iostream>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    string vetor[n];

    for (int i = 0; i < n; i++){
        cin >> vetor[i];
    }

    int continuar, fim = n;
    string aux;

    do{
        continuar = 0;
        for (int i = 0; i < fim - 1; i++){
            if (vetor[i+1] < vetor[i]){
                aux = vetor[i+1];
                vetor[i+1] = vetor[i];
                vetor[i] = aux;

                continuar = 1;
            }
        }
        fim--;
    }
    while (continuar != 0);

    cout << vetor[m-1] << endl;
    return 0;
}
