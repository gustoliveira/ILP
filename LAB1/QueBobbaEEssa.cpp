#include <iostream>
#include <set>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);//Acelerar tempo de execução no JUDE
	int n, m, ofensivas = 0, nao_ofensivas = 0;
	set<string> pal_ofensivas, pal_ofensivas_aux, pal_nao_ofensivas;

	cin >> n >> m;
	for(int i = 0; i < n; i++){
		string aux;
		cin >> aux;
		pal_ofensivas.insert(aux);
		pal_ofensivas_aux.insert(aux);
	}

	for(int i = 0; i < m; i++){
		int n1;
		cin >> n1;
		string aux, frase[n1];
		for(int j = 0; j < n1; j++){
			cin >> aux;
			if(pal_ofensivas.count(aux) == 1){
				frase[j] = "bobba";
				if(pal_ofensivas_aux.count(aux) == 1){
					pal_ofensivas_aux.erase(aux);
					ofensivas++;
				}
			}
			else{
				frase[j] = aux;
				if(pal_nao_ofensivas.count(aux) == 0){
					pal_nao_ofensivas.insert(aux);
					nao_ofensivas++;
				}
			}
		}
		for(int j = 0; j < n1; j++){
			cout << frase[j] << ' ';
		}
		cout << endl;
	}
	cout << nao_ofensivas << ' ' << ofensivas << endl;

	return 0;
}