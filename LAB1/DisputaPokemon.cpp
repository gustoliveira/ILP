#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n, aux, soma = 0;
    cin >> n;

    stack <int> ash, gary;
    for(int i = 0; i < n; i++){
        cin >> aux;
        ash.push(aux);
        cin >> aux;
        gary.push(aux);
    }

    int pAsh, pGary;
    while (!ash.empty() && !gary.empty()) {
        pAsh = ash.top();
        ash.pop();
        pGary = gary.top();
        gary.pop();

        if(pAsh > pGary){
            pAsh -= pGary;
            ash.push(pAsh);
        }
        else if(pGary > pAsh){
            pGary -= pAsh;
            gary.push(pGary);
            soma++;
        }
        else if(pAsh == pGary){
            soma++;
            continue;
        }
    }
    cout << soma << endl;



    return 0;
}
