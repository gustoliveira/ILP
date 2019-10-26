#include <iostream>
using namespace std;

int main () {
    string n;
    while (true){
        int numero[1000] = {};
        int somaPar = 0, somaImpar = 0;
        cin >> n;
        if (n == "0") break;
        for (int i = 0; i < 1000; i++){
            if (n[i] == 48) numero[i] = 0;
            else if (n[i] == 49) numero[i] = 1;
            else if (n[i] == 50) numero[i] = 2;
            else if (n[i] == 51) numero[i] = 3;
            else if (n[i] == 52) numero[i] = 4;
            else if (n[i] == 53) numero[i] = 5;
            else if (n[i] == 54) numero[i] = 6;
            else if (n[i] == 55) numero[i] = 7;
            else if (n[i] == 56) numero[i] = 8;
            else if (n[i] == 57) numero[i] = 9;

            if (i%2 == 0) somaImpar += numero[i];
            else somaPar += numero[i];
        }
        if ((somaPar - somaImpar) % 11 == 0) {
            cout << n <<" is a multiple of 11." << endl;}
        else {
            cout << n <<" is not a multiple of 11." << endl;}
    }
    return 0;
}
