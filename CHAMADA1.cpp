#include <iostream>
using namespace std;

int main () {
    int n, m;
    cin >> n >> m;
    string vetor[n];

    for (int i = 0; i < n; i++){
      cin >> vetor[i];
    }

    int menor;
    string aux;
    for(int i = 0; i < n-1; i++) {
        menor = i;
        for(int j = i+1; j < n; j++){
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
        }
        aux = vetor[i];
        vetor[i] = vetor[menor];
        vetor[menor] = aux;
    }

    cout << vetor[m-1] << endl;
  return 0;
}
