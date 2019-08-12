#include <stdio.h>

void ordem(int vetor[], int n);
void matriz(int matriz[][3]);

int main (){
    int n;
    printf("Ordenação de vetor em ordem crescente: \n");
    scanf("%d", &n);
    int vetor[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    ordem(vetor, n);

    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

    printf("\nSe deseja continuar e imprimir uma matriz 3x3 ");
    printf("digite 1, caso contrario, digite 0\n");
    int a;
    scanf("%d\n", &a);
    if(a == 1){
        int vetorBI[3][3];
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                scanf("%d", &vetorBI[i][j]);
            }
        }

        matriz(vetorBI);
    }



    return 0;
}

void ordem(int vetor[], int n){
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

void matriz(int matriz[][3]) {
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
