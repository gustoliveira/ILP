#include <stdio.h>
#include <stdlib.h>


typedef struct deque deque;
typedef struct no no;

struct deque{
	int inicio_esq, inicio_dir, qnt, MAX;
	int vetor[MAX];

};

struct no{
	int id;
	no *prox;
};

int vazia(deque *d){
	if(d->inicio_esq == d->inicio_dir) return 1;
	else return 0;
}

int cheia(deque *d){
	if((d->inicio_dir + 1) % MAX == d->inicio_esq) return 1;
	else return 0;
}

deque *criar_deque(){
	deque *d = (deque*)malloc(sizeof(deque));
 	if(d!=NULL){
 		d->inicio_esq = 0;
 		d->inicio_dir = 0;
 		d->qnt = 0;
 		d->MAX = tamanho;
 		else return f;
 	}
 	else return NULL;
}

int InsEsq(deque *d, no *x){ //Inicio
	if(cheia(d) == 1) return 0;

	d->inicio_esq--;
	if(d->inicio_esq < 0) d->inicio_esq = MAX-1;

	d->vetor[d->inicio_esq] = x;
	d->qnt++;
	return 1;
}

int InsDir(deque *d, no *x){ //Final
	if(cheia(d) == 1) return 0;

	d->vetor[d->inicio_dir] = x;
	d->inicio_dir = (d->inicio_dir+1)%MAX;
	d->qnt++;
	return 1;
}

no *remEsq(deque *d){ //Inicio 
	if(vazia(d) == 1) {
		printf("UNDERFLOW");
		return NULL;
	}
	else{
		no *aux = d->vetor[d->inicio_esq];
		d->inicio_esq = (fila->inicio_esq+1) % MAX;
		d->qnt--;
		return aux;
	}
	
}

no *remDir(deque *d){ //Final
	if(vazia(d) == 1) {
		printf("UNDERFLOW");
		return NULL;
	}
	else{
		no *aux = d->vetor[d->inicio_dir];
		d->inicio_dir--; 
		if(d->inicio_dir < 0) d->final = MAX-1;
		d->qnt--;
		return aux;
	}
	
}