#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int tam = 100000;
    int c, t;
    long long int x, y, r2, cnt = 0, raios[tam] = {};

    cin >> c >> t;
    for (int i = 0; i < c; i++){
        cin >> raios[i];
        raios[i] *= raios[i];
    }

    for (int i = 0; i < t; i++){
        cin >> x >> y;
        r2 = x*x + y*y;
        long long int* pos = lower_bound(raios, raios + c, r2);
        int points = c - (pos - raios);
        cnt += points;
    }
    cout << cnt << endl;
}
