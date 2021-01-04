/*
Cunoscând laturile unui trapez isoscel, să se calculeze lungimea diagonalei.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double B, b, l, d, h, seg1, seg2; //seg1 si seg2 - despartite de h din B

  cin >> B >> b >> l;

  seg1 = (B - b) / 2;
  seg2 = b + seg1;
  h = sqrt(pow(l, 2) - pow(seg1, 2));
  d = sqrt(pow(seg2, 2) + pow(h, 2));

  cout << d;
}
