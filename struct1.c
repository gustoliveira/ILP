#include <stdio.h>

int main (){
//Definindo um struct com suas variáveis dentro delas
    struct dataAtual{
        int dia;
        int mes;
        int ano;
        char qualidade;
    };

//Struct tem nome descritivo, typedef para renomear mais curto
    typedef struct dataAtual dms;

//Struct vira um tipo, assim serve para declarar uma variável
    dms x;
//Atribuindo valores para as variáveis especificas
    x.dia = 11;
    x.mes = 8;
    x.ano = 2019;
    x.qualidade = 'N';

//Imprimindo atribuições
    printf("Dia %d do mes %d do ano %d, ", x.dia, x.mes, x.ano);
    printf("o dia está bom? %c.\n", x.qualidade);


    return 0;
}
