#include <iostream>
using namespace std;

typedef struct maquina tipo;
struct maquina{
	string nome;
	int energia;
};
void ordenacao_bubble1(tipo vetor[], int n);
void ordenacao_bubble2(tipo vetor[], int n);

int main(){
	int n;
	cin >> n;
	tipo vetor[n];

	for(int i = 0; i < n; i++){
		cin >> vetor[i].nome >> vetor[i].energia;
	}

	ordenacao_bubble1(vetor, n);
	ordenacao_bubble2(vetor, n);

	for(int i = 0; i < n; i++){
		cout << vetor[i].nome << ' ' << vetor[i].energia << endl;
	}
	return 0;
}

void ordenacao_bubble1(tipo vetor[], int n){
    int continua, fim = n, aux1;
    string aux;
    do {
        continua = 0;
        for (int i = 0; i < fim -1; i++){
            if (vetor[i].nome > vetor[i+1].nome) {
                aux = vetor[i].nome;
                vetor[i].nome = vetor[i+1].nome;
                vetor[i+1].nome = aux;

                aux1 = vetor[i].energia;
                vetor[i].energia = vetor[i+1].energia;
                vetor[i+1].energia = aux1;

                continua = i;
            }
        }
        fim--;
    }
    while(continua != 0);
}

void ordenacao_bubble2(tipo vetor[], int n){
    int continua, fim = n, aux;
    do {
        continua = 0;
        for (int i = 0; i < fim -1; i++){
            if (vetor[i].nome == vetor[i+1].nome && vetor[i].energia < vetor[i+1].energia) {
                aux = vetor[i].energia;
                vetor[i].energia = vetor[i+1].energia;
                vetor[i+1].energia = aux;
                continua = i;
            }
        }
        fim--;
    }
    while(continua != 0);
}
