#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n, soma = 0, index = 0, aux;
    cin >> n;

    stack <int> pilha;
    for(int i = 0; i < n; i++){
        cin >> aux;
        pilha.push(aux);
    }

    for(int i = 0; i < n; i++){
        if(pilha.empty()) break;

        aux = pilha.top();
        if(aux == -1) {
            index++;
            pilha.pop();
        }
        else{
            if(index > 0) index--;
            else soma += aux;
            pilha.pop();
        }
    }

    cout << soma << endl;




    return 0;
}
