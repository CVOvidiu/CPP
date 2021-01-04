/*
Se dă un număr natural n cu exact trei cifre. Calculaţi
 produsul dintre cifra unităților și cifra sutelor.
*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int uc1 = n % 10;
  n = n / 100;
  int uc2 = n % 10;

  cout << uc1 * uc2;
}
