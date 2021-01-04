/*
Se dau trei numere naturale a b x. Să se verifice dacă numărul x aparține intervalului [a,b].
*/

#include <iostream>
using namespace std;

int main() {
  int a, b, x;
  cin >> a >> b >> x;

  if(x >= a && x <= b)
    cout << "DA";
  else
    cout << "NU";
}
