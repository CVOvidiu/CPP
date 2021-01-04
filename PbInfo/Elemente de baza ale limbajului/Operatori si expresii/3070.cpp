/*
Se citesc două numere a și b reprezentând lungimile laturilor unui dreptunghi. Pentru dreptunghiul dat, să se calculeze:
perimetrul P, aria A și pătratul lungimii diagonalei D.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int a, b;

  cin >> a >> b;

  int P = 2*a+2*b;
  int A = a*b;
  int D = pow(a, 2) + pow(b, 2);

  cout << P << " " << A << " " << D;
}
