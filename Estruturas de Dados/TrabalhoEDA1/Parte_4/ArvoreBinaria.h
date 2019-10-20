//Gustavo de Oliveira Ferreira
#ifndef ARVOREBINARIABUSCA_H
#define ARVOREBINARIABUSCA_H

typedef struct no no;
typedef struct arvore arvore;

//Struct tipo no
struct no{
    int num; //Conteudo
    no *esq, *dir, *pai;
};

//Struct tipo arvore
struct arvore{
    no *raizPrincipal;
    int tam; //Quantos elementos a arvore contem
};

//Função para alocar espaço do arvore
//Retorna um ponteiro para a arvore alocada
arvore *create_tree();

//Função para alocar espaço do no
//Retorna ponteiro para o nó alocado
no *create_no();

// Função para verificar se arvore está vazia
//Recebe como argumento um ponteiro para a arvore
//Retorna 1 se estiver vazia ou 0 caso não vazia
int isEmpty(arvore *arv);

//Função para realizar busca na Arvore, complexidade: BigO(qntElementos)
//Recebe o nó principal, utilizar função raizPrincipal() e o nó que se quer ser procurado
//Retorna um ponteiro para o nó se ele for encontrado e NULL se não houver na arvore
no *search(no *x, no *n);

//CONSERTAR E VER COMO ACESSAR O VALOR DO RETORNO
no *insert_recursiva(arvore *arv, no *x, no *n);

//Função iterativa para inserir na Arvore de Busca Binaria
//Recebe como argumento um ponteiro para a arvore e um ponteiro para o nó que vai ser adicionado
//Retorna 1 se foi inserido corretamente e retorna 0 se o elemento já existir
int insert_iterativa(arvore *arv, no *x);

//Acessa toda a arvore na sequencia recursiva: raiz - esq - dir
//Recebe como argumento um ponteiro para a raizPrincipal, utilizar função raizPrincipal()
void PreOrdem(no *x);

//Acessa toda a arvore na sequencia recursiva: esq - raiz - dir
//Recebe como argumento a raizPrincipal, utilizar função raizPrincipal()
//Imprime todos os elementos da arvore em ordem crescente
void InOrdem(no *x);

//Acessa toda a arvore na sequencia recursiva: esq - dir - raiz
//Recebe como argumento a raizPrincipal, utilizar função raizPrincipal()
void PosOrdem(no *x);

//Desaloca o espaço de todas os nós da árvore
//Usa como principio a ideia de acesso PosOrdem
//Recebe como argumento a raizPrincipal, utilizar função raizPrincipal()
void destroyTree(no *x);

//Retorna um ponteiro para o primeiro pai da arvore
//Recebe como argumento um ponteiro para a arvore
//Retorna um ponteiro do tipo nó contendo o nó principal
no *raizPrincipal(arvore *arv);

//Provisório
int access_insert_recursivo(arvore *arv);

#endif
