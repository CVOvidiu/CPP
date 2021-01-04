/*
Pe planeta Marte banii sunt altfel decât la noi. Există 3 tipuri de monede: primul tip de monedă valorează a lei marțieni,
al doilea tip valorează b lei marțieni, iar al treilea tip de monedă valorează c lei marțieni.
Marțianul Iggle are n monede de primul tip, m monede de al doilea tip și p monede de al treilea tip.
Câți lei marțieni are Iggle?
*/

#include<iostream>
using namespace std;

int main() {
  int a, b, c, n, m, p;

  cin >> a >> b >> c;
  cin >> n >> m >> p;

  cout << (n * a) + (m * b) + (p * c);
}
