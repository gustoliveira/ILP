#include <iostream>
using namespace std;

int main () {
    // n casas, m encomendas
    int n, m;
    cin >> n >> m;
    // vetor são os números das casas, sequencia a ordem das casas para entregar
    int vetor[n] = {0}, sequencia[m] = {0};

// Lendo os valores e colocando-os nos vetores
    for (int i = 0; i < n; i++){
        cin >> vetor[i];
    }
    for (int i = 0; i < m; i++){
        cin >> sequencia[i];
    }

// Busca binária
/*
A busca vai procurar qual é o indice da casa que está na sequencia.
A chave é o número da casa que se está procurando, a busca irá encontrar
o indice, ou seja, em qual local do vetor está o número da casa, a variavel
indexAtual irá armazenar qual o local que o carteiro está no momento,
a variavel indexEncomenda é para onde ele tem que ir, subtrai os dois e tira
o módulo, assim irá descobrir qual o tempo que ele leva de uma casa para
outra, e acrescenta esse valor na variavel soma.
Faz este processo com todas as casas presentes no vetor sequencia, e no final
irá ter o tempo total.
*/
    int chave, tempo = 0, indexAtual = 0, indexEncomenda = 0, dif = 0;
    for(int i = 0; i < m; i++){
        chave = sequencia[i];
        int li = 0, ls = n-1, meio;
        while(li <= ls){
            meio = (li + ls) / 2;
            if (chave < vetor[meio]) ls = meio-1;
            else if (chave > vetor[meio]) li = meio+1;
            else break;
        }
        if(chave==vetor[meio]){
            indexEncomenda = meio;
            dif = (indexAtual - indexEncomenda);
            if (dif <= 0) dif = (-1)*dif;
            tempo += dif;
        }
        indexAtual = indexEncomenda;
    }
    cout << tempo << endl;
    return 0;
}
