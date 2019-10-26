#include <iostream>
using namespace std;

int main (){
    int n, pontosC = 0, saldoC = 0, pontosF = 0, saldoF = 0;

    cin >> n; pontosC += n*3;
    cin >> n; pontosC += n;
    cin >> saldoC;

    cin >> n; pontosF += n*3;
    cin >> n; pontosF += n;
    cin >> saldoF;

    if(pontosC > pontosF) cout << 'C' << endl;
    else if(pontosC < pontosF) cout << 'F' << endl;
    else if(pontosC == pontosF){
        if(saldoF > saldoC) cout << 'F' << endl;
        else if(saldoF < saldoC) cout << 'C' << endl;
        else if(saldoF == saldoC) cout << '=' << endl;
    }

    return 0;
}
