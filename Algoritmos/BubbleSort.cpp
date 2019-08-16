void ordenacao_bubble(int vetor[], int n){
    int continua, fim = n, aux;
    do {
        continua = 0;
        for (int i = 0; i < fim -1; i++){
            if (vetor[i] > vetor[i+1]) {
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                continua = i;
            }
        }
        fim--;
    }
    while(continua != 0);
}
