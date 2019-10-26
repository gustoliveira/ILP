//Passou NO SPOJ
//Presentation Error no URI

#include <iostream>
using namespace std;

int main (){
    int n, m, x, inicio[50000] = {};
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> inicio[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> x;
        for (int j = 0; j < n; j++){
            if (inicio[j] == x) inicio[j] = 0;
        }
    }

    for (int i = 0; i < n; i++){
        if (inicio[i] != 0) cout << inicio[i] << ' ';
    }
    cout << endl;
    return 0;
}
