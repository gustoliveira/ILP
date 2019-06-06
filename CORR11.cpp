#include <iostream>
using namespace std;

int main () {
	int n, m, leitor[100] = {}, menor = 0, aux;
	int carro[100] = {}, ordem[100] = {}, Final[100] = {};
	cin >> n >> m;

    /*
    Realiza a soma dos dos números e armazena em dois vetores iguais,
    carro e ordem;
    */
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> leitor[j];
			carro[i] += leitor[j];
			ordem[i] += leitor[j];
		}
	}

    /*
    Algoritmo de ordenação, ele irá colocar o vetor carro, com os tempos,
    e colocar em ordem crescente, este será o parametro para definir
    quais são os melhores tempos;
    */
	for (int i = 0; i < n-1; i++){
		menor = i;
		for (int j = i+1; j < n; j++){
			if (carro[j] < carro[menor]) menor = j;
		}
		aux = carro[i];
		carro[i] = carro[menor];
		carro[menor] = aux;
	}

    /*
    Irá pegar o valor dos tempos e comparar com o outro vetor que era igual,
    porem, que está na ordem de numeração dos carros;
    O for irá verificar os tempos que estão no vetor carro (ordenados em tempos
    crescente) e comparar com o vetor ordem (que contem os numeros dos carros)
    quando achar, irá pegar o j (que é o numero do carro) e armazenar no vetor
    Final, a soma no j é feita pois o vetor ordem começa em 0, e os números dos
    carros começam em 1.
    */
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (carro[i] == ordem[j]) Final[i] = j+1;
		}
	}

    /*
    Imprime os valor dos três primeiros carros em ordem de chegada
    */
	for (int i = 0; i < 3; i++){
		cout << Final[i] << endl;
	}
	return 0;
}
