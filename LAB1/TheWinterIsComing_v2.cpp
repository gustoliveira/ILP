#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

struct tipo{
    int qnt, validade;
};

bool cmp(tipo a, tipo b){
    return (a.validade >= b.validade);
}

int main(){
    int n, m;
    stack<tipo> pilha;
    vector<tipo> vetor_aux;

//PILHA NO INICIO
    cin >> n;
    for(int i = 0; i < n; i++){
        tipo aux;
        cin >> aux.qnt >> aux.validade;
        vetor_aux.push_back(aux);
        sort(vetor_aux.begin(), vetor_aux.end(), cmp);
    }
    for(int i = 0; i < n; i++){
        tipo aux = vetor_aux[i];
        pilha.push(aux);
    }
    vetor_aux.clear();

//NEGOCIAÇÕES
    cin >> m;
    char neg;
    for(int i = 0; i < m; i++){
        cin >> neg;
//ALGUEM COMPRANDO ALGO DA LOJA
        if(neg == 'C'){
            int num, j = 0;
            cin >> num;
            for(int j = 0; j < num && !pilha.empty(); j++){
                tipo aux = pilha.top();
                pilha.pop();
                aux.qnt--;
                if(aux.qnt > 0) pilha.push(aux);
            }
        }
//ALGUEM VENDENDO ALGO PARA A LOJA
        else if(neg == 'V'){
            tipo aux;
            cin >> aux.qnt >> aux.validade;
            vetor_aux.push_back(aux);
            while(!pilha.empty()){
                aux = pilha.top();
                pilha.pop();
                vetor_aux.push_back(aux);
                sort(vetor_aux.begin(), vetor_aux.end(), cmp);
            }
            int tam2 = vetor_aux.size();
            for(int j = 0; j < tam2; j++){
                aux = vetor_aux[j];
                pilha.push(aux);
            }
            vetor_aux.clear();
        }
    }

//IMPRIMINDO RESULTADO
    if(pilha.empty()) cout << "Sem estoque" << endl;
    while(!pilha.empty()){
        tipo aux = pilha.top();
        pilha.pop();
        if(aux.qnt == 0) continue;
        cout << aux.qnt  << ' ' << aux.validade << endl;
    }

    return 0;
}