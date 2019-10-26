#include <iostream>
using namespace std;

int main () {
  int c, soma = 0;
  char caracteres[c];
  cin >> c;

  for (int i = 0; i < c; i++){
    cin >> caracteres[i];
  }
  for (int i = 0; i < c; i++){
    if (caracteres[i] == 'P') soma += 2;
    else if (caracteres[i] == 'C') soma += 2;
    else if (caracteres[i] == 'A') soma += 1;
    else soma += 0;
  }
  cout << soma << endl;
  return 0;
}
