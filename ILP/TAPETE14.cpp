#include <iostream>
using namespace std;

int main (){
    long long int n, l, maior, lado;
    cin >> l >> n;

    lado = l - (n-1);
    maior = lado*lado;
    cout << maior+(n-1) << endl;


    return 0;
}
