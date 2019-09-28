#include <iostream>
#include <queue>
using namespace std;

typedef struct tipo tipo;
struct tipo{
	int id, dinheiro;
};

int main(){
	int n, tempo, valor;
	queue <tipo> fila;

	cin >> n >> tempo >> valor;

	for(int i = 0; i < n; i++){
		tipo aux;
		cin >> aux.id >> aux.dinheiro;
		if(aux.dinheiro < valor) continue;
		else if(aux.dinheiro >= valor) fila.push(aux);
	}

	for(int i = 0; i < tempo; i++){
		if(fila.empty() == true) break;
		tipo aux = fila.front();
		fila.pop();

		if(aux.dinheiro >= valor){
			aux.dinheiro -= valor;
			if(aux.dinheiro >= valor) fila.push(aux);
			else continue;
		}
		else continue;
	}



	if(fila.empty()) cout << "SEM FILA" << endl;
	else{
		int x = fila.size();
		for(int i = 0; i < x; i++){
			tipo aux = fila.front();
			fila.pop();
			cout << aux.id << ' ' << aux.dinheiro << endl;
		}
	}

	return 0;
}