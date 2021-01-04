/*
Cunoscând diagonalele unui romb,
să se calculeze perimetrul și aria acestuia.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double d1, d2, l;
  cin >> d1 >> d2;

  double A, P;

  A = (d1 * d2) / 2;
  l = sqrt(pow(d1/2, 2) + pow(d2/2, 2));
  P =  4 * l;

  cout << P << " " << A;
}
