#include <iostream>
#include <vector>
using namespace std;

typedef struct botas tipo;
struct botas {
    int tam;
    char lado;
};

int main(){
    int n;

    while(cin >> n){
        vector<tipo> vetor;
        tipo aux;
        int soma = 0;

        for(int i = 0; i < n; i++){
            cin >> aux.tam >> aux.lado;
            vetor.push_back(aux);
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(vetor[i].tam != 0 && vetor[i].tam != 0 && vetor[i].lado != 'C' && vetor[j].lado != 'C'){
                    if((vetor[i].tam == vetor[j].tam) && (vetor[i].lado != vetor[j].lado)){
                        ++soma;
                        vetor[i].lado = 'C';
                        vetor[j].lado = 'C';
                        vetor[i].tam = 0;
                        vetor[j].tam = 0;
                    }
                }
            }
        }
        cout << soma << endl;
    }
    return 0;
}