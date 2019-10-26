//Gustavo de Oliveira Ferreira
#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"

//Função para alocar espaço do arvore
arvore *create_tree(){
    arvore *arv = (arvore*)malloc(sizeof(arvore));
    arv->raizPrincipal = NULL;
    arv->tam = 0;
    return arv;
}

//Função para alocar espaço do no
no *create_no(int num){
    no *n = (no*)malloc(sizeof(no));
    n->num = num;
    n->esq = NULL;
    n->dir = NULL;
    return n;
}

// Função para verificar se arvore está vazia
int isEmpty(arvore *arv){
    if (arv->raizPrincipal == NULL) {       //Se estiver vazia retorna 1
        return 1;
    }
    else if(arv->raizPrincipal != NULL){    //Se houver elemento, retorna 0
        return 0;
    }
    return 0;
}

//Função para realizar busca na Arvore -> BigO(qntElementos)
//Entra com (arv->raizPrincipal, no *n)
no *search(no *x, no *n){
    if(x == NULL){
        return x;
    }
    if(x->num < n->num) {
        return search(x->dir, n);
    }
    else if(x->num > n->num) {
        return search(x->esq, n);
    }
    else
        return x;
}

//CONSERTAR E VER COMO ACESSAR O VALOR DO RETORNO
//Função para inserir no n na arvore arv com nó raiz n
//Inserir (arv, arv->raizPrincipal, n)
no *insert_recursiva(arvore *arv, no *x, no *n){
    if(arv->raizPrincipal == NULL){
        arv->raizPrincipal = n;
        arv->tam++;
        return n;
    }
    else{
        if(x == NULL) {
            printf("Debug\n");
            arv->tam++;
            return n;
        }
        else{
            if(x->num > n->num) {
                x->esq = insert_recursiva(arv, x->esq, n);
            }
            else {
                x->dir = insert_recursiva(arv, x->dir, n);
            }
        }
    }
    return n;
}
//SOLUÇÃO TEMPORARÁRIA PARA ACESSAR O VALOR DO RETORNO
int access_insert_recursivo(arvore *arv){
    return arv->tam;
}

//Função iterativa para inserir na ABB
//Se foi inserido corretamente, retorna 1, se já houver o elemento,
//retorna 0 e não insere
int insert_iterativa(arvore *arv, no *x){
    if(arv->raizPrincipal == NULL){
        arv->raizPrincipal = x;
        arv->tam++;
        return 1;
    }
    else{
        no *auxPai = arv->raizPrincipal, *aux = NULL;
        while (auxPai != NULL){
            if(auxPai->num > x->num){
                aux = auxPai->esq;
                if(aux == NULL){
                    auxPai->esq = x;
                    arv->tam++;
                    return 1;
                }
            }
            else if(auxPai->num < x->num){
                aux = auxPai->dir;
                if(aux == NULL){
                    auxPai->dir = x;
                    arv->tam++;
                    return 1;
                }
            }
            auxPai = aux;
        }
    }
    return 0;
}

//raiz - esq - dir
void PreOrdem(no *x){
    if(x!=NULL){
        printf("%d ", x->num);
        PreOrdem(x->esq);
        PreOrdem(x->dir);
    }
}

//Imprime uma ABB em ordem crescente
//esq - raiz - dir
void InOrdem(no *x){
    if(x!=NULL){
        InOrdem(x->esq);
        printf("%d ", x->num);
        InOrdem(x->dir);
    }
}

//Pode ser utilizada para destruir a arvore
//esq - dir - raiz
void PosOrdem(no *x){
    if(x!=NULL){
        PosOrdem(x->esq);
        PosOrdem(x->dir);
        printf("%d ", x->num);
    }
}

//Declara como destroyTree(arv->x)
//Utiliza a idea de varrer atraves de PosOrdem
void destroyTree(no *x){
    if(x != NULL){
        destroyTree(x->esq);
        destroyTree(x->dir);
        free(x);
    }
}

//Retorna um ponteiro para a raizPrincipal
no *raizPrincipal(arvore *arv){
    no *aux = arv->raizPrincipal;
    return aux;
}
