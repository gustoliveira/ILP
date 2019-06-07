#include <iostream>
using namespace std;

int main () {
    int n, m, aux, maior = 0, placar[100000] = {};

    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> placar[i];
    }

    for (int i = 0; i < n-1; i++){
		maior = i;
		for (int j = i+1; j < n; j++){
			if (placar[j] > placar[maior]) maior = j;
		}
		aux = placar[i];
		placar[i] = placar[maior];
		placar[maior] = aux;
	}

    for (int i = 0; i < m; i++){
        cout << placar[i] << endl;
    }
    return 0;
}
