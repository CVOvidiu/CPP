/*
Într-o curte sunt găini și oi.
 Se cunoaște numărul de capete și numărul
 de picioare din curte.
 Să se determine numărul de găini și numărul de oi.
*/

#include <iostream>
using namespace std;

int main() {
  int C, i, P, G, O;
  cin >> C >> P;

  for(i = P / 4; i >= 1; i--) {
    int g = C - i;
    if(i * 4 + g * 2 == P) {
      G = g;
      O = i;
    }
  }

  cout << G << " " << O;

}
