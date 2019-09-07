#include <iostream>
#include <stack>
using namespace std;
bool inverso(char b1[], char b2[]);
int main(){
    int maxAlt, qntBlo, soma = 0;
    string bloco;
    bool flag = false;
    cin >> qntBlo >> maxAlt;

    stack <char> pilha[3];
    for(int i = 0; i < qntBlo; i++){
        cin >> bloco;

        for(int j = 0; j < 3; j++){
            char c = bloco[j];
            pilha[j].push(c);
        }

        if(i < 1) continue;

        char b1[3] = {}, b2[3] = {};
        for(int j = 0; j < 3; j++){
            b1[j] = pilha[j].top();
            pilha[j].pop();
        }
        for(int j = 0; j < 3; j++){
            b2[j] = pilha[j].top();
            pilha[j].pop();
        }

        if(inverso(b1, b2)){
            soma += 10;
            for(int j = 0; j < 3; j++){
                char c = b2[j];
                pilha[j].push(j);
            }
        }

        if(pilha[0].size() >= maxAlt) flag = true;
    }

    if(flag == true) cout << "game over" << endl;
    else cout << soma << endl;

    return 0;
}


bool inverso(char b1[], char b2[]){
    int soma = 0;
    for(int i = 0; i < 3; i++){
        if(b1[i] != b2[i]) soma++;
    }
    return(soma == 3);
}
