#include <iostream>
#include <set>
using namespace std;

struct tipo{
	string id;
	int hp;

};

inline bool operator<(const tipo &a, const tipo &b){
	return (a.id < b.id || (a.id == b.id && a.hp < b.hp));
} //É NECESSÁRIO A EXISTENCIA DESSA FUNÇÃO PARA FAZER SET DE STRUCT



int main(){
	set<int> conjunto; //Declaração de set (que é um conjunto) do tipo int

	conjunto.insert(1); //Inserindo elemento no conjunto
	conjunto.insert(1); //Insere apenas elementos únicos, não há repetição
	conjunto.insert(2);	
	conjunto.insert(0);	//É uma especie de vector ordenado, ao imprimir primeiro virá o 0

	conjunto.count(0); //Se houver, retorna 1
	conjunto.erase(0); //Tirando o elemento 0 do conjunto
	conjunto.count(0); //Se não houver, retorna 0

	int n = conjunto.size(); //Retorna quantidade de elementos do conjuntos

	set<int>::iterator a = conjunto.begin(); //Iterator que aponta para primeiro elemento
	set<int>::iterator b = conjunto.end(); //Iterator para fim do conjunto - NÃO É UM ELEMENTO
	set<int>::iterator c = conjunto.find(2); //Iterator para o elemento, SE NÃO HOUVER, RETORNA PARA conjunto.end()

	//Maneira 1 de imprimir um set
	for(set<int>::iterator it = conjunto.begin(); it != conjunto.end(); it++){
		cout << *it << endl;
	}
	//Maneira 2 de imprimir, APAGA OS ELEMENTOS
	while(!conjunto.empty()){
		int aux = *conjunto.begin();
		cout << aux << endl;
		conjunto.erase(aux);
	}

	conjunto.clear(); //Apaga todos os elementos do set


	return 0;
}