#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pilha pilha;
typedef struct lista lista;
typedef struct no no;

struct no{
    int id;
    no *prox;
};

struct pilha{
    int cont;
    no *topo;
};

struct lista{
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


lista *create_lista(){
    lista *l = (lista*)malloc(sizeof(lista));
    l->inicio = NULL;
    l->fim = NULL;
    return l;
}


int isempty_lista(lista *l){
	if(l->inicio == NULL) return 1;
	else return 0;
}

void push_lista(lista *l, no *x){
	if(isempty_lista(l) == 1){
		l->inicio = x;
		l->fim = x;
	}
	else{
		l->fim->prox = x;
		l->fim = x;
	}
	x->prox = NULL;
}

no *pop_lista(lista *l){
	no *x = l->inicio;
	l->inicio = x->prox;
	if(l->inicio == NULL) l->fim = NULL;
	x->prox = NULL;
	return x;//
}

void reverse(lista *l){
	pilha *P = create_pilha();

	while(isempty_lista(l) == 0){
		no *x = l->inicio;
		l->inicio = x->prox;
		if(l->inicio == NULL) l->fim = NULL;
		x->prox = P->topo;
		P->topo = x;
	}
	while(isempty_pilha(P) == 0){
		no *x = P->topo;
		P->topo = x->prox;
		if(isempty_lista(l) == 1){
			l->inicio = x;
			l->fim = x;
		}
		else{
			l->fim->prox = x;
			l->fim = x;

		}
		x->prox = NULL;		
	}
}

int mostrar(lista *l){
	return l->inicio->id;
}

int main(){
	lista *l = create_lista();

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

	push_lista(l, aux1);
	push_lista(l, aux2);
	push_lista(l, aux3);
	push_lista(l, aux4);
	push_lista(l, aux5);

	reverse(l);

	printf("%d\n", mostrar(l));
	pop_lista(l);
	printf("%d\n", mostrar(l));
	pop_lista(l);
	printf("%lu\n", mostrar(l));
	pop_lista(l);
	printf("%lu\n", mostrar(l));
	pop_lista(l);
	printf("%lu\n", mostrar(l));
	pop_lista(l);

	return 0;
}
