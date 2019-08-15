#include <iostream>
using namespace std;

int main () {
  int n, a, b, teste = 0;
  string jogadorPAR, jogadorIMPAR;

  while (true)
  {
    cin >> n;
    if (n == 0) break;
    cin >> jogadorPAR >> jogadorIMPAR;

    cout << "Teste " << ++teste << endl;
    for (int i = 0; i < n; i++){
      cin >> a >> b;
      if ((a+b)%2 == 0) cout << jogadorPAR << endl;
      else if ((a+b)%2 != 0) cout << jogadorIMPAR << endl;
    }

  }
  return 0;
}
