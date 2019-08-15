#include <iostream>
using namespace std;

int main () {
	char telefone[15];
	char telefonefinal[15] = {};

	cin >> telefone;

	for (int i = 0; i < 15; i++)
	{
		if (telefone[i] >= 65 && telefone[i] <= 67) telefonefinal[i] = '2';
		else if (telefone[i] >= 68 && telefone[i] <= 70) telefonefinal[i] = '3';
		else if (telefone[i] >= 71 && telefone[i] <= 73) telefonefinal[i] = '4';
		else if (telefone[i] >= 74 && telefone[i] <= 76) telefonefinal[i] = '5';
		else if (telefone[i] >= 77 && telefone[i] <= 79) telefonefinal[i] = '6';
		else if (telefone[i] >= 80 && telefone[i] <= 83) telefonefinal[i] = '7';
		else if (telefone[i] >= 84 && telefone[i] <= 86) telefonefinal[i] = '8';
		else if (telefone[i] >= 87 && telefone[i] <= 90) telefonefinal[i] = '9';

		else telefonefinal[i] = telefone[i];
	}
	cout << telefonefinal << endl;
	return 0;
}
