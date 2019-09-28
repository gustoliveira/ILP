#include <iostream>
#include <set>
using namespace std;

int main(){
	int n, m, aux, aux1;
	set<int> filhos;

	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> aux;
		filhos.insert(aux);
	}

	for(int i = 0; i < m; i++){
		cin >> aux >> aux1;
		if(filhos.count(aux) == 1) filhos.insert(aux1);
	}

	cout << filhos.size() << endl;
	
	return 0;
}