#include <iostream>
using namespace std;

int main()
{
	int x, t = 2;
	bool ver = false;

	cin >> x;
	while(ver == false && t < x)
	{
		if(x % t == 0){
			ver = true;
		}
		t++;
	}

	if(ver == false || x == 1) cout << "sim" << endl;
	else cout << "nao" << endl;

	return 0;
}
