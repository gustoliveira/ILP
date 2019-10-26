#include <iostream>
using namespace std;

int main (){
    int inicio, n, x, volume;
    cin >> inicio >> n;
    volume = inicio;
    for(int i = 0; i < n; i++){
        cin >> x;
        volume += x;
        if(volume > 100) volume = 100;
        else if (volume < 0) volume = 0;
    }
    cout << volume << endl;


    return 0;
}
