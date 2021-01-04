/*
Se dau 2 numere naturale h m, reprezentând un ora curentă exprimată în ore şi minute.
Să se determine care va fi ora peste x minute.
*/

#include <iostream>
using namespace std;

int h1, h2, m1, m2;
long long int x;

int main() {
  cin >> h1 >> m1 >> x;

  m1 = x + m1;
  while(m1 >= 60) {
    h1++;
    m1 -= 60;

    if(h1 == 24)
      h1 = 0;

  }

  cout << h1 << " " << m1;
}
