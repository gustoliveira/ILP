//Gustavo de Oliveira Ferreira
#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"

typedef struct no no;
typedef struct arvore arvore;

//Struct tipo no
struct no{
    int num; //Conteudo
    no *esq, *dir, *pai;
};

//Struct tipo arvore
struct arvore{
    no *raiz;
    int tam; //Quantos elementos a arvore contem
};

//Função para alocar espaço do arvore
arvore *create_tree(){
    arvore *arv = (arvore*)malloc(sizeof(arvore));
    arv->raiz = NULL;
    arv->tam = 0;
    return arv;
}

//Função para alocar espaço do no
no *create_no(int num){
    no *n = (no*)malloc(sizeof(no));
    n->num = num;
    n->esq = NULL;
    n->dir = NULL;
    n->pai = NULL;
    return n;
}

// Função para verificar se arvore está vazia
int isEmpty(arvore *arv){
    if (arv->raiz == NULL) {       //Se estiver vazia retorna 1
        return 1;
    }
    else if(arv->raiz != NULL){    //Se houver elemento, retorna 0
        return 0;
    }
    return 0;
}

//Função para realizar busca na Arvore -> BigO(qntElementos)
//Entra com (arv->raiz, no *n)
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

no *insert_recursiva(arvore *arv, no *x, no *n){
    if(arv->raiz == NULL){
        arv->raiz = n;
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

//Função iterativa para inserir na ABB
//Se foi inserido corretamente, retorna 1, se já houver o elemento,
//retorna 0 e não insere
int insert_iterativa(arvore *arv, no *x){
    if(arv->raiz == NULL){
        arv->raiz = x;
        arv->tam++;
        return 1;
    }
    else{
        no *auxPai = arv->raiz, *aux = NULL;
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

//Tamanho da arvore
unsigned long int size(arvore *arv){
    return arv->tam;
}

no *insert(arvore *arv, no *z){
    no *y = NULL;
    no *x = arv->raiz;
    while(x != NULL){
        y = x;
        if(z->num < x->num) x = x->esq;
        else x = x->dir;
    }
    z->pai = y;
    if(y == NULL) arv->raiz = z;
    else if(z->num < y->num) y->esq = z;
    else y->dir = z;

    arv->tam++;
    return z;
}

void transplante(arvore *T, no *u, no *v){
    if(u->pai == raiz(T)) T->raiz = v;
    else if(u == u->pai->esq) u->pai->esq = v;
    else u->pai->dir = v;

    if(v != NULL) v->pai = u->pai;
}

no *remover_abb(arvore *t, no *z){
    if(z->esq == NULL) transplante(t, z, z->dir);
    else if(z->dir == NULL)   transplante(t, z, z->esq);
    else{
        no *y = minimo(z->dir);
        if(y->pai != z){
            transplante(t, y, y->dir);
            y->dir = z->dir;
            y->dir->pai = y;
        }
        transplante(t, z, y);
        y->esq = z->esq;
        y->esq->pai = y;
    }
    t->tam--;
    return z;
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

//Utiliza a idea de varrer atraves de PosOrdem
void destroyTree(arvore *arv, no *x){
    if(x != NULL){
        destroyTree(arv, x->esq);
        destroyTree(arv, x->dir);
        free(x);
    }
    arv->raiz = NULL;
}

//Retorna um ponteiro para a raiz da arvore
no *raiz(arvore *arv){
    no *aux = arv->raiz;
    return aux;
}

no *minimo(no *x){
    while(x->esq != NULL){
        x = x->esq;
    }
    return x;
}

no *maximo(no *x){
    while(x->dir != NULL){
        x = x->dir;
    }
    return x;
}

no *sucessor(no *x){
    if(x->dir != NULL) return minimo(x->dir);
    no *y = x->pai;
    while(y != NULL && x == y->dir){
        x = y;
        y = x->pai;
    }
    return y;
}

no *predecessor(no *x){
    if(x->dir != NULL) return maximo(x->esq);

    no *y = x->pai;
    while(y != NULL && x == y->esq){
        x = y;
        y = x->pai;
    }
    return y;
}

int altura(no *n){
    int hDir, hEsq;

    if(n == NULL) return -1;
    hDir = altura(n->dir);
    hEsq = altura(n->esq);

    if(hDir > hEsq) return hDir+1;
    else return hEsq+1;
}