//Função principal
#include <stdio.h>
#include "ArvoreBinaria.h"

int main(){
    arvore *arv = create_tree();
    int n;

    for (int i = 0; i < 11; i++){
        scanf("%d", &n);
        insert_recursiva(arv, raizPrincipal(arv), create_no(n));
        int aux = access_insert_recursivo(arv);
        printf("%d = %d\n", n, aux);
    }

    printf("PreOrdem: ");
    PreOrdem(raizPrincipal(arv));
    printf("\nInOrdem: ");
    InOrdem(raizPrincipal(arv));
    printf("\nPosOrdem: ");
    PosOrdem(raizPrincipal(arv));


    // printf("\n%d\n", isEmpty(arv)); //Verifica se a arvore está vazia
    // printf("%d\n", arv->tam); //Verifica o tamanho da arvore

    // printf("%d\n", isEmpty(arv));

    // PosOrdem(raizPrincipal(arv));
    // scanf("%d%d", &a, &b);

    // printf("A area é: %d\n", calcArea(a, b));


    // insert_iterativa(arv, create_no(7));
    // insert_recursiva(arv, raizPrincipal(arv), create_no(5));
    // insert_recursiva(arv, raizPrincipal(arv), create_no(10));

    return 0;
}