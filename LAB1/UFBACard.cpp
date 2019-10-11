//ERRADA

#include <iostream>
#include <map>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    map<int, float> aluno;
    map<int, float>:: iterator it;

    for(int i = 0; i < n; i++){
        int aux1;
        cin >> aux1;
        aluno[aux1] = 0;
    }

    for(int i = 0; i < m; i++){
        int aux1;
        float aux2;
        cin >> aux1;
        for(int j = 0; j < aux1; j++){
            cin >> aux2;
            aluno[aux1]++;
        }
    }

    float faltas = m*(0,25);

    for(it = aluno.begin(); it != aluno.end(); it++){
        if(it->second <= faltas) {
            cout << it->first << ": " << "RF" << endl;
        }
        else {
            cout << it->first << ": " << (it->second)-m << endl;
        }
    }

    return 0;
}
