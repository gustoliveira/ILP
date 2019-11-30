#include <iostream>
#include <queue>
using namespace std;

int main(){
    int d, g, s, m, alunos;
    priority_queue<int, vector<int>, less<int>> grif;
    priority_queue<int, vector<int>, greater<int>> sons;


    cin >> d;
    for(int i = 0; i < d; i++){
        cin >> g >> s;
        for(int j = 0; j < g; j++){
            cin >> alunos;
            grif.push(alunos);
        }
        for(int j = 0; j < s; j++){
            cin >> alunos;
            sons.push(alunos);
        }
        cin >> m;
        for(int j = 0; j < m && !(sons.empty() || grif.empty()); j++){
            cout << grif.top() << ' ' << sons.top() << endl;
            grif.pop();
            sons.pop();
        }
    }


    return 0;
}