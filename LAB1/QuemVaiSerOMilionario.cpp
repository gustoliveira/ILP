#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, m;
	vector<int> lista;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> m;
		lista.push_back(m);
	}

	sort(lista.begin(), lista.end());

	cout << lista[n/2] << endl;

	return 0;
}