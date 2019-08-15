#include <iostream>
using namespace std;

//Prototipando a função soma, que irá fazer os calculos
int soma(int din, int max);

//Função principal
int main (){
    int din, max;
    while (true){
        cin >> din >> max;
        if (din == 0 && max == 0) break;

        cout << soma(din, max) << endl;
    }
}

//Função que realizará calculos
int soma(int din, int max){

//Se din > max, significa que precisa dividar as partes
    if (din > max){

// Se din for par, quando divide por 2 ele sairá em duas partes iguais
// o que não acontece quando for um numero impar.
// Ex.: 9/2 terá que ser uma parte igual a 5 e outra 4, o c++ irá
// dividir como quatro apenas, com isso, tem que pegar uma parte
// valendo a divisão normal, e outra somar 1, pra ficar igual a 5.
// Multiplica por dois, pois toda vez que divide, são duas empresas
// a mais, e como é par, seus resultados são iguais quando é
// impar soma as duas partes diferentes que terá o mesmo efeito
        if (din%2 == 0) return 2*soma(din/2, max);
        else if (din%2 != 0) {
            return soma(din/2, max) + soma(din/2+1, max);
        }
    }

//Se o din <= max, significa que a divisão foi feita até o final
//logo todas as partes já estão divididas corretamente
    else if (din <= max) return 1;
}
