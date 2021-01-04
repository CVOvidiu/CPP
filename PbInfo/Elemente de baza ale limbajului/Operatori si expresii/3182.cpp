/*
Pe planeta Marte anul marțian durează z zile marțiene. Marțianul Iggle își serbează ziua de naștere și constată că a trăit n zile.
Câte lumânări va avea tortul lui Iggle?
*/

#include<iostream>
using namespace std;

int main() {
  int z, n, c = 0;

  cin >> z >> n;

  while(n >= z) {
    n -= z;
    c++;
  }

  cout << c;
}
