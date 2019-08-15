#include <stdio.h>
void testePonteiro(int *pX);
int main (){
    struct horario {
        int h;
        int min;
        int seg;
        int *aponta;
    };
    typedef struct horario hms;

//Tanto agora quanto pont são do tipo "hms"
//O tipo do ponteiro é relacionado ao tipo do ender de mem
//para que ele vai apontar
    hms agora, *pont;
    pont = &agora;

//Mexendo no ponteiro struct, para atribuir valores a struct
//apontada, usa-se essa notação
//Ambas as notações são equivalentes, mas usa-se mais a segunda
    (*pont).h = 100; pont->h = 10;
    pont->min = 20;
    pont->seg = 30;
    printf("%d:%d:%d\n", agora.h, agora.min, agora.seg);

//Uma das variáveis do struct sendo um ponteiro
    int x = 10;
    agora.aponta = &x;
    printf("Imprimindo o conteudo de um ponteiro: %d\n", *agora.aponta);
    agora.aponta = NULL;
    printf("Atribuindo o ponteiro a um NULL: %d\n", agora.aponta);

//Passando ponteiro como argumento de uma função
    agora.aponta = &x;
    testePonteiro(agora.aponta);
    printf("Passando ponteiro para argumento de função: %d\n", *agora.aponta);


    return 0;
}

void testePonteiro(int *pX){
    ++*pX;
}
