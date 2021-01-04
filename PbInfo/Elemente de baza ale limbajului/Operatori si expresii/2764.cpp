/*
Orice culoare poate fi reprezentată drept o combinație de intensități de roșu (RED),
verde (GREEN) și albastru (BLUE). Calculatorul tău folosește, cel mai probabil,
culori reprezentate pe 24 de biți, câte 8 rezervați fiecăreia dintre cele trei culori anterior menționate.

Definim opusul unei culori (r, g, b) ca fiind (255 – r, 255 – g, 255 – b).

Dându-se o culoare, scrieți opusul acesteia.
*/

#include<iostream>
using namespace std;

int main() {
  int r, g, b, R, G, B;

  cin >> r >> g >> b;

  R = 255 - r;
  G = 255 - g;
  B = 255 - b;

  cout << R << " " << G << " " << B;
}
