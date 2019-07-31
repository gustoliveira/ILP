#include <iostream>
using namespace std;

int main (){
    int n = 0, s = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x = 0;
        cin >> x;
        s += x;
    }
    cout << s << endl;
    return 0;
}
