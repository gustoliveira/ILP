//Gustavo de Oliveira Ferreira
#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"

typedef struct no no;
typedef struct arvore arvore;
typedef struct pilha pilha;
typedef struct no no;

//Declaração do tipo pilha
struct pilha{
    no* topo;
    int cont;
};

//Struct tipo no
struct no{
    int num; //Conteudo
    no *esq, *dir, *pai, *prox;
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
    n->prox = NULL;
    return n;
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


no *raiz(arvore *arv){
    return arv->raiz;
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

//Função para inicializar pilha
pilha* create_p(){
  pilha *p = (pilha*) malloc(sizeof(pilha));
  if(p!=NULL){
	    p->topo = NULL;
	    p->cont = 0;
	    return p;
	}
	else return NULL;
}

//Função para empilhar elemento
no* push_p(pilha *p, no *n){
    n->prox = p->topo;
    p->topo = n;
    p->cont++;
	return p->topo;
}

//Checa se a pilha está vazia, retorna "1" se sim e "0" caso contrário
int isEmpty_p(pilha *p){
    if(p->topo == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

//Desempilha elemento do topo da pilha referente, retorna NULL se pilha estiver vazia
no* pop_p(pilha *p){
	if(isEmpty_p(p) == 1){
        return NULL;
    }
    else{
        no* aux = p->topo;
        p->topo = aux->prox;
        aux->prox = NULL;
        p->cont--;
        return aux;
    }
}

no* search_p(pilha* p, int num){
  pilha* paux = (pilha*) malloc(sizeof(pilha));
  if(paux !=NULL){
    int flag = 0;
    no* resultado = NULL;
    if (isEmpty_p(p)==0){
      while(p->cont>0){
        no* aux = pop_p(p);
        if(aux->num == num && flag == 0){
          resultado = aux;
          flag = 1;
        }
        push_p(paux,aux);
      }
    }
    while(paux->cont>0){
      push_p(p,pop_p(paux));
    }
    free(paux);
    return resultado;
  }
  else return NULL;
}


void create_arv_da_questao(arvore *arv);
void mostrar_arv(arvore *arv);

//raiz - esq - dir
void PreOrdem(no *x){
    if(x!=NULL){
        printf("%d ", x->num);
        PreOrdem(x->esq);
        PreOrdem(x->dir);
    }
}

pilha *PreOrdemPilha(no *n, no *aux){
    no *ini = n;
    pilha *pil = create_p();

    while(1==1){
        no *n1 = aux->dir, *n2 = aux->esq;
        if(aux->dir != NULL) aux = n1;
        else{
            if(aux->esq != NULL) aux = n2;
        }

        if(aux->esq == NULL && aux->dir == NULL) break;
    }

    unsigned long long int i = 0;
    while(1==1){
        printf("Debug: %lld\n", i);
        no *p = create_no(aux->num);
        int key = p->num;
        if(aux->dir == NULL && aux->esq == NULL && search_p(pil, key) == NULL){
            push_p(pil, p);
            aux = aux->pai;
            continue;
        }
        if(aux->dir == NULL && aux->esq == NULL && search_p(pil, key) != NULL){
            aux = aux->pai;
            continue;
        }
        if(aux->dir != NULL || aux->esq != NULL){
            if(search_p(pil, n->dir->num) == NULL && n->dir != NULL){
                aux = n->dir;
                continue;
            }
            else{
                if(search_p(pil, n->esq->num) == NULL){
                    aux =  n->esq;
                    continue;
                }
                else{
                    push_p(pil, p);
                    if(ini->num == p->num) break;
                }
            }
        }
        i+=1;
    }
    return pil;
}

int main(){
    arvore *arv = create_tree();
    int vetor[11] = {15, 5, 18, 16, 25, 2, 1, 3, 7, 13, 9};

    no *a0 = create_no(vetor[0]);
    no *a1 = create_no(vetor[1]);
    no *a2 = create_no(vetor[2]);
    no *a3 = create_no(vetor[3]);
    no *a4 = create_no(vetor[4]);
    no *a5 = create_no(vetor[5]);
    no *a6 = create_no(vetor[6]);
    no *a7 = create_no(vetor[7]);
    no *a8 = create_no(vetor[8]);
    no *a9 = create_no(vetor[9]);
    no *a10 = create_no(vetor[10]);

    insert(arv, a0);
    insert(arv, a1);
    insert(arv, a2);
    insert(arv, a3);
    insert(arv, a4);
    insert(arv, a5);
    insert(arv, a6);
    insert(arv, a7);
    insert(arv, a8);
    insert(arv, a9);
    insert(arv, a10);

    mostrar_arv(arv);

    pilha *p = PreOrdemPilha(raiz(arv), a4);

    while(isEmpty_p(p) == 0){
        no *n = pop_p(p);
        printf("%d ", n->num);
    }

    return 0;
}


void mostrar_arv(arvore *arv){
    printf("PreOrdem: ");
    PreOrdem(raiz(arv));
    printf("\nPosOrdem: ");
    PosOrdem(raiz(arv));
    printf("\n");
}