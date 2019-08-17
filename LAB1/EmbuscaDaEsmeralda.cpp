#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int x, n, m, resposta;
	cin >> n;
	vector<int> vetor;
	for(int i = 0; i < n; i++){
		cin >> m;
		vetor.push_back(m);
	}
	cin >> x;
	for(int i = 0; i < n; i++){
		if(vetor[i] == x) {
			resposta = x;
			break;
		}
		else{
			resposta = -1;
		}
	}

	cout << resposta << endl;


	return 0;
}