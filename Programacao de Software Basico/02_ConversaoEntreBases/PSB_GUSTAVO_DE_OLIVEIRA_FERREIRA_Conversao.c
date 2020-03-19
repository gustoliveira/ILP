#include <stdio.h>
#include <string.h>
#include <math.h>

int binario_decimal(int num){
    int dec = 0, i = 0;
    while (num != 0){
        int aux = num % 10;
        num = num / 10;
        dec += aux * pow(2, i);
        i++;
    }
    return dec;
}

int octal_decimal(int num){
    int oct = 0, i = 0;
    while (num != 0){
        int aux = num % 10;
        num = num / 10;
        oct += aux * pow(8, i);
        i++;
    }
    return oct;
}

void decimal_octal(int num){
    int octal = 0, i = 0;
    while (num != 0){
        int aux = num % 8;
        octal += aux * pow(10, i);
        num = (num - aux) / 8;
        i++;
    }
    printf("Octal: <%d>\n", octal);
}

void decimal_binario(int num){
    int bin = 0, i = 0;
    while (num != 0){
        int aux = num % 2;
        bin += aux * pow(10, i);
        num = (num - aux) / 2;
        i++;
    }
    printf("Binario: <%d>\n", bin);
}

void decimal_hexa(int num){
    printf("Hexadecimal <%x>\n", num);
}

void decimal_decimal(int num){
    printf("Decimal <%d>\n", num);
}

int main(){
    int flag, num;

    scanf("%d", &flag);

    if(flag == 3) scanf("%x", &num);
    else scanf("%d", &num);

    if(flag == 0){ // BINARIO
        decimal_octal(binario_decimal(num));
        decimal_decimal(binario_decimal(num));
        decimal_hexa(binario_decimal(num));
    }
    else if(flag == 1){ // OCTAL
        decimal_binario(octal_decimal(num));
        decimal_decimal(octal_decimal(num));
        decimal_hexa(octal_decimal(num));
    }
    else if(flag == 2){ // DECIMAL
        decimal_binario(num);
        decimal_octal(num);
        decimal_hexa(num);
    }
    else if(flag == 3){ // HEXADECIMAL
        decimal_binario(num);
        decimal_octal(num);
        decimal_decimal(num);
    }

    return 0;
}

