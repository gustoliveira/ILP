#include <stdio.h>

//Para fazer uma função de um struct, tem que definir o struct fora
//do main, como variável global, o mesmo para o typedef
struct horario{
    int hr;
    int min;
    int seg;
};

typedef struct horario hms;

//Prototipando função feita por struct horario e redefinada como hms
hms teste(hms x);

int main (){
    hms x;
    x.hr = 03;
    x.min = 57;
    x.seg = 30;

    printf("%d:%d:%d\n", x.hr, x.min, x.seg);


    hms proxima = teste(x);

    printf("%d:%d:%d\n", proxima.hr, proxima.min, proxima.seg);

    return 0;
}

hms teste(hms x){
    x.hr = 04;
    x.min = 06;
    x.seg = 30;

    return x;
}
