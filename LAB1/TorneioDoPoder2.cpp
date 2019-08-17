#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct torneioPoder tipo;
struct torneioPoder{
	string nome;
	int poder;
};

bool cmp(tipo i, tipo j){
	return (i.poder > j.poder);
}


int main(){
	int n, m;
	cin >> n >> m;
	vector<tipo> vetor;
	tipo aux;

	for(int i = 0; i < n; i++){
		cin >> aux.nome >> aux.poder;
		vetor.push_back(aux);
	}

	sort(vetor.begin(), vetor.end(), cmp);

	for(int i = 0; i < m; i++){
		cout << vetor[i].nome << ' ' << vetor[i].poder << endl;
	}


	return 0;
}