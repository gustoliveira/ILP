#include <iostream>
using namespace std;

int main (){
	int n;
	cin >> n;
	int matriz[2][n] = {0};

	for (int i = 0; i < n; i++){
		cin >> matriz[0][i] >> matriz [1][i];
	}

	int aux, fim = n, continuar;
	do{
		continuar = 0;
		for (int i = 0; i < fim - 1; i++){
			if(matriz[1][i+1] > matriz[1][i]){

				aux = matriz[1][i];
				matriz[1][i] = matriz[1][i+1];
				matriz[1][i+1] = aux;

				aux = matriz[0][i];
				matriz[0][i] = matriz[0][i+1];
				matriz[0][i+1] = aux;

				continuar = 1;
			}
		}
		fim--;
	}
	while(continuar != 0);

	for (int i = 0; i < n; i++){
		cout << matriz[0][i] << " " << matriz[1][i] << endl;
	}
	return 0;
}
