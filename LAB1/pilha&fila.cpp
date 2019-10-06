#include <iostream>
#include <stack> //Pilha 
#include <queue> //Fila
using namespace std;

int main(){
	int n;
	stack <int> pilha; //Declarando pilha
	
	while(cin >> n){
		pilha.push(n); //Inserindo no topo da pilha
	}

	while(!pilha.empty()){ //Verificando se a pilha está vazia IMPORTANTE
		cout << pilha.top() << endl; //Verificando qual elemento está no topo da pilha
		pilha.pop(); //Desempilhando a pilha, sempre o elemento do topo
	}

	queue <int> fila1; //Declarando fila
	while(cin >> n){
		fila1.push(n); //Inserino elementos no fundo da fila
	}
	
	while(!fila1.empty()){
		cout << fila1.front() << endl; //Verificando fundo da fila
		fila1.pop();//Retirando elemento da fila, sempre do inicio
	}
	
	typedef struct pessoa tipo;
	struct pessoa {
		int s;
		string nome;
	};
	

	queue <tipo> fila;
	tipo aux;
	
	while(cin>>aux.s>>aux.nome){
		fila.push(aux);
	}

	while(!fila.empty()){
		aux = fila.front();
		if(aux.s % 2 == 0){
			fila.pop();
		}
		else{
			aux.s = aux.s - 1;
			fila.push(aux);
		}
	}	

	return 0;
}
