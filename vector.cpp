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

	//Outra maneira de percorrer um vector
	//Declarando um vetor do tipo ponteiro preparado para apontar para inteiros
	// vector<int>::iterator it; //iterator é o mesmo que ponteiro, mas para c++
	// for(it= = vet.begin().it; it != vet.end(); it++){
	// 	cout << *it << endl;
	// }

	sort(vet.begin(), vet.end());
	//Percorrer todo o vetor, é igual a um vetor normal
	for(int i = 0; i < vet.size(); i++){
		cout << vet[i] << endl;
	}

	// vet.erase(vet.begin()); //Apaga a primeira posição do vector
	// vet.erase(vet.begin(), vet.end()); //Apaga um intervalo
	// vet.clear(); //Limpando todo o vector

	return 0;
}

