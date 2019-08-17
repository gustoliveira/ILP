#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct dma tipo;
struct dma{
	int dia, mes, ano;
};

bool cmp (tipo i, tipo j){
	return (i.ano > j.ano || (i.ano == j.ano && i.mes > j.mes) || (i.ano == j.ano && i.mes == j.mes && i.dia > j.dia));
}

int main(){
	vector<tipo> vetor;
	tipo aux;

	while(cin >> aux.dia >> aux.mes >> aux.ano){
		 vetor.push_back(aux);
	}

	sort(vetor.begin(), vetor.end(), cmp);
	reverse(vetor.begin(), vetor.end());

	for(int i = 0; i < vetor.size(); i++){
		cout << vetor[i].dia << ' ' << vetor[i].mes << ' ' << vetor[i].ano << endl;
	}

	return 0;
}