#include <iostream>
using namespace std;

int main (){
    int larg, comp, alt, largN, compN, altN;
    cin >> larg >> comp >> alt;
    cin >> largN >> compN >> altN;

    cout << (largN/larg)*(compN/comp)*(altN/alt) << endl;
    return 0;
}
