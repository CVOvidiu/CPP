/*
Scrieți un program care cere de la tastatură un număr a (de o cifră)
și care afișează valoarea expresiei a^16. Aplicați de cât mai puține ori operatorul de înmulțire.
*/

#include<iostream>
#include<math.h>
using namespace std;

int main() {
  int a;

  long long int p;

  cin >> a;

  p = pow(a, 16);

  cout << p;
}
