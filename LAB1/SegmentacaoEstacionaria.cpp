////////time limit exceeded/////////

#include <iostream>
#include <set>
using namespace std;

int main(){
	int n, ini, ter;
	char evento;
 	set<int> segmentos;

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> evento >> ini >> ter;
		if(evento == 'E'){
			for(int j = ini; j <= ter; j++) segmentos.insert(j);
		}
		else{
			for(int j = ter; j >= ini; j--) segmentos.erase(j);
		}

		int soma = 1;
		for(set<int>::iterator it = segmentos.begin(); it != segmentos.end(); it++){
			set<int>::iterator it1 = it;
			it1++;
			if(*it1-*it != 1) soma++;
			it1++;
			if(it1 == segmentos.end()) break;
		}

		cout << soma << endl;
	}

	return 0;
}