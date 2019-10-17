//Biblioteca que contem scanf e printf
#include <stdio.h>

//Prototipando a função
int calcArea(int x, int y);

int main(){
    int a, b;

//Em scanf, %d indica o tipo de dado que o usuário irá colocar
//o & serve para indicar o endereço de memória que está a variável
//para assim poder inserir o valor digitado
    scanf("%d%d", &a, &b);

    printf("A area é: %d\n", calcArea(a, b));

    return 0;
}

//int é o tipo do retorno da função
//calcArea é o nome da função pela qual será chamada
//Dentro dos () tem os valores que serão inseridos qnd for chamada
//em main
int calcArea(int x, int y){
    return x * y;
}
