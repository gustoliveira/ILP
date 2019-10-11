#include <iostream>
#include <map>
using namespace std;

int main(){
    int n, aux;
    string nome;

    map<string, int> itens;
    map<string, int>::iterator it;

    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        cin >> aux;
        cin.ignore();
        getline(cin, nome);

        it = itens.find(nome);
        if(it == itens.end()) {
            itens[nome] = aux;
            continue;
        }
        if(it->second < aux) itens[nome] = aux;
    }

    for(it = itens.begin(); it != itens.end(); it++){
        cout << it->first << ' ' << it->second << endl;
    }


    return 0;
}
