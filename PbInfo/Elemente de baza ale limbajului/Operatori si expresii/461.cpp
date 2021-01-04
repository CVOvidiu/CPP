/*
Se dau numerele naturale h m, reprezentând un ora curentă exprimată în ore şi minute.
Să se determine care va fi ora peste x ore şi y minute.
*/

#include <iostream>
using namespace std;

int h, m, x, y;

int main() {
  cin >> h >> m >> x >> y;

  m += y;
  h += x;

  while(h >= 24) {
    h -= 24;
  }

  while(m >= 60) {
    h++;
    m -= 60;

    if(h >= 24)
      h = 0;
  }

  cout << h << " " << m;
}
