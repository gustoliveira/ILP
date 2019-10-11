#include <iostream>
#include <map>
using namespace std;

int main(){
    int qnt;
    map<string, int> gemas;

    cin >> qnt;
    for(int i = 0; i < qnt; i++){
        int aux;
        string nomes;
        cin >> nomes >> aux;
        gemas[nomes] += aux;
    }

    for(map<string, int>::iterator it = gemas.begin(); it != gemas.end(); it++){
        cout << (*it).first << ' ' << (*it).second << endl;
    }

    return 0;
}
