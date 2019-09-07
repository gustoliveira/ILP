#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){
	int n;
	cin >> n;

//Criando lista e pilha auxiliar
	queue <int> lista;
	stack <int> pilha_aux;

//Lendo os elementos da lista
	for(int i = 0; i < n; i++){
		int aux;
		cin >> aux;
		lista.push(aux);
	}

//Enquanto a lista não estiver vazia, coloca o elemento da frente no auxiliar
//desenfilera e coloca o auxiliar na pilha
	while(!lista.empty()){
		int aux = lista.front();
		lista.pop();
		pilha_aux.push(aux);
	}

//Enquanto a pilha não estiver vazia, coloca o elemento do topo da pilha no auxiliar
//desempilha e coloca o auxiliar na lista
	while(!pilha_aux.empty()){
		int aux = pilha_aux.top();
		pilha_aux.pop();
		lista.push(aux);
	}

//Mostra a lista depois de alterada
	for(int i = 0; i < 5; i++){
		int aux = lista.front();
		lista.pop();
		cout << aux << endl;
	}

	return 0;
}