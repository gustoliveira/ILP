#include <iostream>
#include <queue>
#include <algorithm>
#include <map>
#include <cmath>
#include <iomanip>
using namespace std;

bool cmp(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b){
	return(a.first > b.first);
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cout << fixed << setprecision(1);

	int n, m, x1, x2, y1, y2;
	string nome, nomeAnt = "CAPITAL";
	double dist = 0;
	pair<int, int>  aux, aux1, aux2;
	pair<string, pair<int, int>> m1, m2;
	vector<pair<string, pair<int, int>> > mundos;
	vector<pair<string, pair<int, int>> >::iterator itAnt, it;

	aux.first = 0;
	aux.second = 0;
	m1.first = "CAPITAL";
	m1.second = aux;
	mundos.push_back(m1);

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> nome >> aux.first >> aux.second;
		m1.first = nome;
		m1.second = aux;
		mundos.push_back(m1);
	}
	stable_sort(mundos.begin(), mundos.end(), cmp);

	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> nome;

		m1.first = nomeAnt;
		itAnt = lower_bound(mundos.begin(), mundos.end(), m1, cmp);
		m2.first = nome;
		it = lower_bound(mundos.begin(), mundos.end(), m2, cmp);

		nomeAnt = nome;

		x1 = (*itAnt).second.first;
		y1 = (*itAnt).second.second;
		x2 = (*it).second.first;
		y2 = (*it).second.second;

		dist += sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
	}
	cout << dist << endl;

	return 0;
}
