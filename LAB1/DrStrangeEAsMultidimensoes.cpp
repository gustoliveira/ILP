#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, x, index = 0;
	cin >> n;
	vector <int> linha1, linha2, linha3;

	for(int i = 0; i < n; i++){
		cin >> x;
		linha1.push_back(x);
	}
	for(int i = 0; i < n; i++){
		cin >> x;
		linha2.push_back(x);
	}
	for(int i = 0; i < n; i++){
		cin >> x;
		linha3.push_back(x);
	}

	for(int i = 0; i < n; i++){
		if(linha3[i] == linha1[i]+linha2[i]) index++;
	}

	if(index == n) cout << "OK" << endl;
	else cout << "NOPE :(" << endl;



	return 0;
}