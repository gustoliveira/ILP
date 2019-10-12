//Ainda errada
#include <iostream>
#include <map>
#include <cmath>
using namespace std;

int main(){
    int qntAlunos, qntAulas;
    cin >> qntAlunos >> qntAulas;

    map<int, float> alunos;
    map<int, float>::iterator it;

    for(int i = 0; i < qntAlunos; i++){
        int aux;
        cin >> aux;
        alunos[aux] = 0.0;
    }

    for(int i = 0; i < qntAulas; i++){
        int qntPresentes, aux;
        cin >> qntPresentes;
        for(int j = 0; j < qntPresentes; j++){
            cin >> aux;
            alunos[aux] += 1.0;
        }
    }

    float maxFaltas = ceil(qntAulas*0.25); //Quantidade maxima que se pode faltar
    cout << maxFaltas << endl;

    for(it = alunos.begin(); it != alunos.end(); it++){
        float aux = it->second; //Quantas aulas o aluno efetivamente foi

        if(aux > maxFaltas) {
            cout << it->first << ": " << qntAulas-aux << endl;
            continue;

        }
        cout << it->first << ": RF" << endl;
    }

    return 0;
}
