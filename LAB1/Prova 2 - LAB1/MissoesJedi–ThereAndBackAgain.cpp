#include <iostream>
#include <queue>
#include <algorithm>
#include <map>
#include <cmath>
#include <iomanip>
using namespace std;

typedef pair<string, int> tipo;

bool cmp(pair<string, int> a, pair<string, int> b){
  	return(a.second > b.second || (a.second == b.second && a.first > b.first));
}

bool cmp1(tipo a, tipo b){
  	return(a.second > b.second || (a.second == b.second && a.first > b.first));
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	priority_queue<tipo, vector<tipo>, bool(*)(tipo, tipo)> fp(cmp);
	priority_queue<tipo, vector<tipo>, bool(*)(tipo, tipo)> fp1(cmp1);
	priority_queue<tipo, vector<tipo>, bool(*)(tipo, tipo)> fp2(cmp1);

	int n, m;
	cin >> n;
	for(int i = 0; i < n; i++){
		tipo aux;
		cin >> aux.first >> aux.second;
		fp.push(aux);
	}

	for(int i = 0; i < n/2; i++){
		tipo aux = fp.top();
		fp.pop();
		fp1.push(aux);
	}
	for(int i = 0; i < n/2; i++){
		tipo aux = fp.top();
		fp.pop();
		fp2.push(aux);
	}

	cin >> m;
	for(int i = 0; i < m; i++){
	int poder;
	tipo aux;
	cin >> poder;

	aux = fp1.top();
	fp1.pop();
	aux.second += poder;
	fp1.push(aux);

	aux = fp2.top();
	fp2.pop();
	aux.second += poder;
	fp2.push(aux);
	}

	for(int i = 0; i < n/2; i++){
		tipo aux = fp1.top();
		fp1.pop();
		cout << aux.first << ' ' << aux.second << endl;
	}
	for(int i = 0; i < n/2; i++){
		tipo aux = fp2.top();
		fp2.pop();
		cout << aux.first << ' ' << aux.second << endl;
	}

	return 0;
}
