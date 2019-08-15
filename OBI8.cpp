#include <iostream>
using namespace std;

int main (){
    int n, p, soma = 0, x, y;
    cin >> n >> p;

    for (int i = 0; i < n; i++){
        cin >> x >> y;
        if (x+y >= p) soma++;
        else continue;
    }
    cout << soma << endl;

    return 0;
}
