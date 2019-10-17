#include <stdio.h>
#include <stdlib.h>

typedef struct fila fila;
typedef struct lista lista;
typedef struct no no;

struct no {
	int numero;
	no *prox;
};

struct lista{
	no *primeiro;
};

struct fila{
	no* inicio;
	no* fim;
	int cont;
};

fila* criar_fila(){
	fila* f = (fila*)malloc(sizeof(fila));
	f->inicio = NULL;
	f->fim = NULL;
	f->cont = 0;
};

no *criar_no(int num){
	no *n = (no*)malloc(sizeof(no));
	n->numero = num;
	n->prox = NULL;
	return n;
};

void push_fila(fila *f, no *n){
	if(f->inicio == NULL){
		f->inicio = n;
		f->fim = n;
		n->prox = NULL;
	}
	else{
		f->fim->prox = NULL;
		f->fim = n;
		n->prox = NULL;
	}
}

no *pop_fila(fila *f){
	if(f->inicio == NULL){
		printf("UNDERFLOW\n");
		return NULL;
	}
	else{
		no *n = f->inicio;
		f->inicio = n->prox;
		if(f->inicio == NULL) f->fim = NULL;
		n->prox;
		return n;
	}
}

int inserir_lista(fila *f, int pos, no *x){
	if(f->inicio == NULL){
		push_fila(f, x);
		//printf("primeiro if\n");
		f->cont++;
		return 1;
	}

	if(f->inicio != NULL && pos == 1){
		x->prox = f->inicio;
		f->inicio = x;
		//printf("segundo if\n");
		f->cont++;
		return 1;
	}
	else if(f->inicio != NULL && pos != 1){
		int i = 1;
		no *aux = f->inicio;
		while(i != pos+1 && aux->prox != NULL){
			aux = aux->prox;
			i++;
		}
		fila *f1 = criar_fila();
		f1->inicio = f->inicio;
		f1->fim = aux;

		no* aux2;
		aux2 = aux->prox;
		push_fila(f1, x);
		x->prox = aux2;

		f->cont++;
		return 1;

	}
	return 0;
}

no *remover_lista(fila *f, no *x){
	if(f->inicio == NULL){
		printf("UNDERFLOW");
		return NULL;
	}
	else{
		no *p, *q;
		p = f->inicio;
		q = f->inicio->prox;
		while(q != NULL && q->numero){
			p = q;
			q = q->prox;
		}
		fila *aux;

		aux->inicio = f->inicio;
		aux->fim = q;

		no *n = pop_fila(aux);
		aux->fim->prox = f->inicio;
		f->inicio = aux->inicio;
		f->cont--;
		return n;
	}
}

void imprime (fila *f) {
	no *x;
	x = f->inicio;
	int i = 1;
	while(x != NULL){
		x = x->prox;
		// printf("x: %ld \n", x);
		printf("Loop: %d\n", i);
		i++;
	}
}

int main(){
	int n;
	scanf("%d", &n);

	fila *l = criar_fila();

	no *aux = criar_no(n);
	inserir_lista(l, 1, aux);

	no *aux1 = criar_no(n+1);
	inserir_lista(l, 2, aux1);

	no *aux2 = criar_no(n+2);
	inserir_lista(l, 3, aux2);

	no *aux3 = criar_no(n+3);
	inserir_lista(l, 4, aux3);

	no *aux4 = criar_no(n+4);
	inserir_lista(l, 2, aux4);

	// // //printf("Resultado foi: %d\n", a);

	printf("%d\n", l->cont);
	imprime(l);
	// remover_lista(l, aux);
	// remover_lista(l, aux1);
	// remover_lista(l, aux2);


	return 0;
}