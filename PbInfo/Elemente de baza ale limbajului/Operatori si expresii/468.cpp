/*
Se dă un număr natural n cu exact trei cifre. Calculaţi pătratul
 numărului format cu cifra sutelor și cifra unităților.
*/

#include <iostream>
using namespace std;

int main() {
  int n, m, ns;
  cin >> n;
  ns = n;

  n = n / 100;
  m = n % 10;
  m = m * 10 + ns % 10;

  cout << m * m;
}
