#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){
	int vetor[5] = {};
	for(int i = 0; i < 5; i++){
		cin >> vetor[i];
	}

	queue <int> fila;
	stack <int> pilha;

	for(int i = 0; i < 5; i++){
		int aux = vetor[i];
		fila.push(aux);
	}

	while(!fila.empty()){
		int aux = fila.front();
		fila.pop();
		pilha.push(aux);
	}

	while(!pilha.empty()){
		int aux = pilha.top();
		pilha.pop();
		fila.push(aux);
	}

	for(int i = 0; i < 5; i++){
		int aux = fila.front();
		fila.pop();
		cout << aux << endl;
	}


	return 0;
}