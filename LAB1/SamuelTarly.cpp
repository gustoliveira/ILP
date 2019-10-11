#include <iostream>
#include <map>
using namespace std;

int main(){
    int n1, n2;
    map<string, string> dict;
    map<string, string>::iterator it;

    cin >> n1;
    for(int i = 0; i < n1; i++){
        string pala, trad;
        cin >> pala >> trad;
        dict[pala] = trad;
    }

    cin >> n2;
    string frase[n2] = {}, pala;
    for(int i = 0; i < n2; i++){
        cin >> pala;

        it = dict.find(pala);
        if(it == dict.end()){
            frase[i] = pala;
            continue;
        }
        frase[i] = it->second;
    }

    for(int i = 0; i < n2; i++){
        cout << frase[i] << ' ';
    }
    cout << endl;

    return 0;
}
