/*
Într-o curte sunt G găini și O oi. Să se determine numărul de capete și numărul de picioare din curte.
*/

#include<iostream>
using namespace std;

int main() {
  int G, O, C, P;

  cin >> G >> O;

  C = G + O;

  P = (G * 2) + (O * 4);

  cout << C << " " << P;
}
