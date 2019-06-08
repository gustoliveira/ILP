/*
Grava o menor valor e o local onde ele está, vai até o final do vetor,
troca o atual com o menor de lugar e faz isso até tudo estar ordenado;

Menos eficiente, sempre complexidade O(n²) mesmo no melhor dos casos.
*/


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
