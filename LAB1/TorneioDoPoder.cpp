#include <iostream>
using namespace std;

typedef struct requisitos tipo;
struct requisitos{
	string nome;
	int poder;
};
void ordenacao_bubble(tipo vetor[], int n);

int main(){
	int n, m;
	cin >> n >> m;
	tipo vetor[n];

	for(int i = 0; i < n; i++){
		cin >> vetor[i].nome >> vetor[i].poder;
	}

	ordenacao_bubble(vetor, n);

	for(int i = 0; i < m; i++){
		cout << vetor[i].nome << ' ' << vetor[i].poder << endl;
	}
	return 0;
}

void ordenacao_bubble(tipo vetor[], int n){
    int continua, fim = n, aux;
    string nome;
    do {
        continua = 0;
        for (int i = 0; i < fim - 1; i++){
            if (vetor[i].poder < vetor[i+1].poder) {
                aux = vetor[i].poder;
                vetor[i].poder = vetor[i+1].poder;
                vetor[i+1].poder = aux;

                nome = vetor[i].nome;
                vetor[i].nome = vetor[i+1].nome;
                vetor[i+1].nome = nome;

                continua = i;
            }
        }
        fim--;
    }
    while(continua != 0);
}
