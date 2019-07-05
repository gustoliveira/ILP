#include <iostream>
using namespace std;

int main (){
    int n, soma = 0;
    cin >> n;
    int tam[n];
    char lad[n];

    for(int i = 0; i < n; i++){
        cin >> tam[i] >> lad[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(tam[i] != 1 && tam[j] != 1 && lad[i] != 'N' && lad[j] != 'N'){
                if(tam[i] == tam[j] && lad[i] != lad[j]){
                    soma++;
                    tam[i] = 1;
                    tam[j] = 1;
                    lad[i] = 'N';
                    lad[j] = 'N';

                }
            }
        }
    }
    cout << soma << endl;

    return 0;
}
