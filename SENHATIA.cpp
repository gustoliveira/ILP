/*
SPOJ
Lista 4 - Introdução Lógica de Programação (MATA37)
*/
#include <iostream>
#include <string.h>
using namespace std;

int main () {
  int n, m, a, k;
  int somaN = 0, somaM = 0, somaA = 0, somaK = 0;
  string entrada;
  int saida[15] = {};

  cin >> n >> m >> a >> k;
  cin >> entrada;

  for (int i = 0; i < 1002; i++){
    if (entrada[i] >= 97 && entrada[i] <= 122) {somaM++; somaN++;}
    else if (entrada[i] >= 65 && entrada[i] <= 90) {somaA++; somaN++;}
    else if (entrada[i] >= 48 && entrada[i] <= 57) {somaK++; somaN++;}
  }

  if (somaN >= n && somaM >= m && somaA >= a && somaK >= k){
    cout << "Ok =/" << endl;
  }
  else cout << "Ufa :)" << endl;
  return 0;
}
