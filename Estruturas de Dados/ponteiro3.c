#include <stdio.h>

int somaVetor(int vetor[], const int n);

int main(){
    int vetor[10] = {10,1,1,1,1,1,1,1,1,1};
    int *ponteiro;

//Quando atribui-se a um vetor, irá apontar para a primeira posição do vetor;
    ponteiro = vetor;
    printf("Provando que aponta para a primeira posição: %d\n", *ponteiro);

//Maneira de percorrer/imprimir um vetor atráves de ponteiros
    printf("Percorrendo todo o vetor e imprimindo\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", *(ponteiro+i));
    }

//Ponteiros, vetor e funções
    printf("\nA soma do vetor é: %d\n", somaVetor(vetor, 10));

    return 0;
}

int somaVetor(int vetor[], const int n){
    int soma = 0;
    int *ponteiro;
    int const *finalVetor = vetor + n;

    for(ponteiro = vetor; ponteiro < finalVetor; ++ponteiro){
        soma += *ponteiro;
    }
    return soma;
}
