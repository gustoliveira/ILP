#include <stdio.h>

int soma(int n1, int n2);
int absoluto(int x);

int main (){
    int a, b, adicao;
    scanf("%d%d", &a, &b);

    adicao = soma(a, b);
    printf("%d\n", adicao);

    return 0;
}

int soma(int n1, int n2){
    if(n1 < 0) n1 = absoluto(n1);
    if(n2 < 0) n2 = absoluto(n2);

    return n1+n2;
}

int absoluto(int x){
    return x * -1;
}
