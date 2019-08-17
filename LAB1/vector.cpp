#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int vetor[50], n, num;
	vector<int> vet;

	while(true){
		cin >> num;
		if(num == 0) break;
		vet.push_back(num);
	}

	//Função para saber o tamanho do vector
	int x = vet.size();

	//Outra maneira de percorrer um vector
	//Declarando um vetor do tipo ponteiro preparado para apontar para inteiros
	vector<int>::iterator it; //iterator é o mesmo que ponteiro, mas para c++
	for(it = vet.begin(); it != vet.end(); it++){
		cout << *it << endl;
	}

	//Ordena todos os valores do vector, em ordem crescente
	sort(vet.begin(), vet.end());
	//Ordena todos os valores do vector, em ordem descrescente
	reverse(vet.begin(), vet.end());
	//Percorrer todo o vetor, é igual a um vetor normal
	for(int i = 0; i < x; i++){
		cout << vet[i] << endl;
	}


	vet.erase(vet.begin()); //Apaga a primeira posição do vector
	vet.erase(vet.begin(), vet.end()); //Apaga um intervalo
	vet.clear(); //Limpando todo o vector



//CORRIDA
	//Definindo struct com id do carro e tempo dele
	typedef struct carros tipo;
	struct carros{
		int id, tempo;
	};

	//Função para comparar na parte de corrida;
	bool compare(tipo a, tipo b);

	vector<tipo> carros[10];
	tipo aux;

	//Jeito para ler vários tempos com termino EOF
	// while(cin >> aux.tempo >> aux.id){
	// 	carros.push_back(aux);
	// }

	for(int i = 0; i < 10; i++){
		cin >> carros[i].tempo >> carros[i].id
	}

	sort(carros.begin(), carros.end(), compare());

	return 0;
}

bool compare(tipo a, tipo b){
	//Analisar que não precisa colocar return TRUE ou FALSE, dá para fazer apenas com as expressões lógicas, que elas retorna as booleanas
	return (a.tempo < b.tempo || a.tempo == b.tempo && a.id < b.id);

}