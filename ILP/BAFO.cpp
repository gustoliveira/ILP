#include <iostream>
using namespace std;

int main (){
    int r, teste = 1;
    while (true) {
        cin >> r;
        if (r == 0) break;
        int a, b, somaAldo = 0, somaBeto = 0;

        for (int i = 0; i < r; i++){
            cin >> a >> b;
            somaAldo += a;
            somaBeto += b;
        }
        cout << "Teste " << teste++ << endl;
        if (somaAldo > somaBeto) cout << "Aldo" << endl << endl;
        else if (somaBeto > somaAldo) cout << "Beto" << endl << endl;
    }


    return 0;
}
