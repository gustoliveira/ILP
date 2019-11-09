//Ainda errada
#include <iostream>
#include <map>
#include <cmath>
using namespace std;

int main(){
    int qntAlunos, qntAulas;
    cin >> qntAlunos >> qntAulas;

    map<int, int> alunos;
    // map<int, float>::iterator it;

    for(int i = 0; i < qntAlunos; i++){
        int aux;
        cin >> aux;
        alunos[aux] = 0;
    }

    for(int i = 0; i < qntAulas; i++){
        int qntPresentes, aux;
        cin >> qntPresentes;
        for(int j = 0; j < qntPresentes; j++){
            cin >> aux;
            alunos[aux]++;
        }
    }

    for(pair<int, int> p:alunos){
        int matricula = p.first, presencas = p.second; //Quantas aulas o aluno efetivamente foi
        cout << matricula << ": ";
        if(presencas < 0.75*qntAulas)
            cout << "RF" << endl;
        else
            cout << qntAulas - presencas << endl;
    }

    return 0;
}
