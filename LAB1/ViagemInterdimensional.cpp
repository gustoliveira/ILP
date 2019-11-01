#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m, index = 0;
    vector<int> rick, morty;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int aux;
        cin >> aux; 
        rick.push_back(aux);
    }
    for(int i = 0; i < m; i++){
        int aux;
        cin >> aux; 
        morty.push_back(aux);
    }

    sort(rick.begin(), rick.end());
    sort(morty.begin(), morty.end());

    for(int i = 0; i < m; i++){
        int aux = morty[i];
        
        bool r = binary_search(rick.begin(), rick.end(), aux);

        if(r) index++;
    }

    cout << index << endl;

    return 0;
}