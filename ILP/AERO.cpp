#include <iostream>
using namespace std;

int main (){
    int a, v, x, y, teste = 0;

    while(true){
        cin >> a >> v;
        if(a == 0 && v == 0) break;

        int vetor[a] = {}, maior = 0;

        for(int i = 0; i < v; i++){
            cin >> x >> y;
            vetor[x-1]++;
            vetor[y-1]++;
        }

        for(int i = 0; i < a; i++){
            if(vetor[i] >= maior) maior = vetor[i];
        }
        cout << "Teste " << ++teste << endl;
        for(int i = 0; i < a; i++){
            if(vetor[i] == maior){
                cout << i+1 << ' ';
            }
        }
        cout << endl;
    }



    return 0;
}
