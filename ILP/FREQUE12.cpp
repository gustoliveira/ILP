#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n, x;
    vector<int> chamada;
    cin >> n;

    for(int i = 0; i < n; i++){
        int soma = 0;
        cin >> x;

        if(PesquisaBinaria(chamada, 0, chamada.size()-1, x) != -1){
            chamada.push_back(x);
        }
    }

    cout << chamada.size() << endl;
    return 0;
}
