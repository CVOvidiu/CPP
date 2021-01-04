/*
Calculaţi minimul celor 3 numere date.
*/

#include <iostream>
using namespace std;

int main() {
  int a, b , c, min;
  cin >> a >> b >> c;

  if(a < b)
    min = a;
  else
    min = b;

  if(min > c)
    min = c;

  cout << min;
}
