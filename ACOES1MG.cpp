#include <iostream>
using namespace std;

int conta(int n, int k);

int main (){
    int n, k;
    while (true){
        cin >> n >> k;
        if (n == 0 && k == 0) break;

        cout << conta(n, k) << endl;
    }
}

int conta(int n, int k){
    if(n <= k) return 1;
    else {
        if (n%2 == 0) return 2*conta(n/2, k);
        else return conta(n/2, k) + conta(n/2+1, k);
    }
}
