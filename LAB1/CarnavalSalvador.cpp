#include <iostream>
#include <queue>
using namespace std;

typedef struct nomes tipo;
struct nomes {
	string nome;
	char sexo;
};

int main(){
	int n;
	tipo aux;
	cin >> n;

	queue <tipo> mas, fem, erradoMas, erradoFem;

	for(int i = 0; i < n; i++){
		cin >> aux.nome >> aux.sexo;
		if(aux.sexo == 'M') fem.push(aux);
		else if(aux.sexo == 'H') erradoMas.push(aux);
	}

	for(int i = 0; i < n; i++){
		cin >> aux.nome >> aux.sexo;
		if(aux.sexo == 'H') mas.push(aux);
		else if(aux.sexo == 'M') erradoFem.push(aux);
	}



	while(!erradoMas.empty()){
		aux = erradoMas.front();
		erradoMas.pop();
		mas.push(aux);
	}

	while(!erradoFem.empty()){
		aux = erradoFem.front();
		erradoFem.pop();
		fem.push(aux);
	}

	cout << "Fila Feminina:" << endl;
	if(fem.empty()) cout << "Vazia" << endl;
	while(!fem.empty()){
		aux = fem.front();
		cout << aux.nome << endl;
		fem.pop();
	}

	cout << "Fila Masculina:" << endl;
	if(mas.empty()) cout << "Vazia" << endl;
	while(!mas.empty()){
		aux = mas.front();
		cout << aux.nome << endl;
		mas.pop();
	}

	return 0;
}
