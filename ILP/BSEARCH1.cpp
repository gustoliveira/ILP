#include <stdio.h>
using namespace std;
/*
Questão é simples na lógica, apenas pede a posição do número pedido e
caso não tenha, imprime "-1", contudo o tempo do programa e o tamanho
dos números empregados nos testes obrigam a usar vários long long int e
escrever em C, uma linguagem de mais baixo nível, que é mais rápida
*/

long long int PesquisaBinaria (long long int vet[], long long int inf, long long int sup, long long int chave){
    long long int retorno = -1;
    while (inf <= sup)
    {
        long long int meio = (inf + sup)/2;
        if (chave == vet[meio]) {
            retorno = meio;
            sup = meio - 1;
        }
        else if (vet[meio] < chave) inf = meio+1;
        else sup = meio-1;
     }
     return retorno;
}

int main (){
    long long int n, q;
    scanf("%lld%lld", &n,&q);
    long long int vet[n], chave;

    for(int i = 0; i < n; i++){
        scanf("%lld", &vet[i]);
    }

    for(int i = 0; i < q; i++){
        scanf("%lld", &chave);
        printf("%lld\n",PesquisaBinaria(vet, 0, n-1, chave));
    }

}
