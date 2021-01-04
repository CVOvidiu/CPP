/*
Se dau 5 numere distincte. Să se determine suma celor mai mari 3 dintre ele.
*/

#include <iostream>
using namespace std;

int a, b, c, d, e, s, smax;

int main() {
  cin >> a >> b >> c >> d >> e;

  s = a + b + c;
  if(smax < s)
    smax = s;

  s = a + b + d;
  if(smax < s)
    smax = s;

  s = a + b + e;
  if(smax < s)
    smax = s;

  s = a + c + d;
  if(smax < s)
    smax = s;

  s = a + c + e;
  if(smax < s)
    smax = s;

  s = a + d + e;
  if(smax < s)
    smax = s;

  s = b + c + d;
  if(smax < s)
    smax = s;

  s = b + c + e;
  if(smax < s)
    smax = s;

  s = b + d + e;
  if(smax < s)
    smax = s;

  s = c + d + e;
  if(smax < s)
    smax = s;

  cout << smax;
}
