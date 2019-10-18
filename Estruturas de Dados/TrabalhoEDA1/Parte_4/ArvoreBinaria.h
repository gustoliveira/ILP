//Gustavo de Oliveira Ferreira
#ifndef ARVOREBINARIABUSCA_H
#define ARVOREBINARIABUSCA_H

typedef struct no no;
typedef struct arvore arvore;

struct no;
struct arvore;

//Função para alocar espaço do arvore
arvore *create_tree();

//Função para alocar espaço do no
no *create_no();

// Função para verificar se arvore está vazia
int isEmpty(arvore *arv);

//Função para realizar busca na Arvore, complexidade: BigO(qntElementos)
//Use (raizPrincipal(arv), no *n) como argumentos
no *search(no *x, no *n);

//CONSERTAR E VER COMO ACESSAR O VALOR DO RETORNO
no *insert_recursiva(arvore *arv, no *x, no *n);

//Função iterativa para inserir na Arvore de Busca Binaria
//Se foi inserido corretamente, retorna 1, se já houver o elemento,
//retorna 0 e não insere
int insert_iterativa(arvore *arv, no *x);

//Acessa toda a arvore na sequencia recursiva: raiz - esq - dir
void PreOrdem(no *x);

//Acessa toda a arvore na sequencia recursiva: esq - raiz - dir
//Imprime todos os elementos da arvore em ordem crescente
void InOrdem(no *x);

//Acessa toda a arvore na sequencia recursiva: esq - dir - raiz
void PosOrdem(no *x);

//Desaloca o espaço de todas os nós da árvore
//Usa como principio a ideia de acesso PosOrdem
//Utilize raizPrincipal(arv) como argumento
void destroyTree(no *x);

//Retorna um ponteiro para o primeiro pai da arvore
no *raizPrincipal(arvore *arv);

//Provisório
int access_insert_recursivo(arvore *arv);

#endif
