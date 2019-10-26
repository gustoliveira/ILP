#include <iostream>
using namespace std;

int fatorial (int final, int num = 1, int mult = 1);
int fibonacci (int final, int a = 0, int b = 0, int c = 0, int stop = 0);

int main () {
    int final;
    cin >> final;
    cout << "Valor de fatorial de " << final << " é ";
    fatorial(final);
    cout << endl;
    cout << "Sequencia de fibonacci até o número " << final << " é ";
    fibonacci(final);
    cout << endl;
    return 0;
}


int fatorial (int final, int num, int mult){
    mult = mult*num;
    if(num < final){
        fatorial(final, ++num, mult);
    }
    else cout << mult << endl;
}

int fibonacci (int final, int a, int b, int c, int stop){
    if (stop == 0 || stop == 1) {a = 1; b = 0;}
    c = a + b;
    b = a;
    a = c;
    cout << c << ' ';
    if (stop < final){
        fibonacci(final, a, b, c, ++stop);
    }
}
