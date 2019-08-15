#include <iostream>
using namespace std;

int main (){
    int n, a, soma = 0, dia = 0;
    bool index = false;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        soma += a;

        if(index == false){
            if(soma >= 1000000 && i == 0){
                dia = i+1;
                index = true;
            }
            else if(soma >= 1000000 && i != 0){
                dia = i+1;
                index = true;
            }
        }
    }
    cout << dia << endl;
    return 0;
}
