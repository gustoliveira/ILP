#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, y;
	string x;
	cin >> n;
	cin.ignore();
	vector <string> times1(n), times2(n);

	for(int i = 0; i < n; i++){
		getline(cin,x);
		times1[i] = x;
		times2[i] = x;
	}
	reverse(times2.begin(), times2.end());
	for(int i = 0; i < (n/2); i++){
		cout << times1[i] << " X " << times2[i] << endl;
	}

	return 0;
}