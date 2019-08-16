//ESTÁ ERRADO

void ordenacao_insertion(int vetor[], int n){
	int aux;
	for (int i = 1; i < n; i++){
	    aux = vetor[i];
	    for (int j = i; (j >= 0) && (aux > vetor[j-1]); j--){
	        vetor[j] = vetor[j-1];
	    vetor[j] = aux;
	    }
	}
}