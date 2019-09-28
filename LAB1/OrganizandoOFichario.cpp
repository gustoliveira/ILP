#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

struct tipo{
	string id;
	int hp;

};

inline bool operator<(const tipo &a, const tipo &b){
	return (a.id < b.id || (a.id == b.id && a.hp < b.hp));
}

int main(){
	int n;
	set<tipo> baralho;
	vector<tipo> mostrar;

	cin >> n;
	for(int i = 0; i < n; i++){
		tipo aux;
		cin >> aux.id >> aux.hp;
		baralho.insert(aux);
	}

	while(!baralho.empty()){
		tipo aux = *baralho.begin();
		cout << aux.id << ' ' << aux.hp << endl;
		baralho.erase(aux);
	}

	return 0;
}