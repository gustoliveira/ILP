#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct ini{
	int qnt;
	char tipo;
};

int main(){
	int n, m;
	queue<string> nomes;
	stack<ini> inimigos, inimigos_aux;

	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++){
		string aux;
		getline(cin, aux);
		nomes.push(aux);
	}

	cin >> m;
	for(int i = 0; i < m; i++){
		ini aux;
		cin >> aux.tipo >> aux.qnt;
		if(aux.tipo == 'G') aux.qnt = aux.qnt*10;
		else if(aux.tipo == 'D') aux.qnt = aux.qnt*50;
		else if(aux.tipo == 'R') aux.qnt = aux.qnt*100;

		inimigos_aux.push(aux);
	}
	while(!inimigos_aux.empty()){
		ini aux = inimigos_aux.top();
		inimigos_aux.pop();
		inimigos.push(aux);
	}

	string hero;
	char coiso;
	bool flag = true;
	while(flag == true){
		hero = nomes.front();
		nomes.pop();

		for(int i = 0; i < 10 && !inimigos.empty(); i++){
			ini aux = inimigos.top();
			inimigos.pop();
			aux.qnt--;

			if(aux.tipo == 'R' && aux.qnt == 0){
				flag = false;
				break;
			}

			if(aux.qnt > 0) inimigos.push(aux);
		}
		if(flag == false) break;
		nomes.push(hero);

	}

	cout << hero << endl;

	return 0;
}
