#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int qntCandidatos, qntAprovados, qntConsultas, aux;
    vector<int> candidatos;
    cin >> qntCandidatos >> qntAprovados;

    for(int i = 0; i < qntCandidatos; i++){
        cin >> aux;
        candidatos.push_back(aux);
    }

    cin >> qntConsultas;
    for(int i = 0; i < qntConsultas; i++){
        cin >> aux;
        bool r = binary_search(candidatos.begin()+(qntCandidatos-qntAprovados), candidatos.end(), aux);

        if(r) cout << "Sim" << endl;
        else cout << "Nao" << endl;
    }

    return 0;
}