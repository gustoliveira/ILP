void ordenacao_insertion(int vetor[], int n) {
    for (int i = 1; i < n; i++) {
		int aux = vetor[i];
		int j;
		for (j = i - 1; (j >= 0) && (vetor[j] > aux); j--){
			vetor[j + 1] = vetor[j];
		}	
		vetor[j + 1] = aux;
	}
}