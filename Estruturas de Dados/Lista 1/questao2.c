#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pilha pilha;
typedef struct fila fila;
typedef struct no no;

struct no{
    int id;
    no *prox;
};

struct pilha{
    int cont;
    no *topo;
};

struct fila{
	no *inicio;
	no *fim; 
};


pilha *create_pilha(){
    pilha *p = (pilha*)malloc(sizeof(pilha));
    p->cont = 0;
    p->topo = NULL;
    return p;
}

no *create_no(int id){
    no *n = (no*)malloc(sizeof(no));
    n->id = id;
    n->prox = NULL;
    return n;
}

int isempty_pilha(pilha *p){
    if(p->topo == NULL) return 1;
    else return 0;
}

void push_pilha(pilha *p, no *k){
    k->prox = p-> topo;
    p->topo = k;
    p->cont++;
}

no *pop_pilha(pilha *p){
    if(isempty_pilha(p) == 1) return NULL;
    else{
        no *aux = p->topo;
        p->cont--;
        p->topo = aux->prox;
        aux->prox = NULL;
        return aux;
    }
}


fila *create_fila(){
    fila *F = (fila*)malloc(sizeof(fila));
    F->inicio = NULL;
    F->fim = NULL;
    return F;
}


int isempty_fila(fila *F){
	if(F->inicio == NULL) return 1;
	else return 0;
}

void push_fila(fila *F, no *x){
	if(isempty_fila(F) == 1){
		F->inicio = x;
		F->fim = x;
	}
	else{
		F->fim->prox = NULL;
		F->fim = x;
	}
	x->prox = NULL;
}

no *pop_fila(fila *F){
	no *x = F->inicio;
	F->inicio = x->prox;
	if(F->inicio == NULL) F->fim = NULL;
	x->prox = NULL;
	return x;//
}

void reverse(fila *F){
	pilha *P = create_pilha();

	while(isempty_fila(F) == 0){
		no *x = F->inicio;
		F->inicio = x->prox;
		if(F->inicio == NULL) F->fim = NULL;
		x->prox = P->topo;
		P->topo = x;
	}
	while(isempty_pilha(P) == 0){
		no *x = P->topo;
		P->topo = x->prox;
		if(isempty_fila(F) == 1){
			F->inicio = x;
			F->fim = x;
		}
		else{
			F->fim->prox = NULL;
			F->fim = x;

		}
		x->prox = NULL;		
	}
}

int mostrar(fila *F){
	return F->inicio->id;
}

int main(){
	fila *F = create_fila();

	int id;
	scanf("%d", &id);

	no *t1 = create_no(id);
	no *t2 = create_no(id+1);
	no *t3 = create_no(id+5);
	no *t4 = create_no(id+10);
	no *t5 = create_no(id+20);

	no *aux1 = t1;
	no *aux2 = t2;
	no *aux3 = t3;
	no *aux4 = t4;
	no *aux5 = t5;

	push_fila(F, aux2);
	push_fila(F, aux3);
	push_fila(F, aux4);
	push_fila(F, aux5);

	reverse(F);

	printf("%d\n", mostrar(F));
	pop_fila(F);
	printf("%d\n", mostrar(F));
	pop_fila(F);
	printf("%lu\n", F->inicio->id);
	pop_fila(F);
	printf("%lu\n", F->inicio->id);
	pop_fila(F);

	return 0;
}