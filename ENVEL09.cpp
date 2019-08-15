#include <iostream>
using namespace std;

int main (){
    int n, k, x;
    cin >> n >> k;
    int rotulos[k] = {};

    for(int i = 0; i < n; i++){
        cin >> x;
        rotulos[x-1]++;
    }
    int menor;
    for(int i = 0; i < k; i++){
        if(i == 0) menor = rotulos[i];
        if(rotulos[i] <= menor) menor = rotulos[i];
    }
    cout << menor << endl;
    return 0;
}
