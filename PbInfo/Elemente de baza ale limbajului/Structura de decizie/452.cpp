/*
Se citește de la tastatură un număr natural de 3 cifre. Să se determine câte cifre impare conține.
*/

#include <iostream>
using namespace std;

int nr, ci;

int main() {
  cin >> nr;

  while(nr != 0) {
    if((nr % 10) % 2 != 0)
      ci++;
    nr = nr / 10;
  }

  cout << ci;
}
