#include <iostream>
using namespace std;

int hanoi (int n);

int main (){
    int n, teste = 0;

    while (true){
        cin >> n;
        if (n == 0) break;
        cout << "Teste " << ++teste << endl;
        cout << hanoi(n) << endl << endl;
    }
    return 0;
}

int hanoi (int n){
    int final = 2;
    for (int i = 1; i < n; i++){
        final = final*2;
    }
    return final-1;
}
