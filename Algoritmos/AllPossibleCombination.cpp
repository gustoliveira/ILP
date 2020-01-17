#include <stdio.h>
#include <time.h>
#include <iostream>
using namespace std;

void CombinationRepetitionUtil(int chosen[], char arr[], int index, int r, int start, int end){
	if (index == r){
		for (int i = 0; i < r; i++){
			cout << arr[chosen[i]];
		}
		cout << endl;
		return;
	}

	for (int i = start; i <= end; i++){
		chosen[index] = i;
		CombinationRepetitionUtil(chosen, arr, index + 1, r, i, end);
	}
	return;
}

void CombinationRepetition(char arr[], int n, int r){
	int chosen[r+1];

  	CombinationRepetitionUtil(chosen, arr, 0, r, 0, n-1);
}

int main(){
	char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int tam = sizeof(arr)/sizeof(arr[0]), r = 5;
	time_t t_ini, t_fim;

	t_ini = time(NULL);

	CombinationRepetition(arr, tam, r);

	t_fim = time(NULL);

	cout << "Tempo de execução: " << difftime(t_fim, t_ini) << endl;

	return 0;
}