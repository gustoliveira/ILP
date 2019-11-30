#include <iostream>
#include <stack>
using namespace std;

string inverter (string normal){
    string inver = "000";
    for (int i = 0; i < normal.length(); i++) {
        if (normal[i] == '1') inver[i] = '0';
        else inver[i] = '1';
    }
    return inver;
}

int main () {
    int n, a;
    int cont = 0, go = 0;
    string x;
    stack<string> pilha;

    cin >> n >> a;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (pilha.empty()) {
            pilha.push(x);
            if (pilha.size() == a) {
                go = 1;
                break;
            }
        }
        else {
            if (pilha.top() == inverter(x)) {
                if (pilha.size() == a) {
                    go = 1;
                    break;
                }
                pilha.pop();
                cont += 10;
            }
            else {
                pilha.push(x);
                if (pilha.size() == a) {
                    go = 1;
                    break;
                }
            }
        }
    }

    if (go == 1) cout << "game over" << endl;
    else cout << cont << endl;

    return 0;
}