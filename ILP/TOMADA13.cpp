// Jeito avançado cheio de firula

#include <iostream>
using namespace std;

int main () {
    int vetor[4] = {}, soma = 0;
    for (int i = 0; i < 4; i++){
        cin >> vetor[i];
    }

    for (int i = 0; i < 4; i++){
        if (i < 3) soma += vetor[i]-1;
        else soma += vetor[i];
    }
    cout << soma << endl;
    return 0;
}


// Jeito mais adequado ao problema

/*
#include <iostream>
using namespace std;

int main () {
    int t1, t2, t3, t4;
    cin >> t1 >> t2 >> t3 >> t4;
    cout << t1-1+t2-1+t3-1+t4 << endl;
    return 0;
}
*/
