#include <iostream>
using namespace std;

int main () {
    int n, p;

    while (true) {
        int quantidade = 0;
        cin >> n >> p;
        if (n == 0 && p == 0) break;

        if (n%p == 0) quantidade = (n/p);
        else quantidade = (n/p) + 1;

        if (quantidade <= 6) quantidade = 6;
        else if (quantidade >= 20) quantidade = 20;

        cout << 'P';
        for (int i = 0; i < quantidade-4; i++){
            cout << 'o';
        }
        cout << "dle" << endl;

    }
    return 0;
}
