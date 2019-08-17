#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, index = 0, aux, x;
	cin >> n;
	vector<int> vetor;

	for(int i = 0; i < n; i++){
		cin >> x;
		vetor.push_back(x);
		if(i == n-1){
			vetor.push_back(x);
			break;
		}

	}

	sort(vetor.begin(), vetor.end());

	for(int i = 0; i < n; i++){
		if(vetor[i] == vetor[i+1]+1) continue;
		else{
			index += vetor[i+1] - vetor[i] - 1;
		}
	}
	cout << index + 1 << endl;

	return 0;
}