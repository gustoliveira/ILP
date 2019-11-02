#ifndef PILHA_H
#define PILHA_H

typedef struct pilha pilha;
typedef struct nop nop;

//Função para criar pilha
//Retorna ponteiro contendo o endereço da pilha
pilha* create_p();

//Função para checar se a pilha está vazia
//Recebe como argumento um ponteiro para a pilha a ser analizada
//Retorna 1 se Vazia e 0 se Não vazia
int isEmpty_p(pilha *p);

//Função para buscar um elemento na pilha
//Recebe como argumento um ponteiro para a pilha e um usigned long int contendo o valor do cpf a ser buscado
//Retorna um ponteiro para o nó ou NULL se não encontrado
nop* search_p(pilha* p, int cpf);

//Função para inserir elemento nop topo da pilha
//Recebe como argumento um ponteiro para a pilha e um ponteiro para o nó que vai ser inserido
//Retorna um ponteiro para o nó recem criado
nop* push_p(pilha *p, nop *n);

//Função para retirar elemento do topo da pilha
//Recebe como argumento um ponteiro para a pilha
//Retorna um ponteiro para o nó que foi retirado
nop* pop_p(pilha *p);

//Função para destruir a pilha e todo seu conteudo
//Recebe como argumento um ponteiro para a pilha a ser destruida
//Retorna um ponteiro para a pilha destruida, se bem sucedido retorna NULL
pilha *destroy_p(pilha *p);

//Função para retornar o topo da pilha
//Recebe como argumento um ponteiro para a pilha
//Retorna um ponteiro do tipo nop para o topo da pilha
nop *top_p(pilha *p);

//Função para retornar o tamanho da pilha
//Recebe como argumento um ponteiro para a pilha
//Retorna um unsigned long contendo o tamanho da pilha
int cont_p(pilha *p);

//Função para retornar o valor de um certo cpf
//Recebe como argumento um ponteiro para um nó
//Retorna um int para o valor do cpf
int num_p(nop *n);

//Função para retornar um ponteiro para o proximo nop da pilha
//Recebe como argumento um ponteiro para o nó
//Retorna um ponteiro para o proximo nó depois deste na pilha
nop *prox_p(nop *n);

int num_p(nop *n);
nop* create_nop(int num);

#endif // PILHA_H