#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

typedef struct pilha pilha;
typedef struct nop nop;

//Declaração do tipo pilha
struct pilha{
    nop* topo;
    int cont;
};

struct nop{
    int num;
    nop* prox;
};

nop *top_p(pilha *p){
  return p->topo;
}

int cont_p(pilha *p){
  return p->cont;
}

int num_p(nop *n){
	return n->num;
}

nop *prox_p(nop *n){
  return n->prox;
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

//Função para inicializar nó
nop* create_nop(int num){
	nop *n = (nop*) malloc(sizeof(nop));
	if(n!=NULL){ //Testa a alocação
		n->num = num;
		n->prox = NULL;
		return n;
	}
	else return NULL;
}

//Função para empilhar elemento
nop* push_p(pilha *p, nop *n){
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
nop* pop_p(pilha *p){
	if(isEmpty_p(p) == 1){
        return NULL;
    }
    else{
        nop* aux = p->topo;
        p->topo = aux->prox;
        aux->prox = NULL;
        p->cont--;
        return aux;
    }
}

//Remove a pilha e todos os dados referentes a ela
pilha *destroy_p(pilha *p){
	while(1 == 1){
		if(isEmpty_p(p) == 1) break;
		free(pop_p(p)); //Libera o espaço de memória do Nó enquanto desempilha-o
	}
	free(p);
	return p;
}

//Busca elemento na pilha e retorna-o
nop* search_p(pilha* p, int num){
  //A função retira do topo da pilha e aloca em uma pilha auxiliar, para poder buscar nop topo da pilha se o elemento existe. Findado o processo de busca
  //os valores da pilha auxiliar retornam à fila principal
  pilha* paux = (pilha*) malloc(sizeof(pilha));
  if(paux !=NULL){
    int flag = 0;
    nop* resultado = NULL;
    if (isEmpty_p(p)==0){
      while(p->cont>0){
        nop* aux = pop_p(p);
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

