#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n, k = 0, ini, fim, x, ate;
    bool ver;
    cin >> n;

    for (int q = 0; q < n; q++){
        cin >> ini >> fim;
        for (int x = ini; x <= fim; x++){
            ver = false;

            int t = 2;
            ate = sqrt(x);
            while(ver == false && t <= ate){
        		if(x % t == 0){
        			ver = true;
        		}
        		t++;
        	}

        	if(ver == false && x != 1 && x != 0) cout << x << endl;
        }
        cout << endl;
    }

    return 0;
}
