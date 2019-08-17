#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct maquina tipo;
struct maquina{
	string nome;
	int energia;
};

bool cmp(tipo i, tipo j) {
	return (i.nome < j.nome || i.nome == j.nome && i.energia > j.energia);
}


int main(){
	int n;
	cin >> n;
	vector<tipo> vetor;
	tipo aux;


	for(int i = 0; i < n; i++){
		cin >> aux.nome >> aux.energia;
		vetor.push_back(aux);
	}

	stable_sort(vetor.begin(), vetor.end(), cmp);

	for(int i = 0; i < n; i++){
		cout << vetor[i].nome << ' ' << vetor[i].energia << endl;
	}


	return 0;
}