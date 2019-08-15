#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct estrutura_no no;
typedef struct estutura_pilha pilha;

struct estrutura_no{
    int cpf, cpft, valor, op;
    char op;
    no *prox;
};

struct estrutura_pilha{
    int cont;
    no *topo;
};

no *create_pilha(){
    pilha *p = (pilha*)malloc(sizeof(pilha));
    p->cont = 0;
    p->topo = NULL;
    return p;
}

no *create_no(int cpf, int cpft, char op, int valor){
    no *n = (no*)malloc(sizeof(no));
    n->cpf = cpf;
    n->cpft = cpft;
    n->op = op;
    n->valor = valor;
    n->prox = NULL;
    return n;
}

int isempty(pilha *p){
    if(p->topo == NULL) return 1;
    else return 0;
}

void push(pilha *p, no *k){
    k->prox = p-> topo;
    p->topo = k;
    p->cont++;
}

no *pop(pilha *p){
    if(isempty(p) == 1) return NULL;
    else{
        p->cont--;
        no *aux;
        p->topo = aux->prox;
        aux->prox = NULL;
        return aux;
    }
}

void destroy(pilha *p){
    while(isempty(p) != 1){
        free(pop(p));
    }
    free(p);
}

void print(pilha *p){
    no *aux = p->topo
    while(isempty(p) != 1){
        printf("[%d, %d, %c, %d]\n", aux->cpf, aux->cpft, aux->op, aux->valor);
        aux = aux->prox;
        if(aux == NULL) break;
    }
}

int main(){
    int cpf, cpft, valor, n;
    char c;

    pilha *vetor_pilhas[3];

    for(int i = 0; i < 3; i++){
        vetor_pilhas[i] = create_pilha();
    }




    return 0;
}