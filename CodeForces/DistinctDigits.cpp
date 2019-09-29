#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
	int n, m;
	bool flag = true;
	set<char> palavra;

	cin >> n >> m;
	for(int i = n; i <= m; i++){	
		string aux = to_string(i);
		for(int j = 0; j < aux.size(); j++){
			char aux1 = aux[j];
			palavra.insert(aux1);
		}
		if(palavra.size() == aux.size()) {
			cout << aux << endl;
			flag = false;
			break;
		}
		palavra.clear();
	}

	if(flag) cout << -1 << endl;

	return 0;
}