/*
Pega o elemento do vetor, e já o coloca no seu local de ordem,
fazendo apenas uma vez;
Olha uma posição i, e compara com todos os que vem antes de i,
olhando quem é maior e colocando na ordem;
*/

int aux;
for (int i = 1; i < n; i++){
    aux = vetor[i];
    for (int j = i; (j >= 0) && (aux > vetor[j-1]); j--){
        vetor[j] = vetor[j-1];
    vetor[j] = aux;
    }
}

/*
    aux pega o valor atual;
segundo for vai funcionando enquanto j for maior que 0, e o valor que
está sendo visto no j for maior, ele vai trocando de posição, volta e
compara com o anterior novamente, até deixar tudo na ordem.
*/
