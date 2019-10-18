#ifndef ARVOREBINARIABUSCA_H
#define ARVOREBINARIABUSCA_H

typedef struct no no;
typedef struct arvore arvore;

struct no;
struct arvore;
arvore *create_tree();
no *create_no();
int isEmpty(arvore *arv);
no *search(no *x, no *n);
no *insert_recursiva(arvore *arv, no *x, no *n);
int insert_iterativa(arvore *arv, no *x);
void PreOrdem(no *x);
void InOrdem(no *x);
void PosOrdem(no *x);
void destroyTree(no *x);
no *raizPrincipal(arvore *arv);
int access_insert_recursivo(arvore *arv);

#endif
