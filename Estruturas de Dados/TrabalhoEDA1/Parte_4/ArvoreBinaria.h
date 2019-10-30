//Gustavo de Oliveira Ferreira
#ifndef ARVOREBINARIABUSCA_H
#define ARVOREBINARIABUSCA_H

typedef struct no no;
typedef struct arvore arvore;

//Função para alocar espaço do arvore
//Retorna um ponteiro para a arvore alocada
arvore *create_tree();

//Função para alocar espaço do no
//Retorna ponteiro para o nó alocado
no *create_no(int num);

// Função para verificar se arvore está vazia
//Recebe como argumento um ponteiro para a arvore
//Retorna 1 se estiver vazia ou 0 caso não vazia
int isEmpty(arvore *arv);

//Função para realizar busca na Arvore, complexidade: BigO(qntElementos)
//Recebe o nó principal, utilizar função raiz() e o nó que se quer ser procurado
//Retorna um ponteiro para o nó se ele for encontrado e NULL se não houver na arvore
no *search(no *x, no *n);

//Função para retornar tamanho da arvore
//Recebe como argumento um ponteiro para a arvore a ser analisada
//Retorna um unsigned long int com o tamanho da arvore
unsigned long int size(arvore *arv);

//Função para inserir no n na arvore arv com nó raiz n
//Inserir (arv, arv->raiz, n)
no *insert_recursiva(arvore *arv, no *x, no *n);

//Função iterativa para inserir na Arvore de Busca Binaria
//Recebe como argumento um ponteiro para a arvore e um ponteiro para o nó que vai ser adicionado
//Retorna 1 se foi inserido corretamente e retorna 0 se o elemento já existir
int insert_iterativa(arvore *arv, no *x);

//Função para inserir nó na arvore
//Recebe como argumento um ponteiro para a arvore e um ponteiro para o nó a ser adicionado
//Retorna um ponteiro para o nó inserido
no *insert(arvore *arv, no *z);

//Função para remover da arvore
//Recebe como argumento um ponteiro para a arvore e um ponteiro para o nó a ser removido
//Retorna um ponteiro para o nó removido
no *remover_abb(arvore *t, no *z);

//Acessa toda a arvore na sequencia recursiva: raiz - esq - dir
//Recebe como argumento um ponteiro para a raiz, utilizar função raiz()
void PreOrdem(no *x);

//Acessa toda a arvore na sequencia recursiva: esq - raiz - dir
//Recebe como argumento a raiz, utilizar função raiz()
//Imprime todos os elementos da arvore em ordem crescente
void InOrdem(no *x);

//Acessa toda a arvore na sequencia recursiva: esq - dir - raiz
//Recebe como argumento a raiz, utilizar função raiz()
void PosOrdem(no *x);

//Desaloca o espaço de todas os nós da árvore
//Usa como principio a ideia de acesso PosOrdem
//Recebe como argumento a raiz, utilizar função raiz()
void destroyTree(arvore *arv, no *x);

//Retorna um ponteiro para o primeiro pai da arvore
//Recebe como argumento um ponteiro para a arvore
//Retorna um ponteiro do tipo nó contendo o nó principal
no *raiz(arvore *arv);

no *minimo(no *x);
no *maximo(no *x );
no *sucessor(no *x);
no *predecessor(no *x);
int altura(no *n);


#endif
