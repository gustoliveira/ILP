#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

double porcentagem(double qnt, double num){
    return ((num*100)/qnt);
}

int main(){
    string nome;
    double index;
    map<string, double> pokedex;
    map<string, double>::iterator it;
    cout<<fixed<<setprecision(2);

    while(true){
        cin >> nome;
        if(nome == "FIM") break;
        pokedex[nome] += 1.0;
        index += 1.0;
    }

    for(it = pokedex.begin(); it != pokedex.end(); it++){
        double num = it->second, qnt = index;
        pokedex[it->first] = porcentagem(qnt, num);
    }

    for(it = pokedex.begin(); it != pokedex.end(); it++){
        cout << it->first << ' ';
        cout << it->second << endl;
    }

    return 0;
}
