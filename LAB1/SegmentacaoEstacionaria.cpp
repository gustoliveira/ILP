#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); //Para rodar mais rápido no jude

 	set<pair<long long int, long long int> > seg;
	set<pair<long long int, long long int> >::iterator it, ant, prox;
	pair<long long int, long long int>  carros;
	long long int n, soma = 0;
	char evento;

	cin >> n;
	for(unsigned long long int i = 0; i < n; i++){
		cin >> evento >> carros.first >> carros.second;
		if(evento == 'E'){
			it = seg.insert(carros).first;
			int aux = 0;

			if(it != seg.begin()) {
				ant = it; ant--;
				if(ant->second == carros.first-1)
					aux++;
			}
			prox = it; prox++;
			if(prox != seg.end()){
				if(prox->first == carros.second+1)
					aux++;
			}

			if (aux == 0) soma++;
			else if(aux == 2) soma--;
		}
		else{
			it = seg.find(carros);
			int aux = 0;

			if(it != seg.begin()) {
				ant = it; ant--;
				if(ant->second == carros.first-1)
					aux++;
			}
			prox = it; prox++;
			if(prox != seg.end()) {
				if(prox->first == carros.second+1)
					aux++;
			}

			if (aux == 0) soma--;
			else if(aux == 2) soma++;

			seg.erase(carros);
		}
		cout << soma << endl;
	}
	return 0;
}