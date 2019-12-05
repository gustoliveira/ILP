#include <iostream>
#include <queue>
#include <algorithm>
#include <map>
using namespace std;

int main(){
	int n, j;
	map<string, int> nomes;

	cin >> n;
	for(int i = 0; i < n; i++){
		pair<string, int> aux;
		cin >> aux.first >> aux.second;
		nomes[aux.first] = aux.second;
	}

	cin >> j;
	for(int i = 0; i < j; i++){
		pair<string, int> aux;
		cin >> aux.first;
		int aux1 = nomes[aux.first];
		cin >> aux.second;
		nomes[aux.first] = aux1-aux.second;
	}

	map<string, int>::iterator it;
	for(it = nomes.begin(); it != nomes.end(); it++){
		cout << (*it).first << ' ' << (*it).second << endl;
	}

	return 0;
}
