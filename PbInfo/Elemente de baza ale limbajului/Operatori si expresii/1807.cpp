/*
Dându-se numărul de laturi ale unui poligon convex, calculați:

Numărul de diagonale
Suma măsurilor unghiurilor poligonului convex
*/

#include <iostream>
using namespace std;

int main() {
  long long int n;
  cin >> n;

  cout << n * (n - 3) / 2;
  cout << endl;
  cout << (n - 2) * 180;
}
