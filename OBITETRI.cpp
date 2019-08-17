#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct tetris tipo;
struct tetris {
	string nome;
	int id;
	int final;
};

bool cmp(tipo i, tipo j){
	return (i.final > j.final || (i.final == j.final && i.nome < j.nome));
}

int main(){
	int n, index = 0;

	while(true){
		cin >> n;
		if(n == 0) break;

		vector<tipo> vetor;
		tipo aux;
		int pontos[12];

		for(int i = 0; i < n; i++){
			cin >> aux.nome;

			int maior = 0, menor = 1001, soma = 0;
			for(int j = 0; j < 12; j++){
				cin >> pontos[j];
				if(pontos[j] > maior) maior = pontos[j];
				if(pontos[j] < menor) menor = pontos[j];
				soma += pontos[j];
			}

			soma = soma - (maior + menor);
			aux.final = soma;
			vetor.push_back(aux);
		}

		sort(vetor.begin(), vetor.end(), cmp);

		for(int i = 0; i < n; i++){
			vetor[i].id = i+1;
		}
		for(int i = 0; i < n; i++){
			if(vetor[i].final == vetor[i+1].final){
				vetor[i+1].id = vetor[i].id;
			}
		}

		cout << "Teste " << ++index << endl;
		for(int i = 0; i < n; i++){
			cout << vetor[i].id << ' ' << vetor[i].final << ' ' << vetor[i].nome << endl;
		}
	}
	return 0;
}