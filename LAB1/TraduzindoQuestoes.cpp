#include <iostream>
#include <map>
using namespace std;

int main(){
    int n, m, aux;
    char fonte, dest;
    string port, ing;

    map<string, string> dictAA, dictBB, dictAB, dictBA;
    map<string, string>::iterator it;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> port >> ing;
        dictAB[port] = ing;
        dictBA[ing] = port;
    }

    for(int i = 0; i < m; i++){
        cin >> fonte >> dest >> aux;
        string frase[aux] = {}, aux1;

        for(int j = 0; j < aux; j++){
            cin >> aux1;
            if(fonte == 'A' && dest == 'B'){
                it = dictAB.find(aux1);
                if(it != dictAB.end()) frase[j] = it->second;
                else frase[j] = aux1;
            }
            else if(fonte == 'B' && dest == 'A'){
                it = dictBA.find(aux1);
                if(it != dictBA.end()) frase[j] = it->second;
                else frase[j] = aux1;
            }
            else if((fonte == 'B' && dest == 'B') || (fonte == 'A' && dest == 'A')){
                frase[j] = aux1;
            }
        }

        for(int j = 0; j < aux; j++){
            cout << frase[j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
