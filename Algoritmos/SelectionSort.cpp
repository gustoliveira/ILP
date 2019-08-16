//NO MELHOR DOS CASOS É O(LOG N²);

void ordenacao_selection(int vetor, int n){
	for(int i = 0; i < n-1; i++) {
	    menor = i;
	    for(j = i+1; j < n; j++){
	        if(vetor[j] < vetor[menor]){
	            menor = j;
	        }
	    }
	    aux = vetor[i];
	    vetor[i] = vetor[menor];
	    vetor[menor] = aux;
	}
}