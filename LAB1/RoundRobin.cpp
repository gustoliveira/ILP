#include <iostream>
#include <queue>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;

	queue <int> fila;

	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		fila.push(x);
	}

	for(int i = 0; i < m; i++){
		if(fila.empty()) break;
		int aux = fila.front()-1;
		fila.pop();
		if(aux != 0) fila.push(aux);
	}


	if(fila.empty()) cout << "pronto" << endl;
	else{
		int x = fila.size();
		cout << x << endl;
		for(int i = 0; i < x; i++){
			cout << fila.front() << ' ';
			fila.pop();
		}
		cout << endl;
	}

	return 0;
}
