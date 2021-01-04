/*
Fie r un număr real citit de la tastatură, care reprezintă
lungimea razei unui cerc. Să se scrie un program care
să calculeze și să afișeze aria și perimetrul discului de rază r.
*/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
  double r, A, P;
  double pi = atan(1)*4;

  cin >> r;

  A = pi * r * r;
  P = 2 * pi * r;

  cout << setprecision(15) << A << " " << P;
}
