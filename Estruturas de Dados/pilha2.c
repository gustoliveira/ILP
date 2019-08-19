#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct estrutura_no no;
typedef struct estrutura_pilha pilha;

struct estrutura_no{
    int cpf, cpft, valor;
    char op;
    no *prox;
};

struct estrutura_pilha{
    int cont;
    no *topo;
};

pilha *create_pilha(){
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
        no *aux = p->topo;
        p->cont--;
        p->topo = aux->prox;
        aux->prox = NULL;
        return aux;
    }
}

void destroy(pilha *p){
    while(isempty(p) == 1){
        free(pop(p));
    }
    free(p);
}

void imprimir(pilha *p){
    no *aux = p->topo;
    while(isempty(p) == 0){
        printf("[%d, %d, %c, %d]\n", aux->cpf, aux->cpft, aux->op, aux->valor);
        aux = aux->prox;
        if(aux == NULL) break;
    }
}

int main(){
    int cpf, cpft, valor, n;
    char op;

    pilha *vetor_pilhas[3];

    for(int i = 0; i < 3; i++){
        vetor_pilhas[i] = create_pilha();
    }

    no *cliente = NULL;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d %c %d", &cpf, &cpft, &op, &valor);
        cliente = create_no(cpf, cpft, op, valor);
        push(vetor_pilhas[i%3], cliente);
    }

    printf("\n-:| RELATÓRIO PARCIAL |:-\n3\n");
    for(int i = 0; i < 3; i++){
        printf("Guiche: %d: %d\n", i+1, vetor_pilhas[i]->cont);
        imprimir(vetor_pilhas[i]);
        destroy(vetor_pilhas[i]);
        //printf("Teste\n");
    }
    //free(vetor_pilhas);


    return 0;
}