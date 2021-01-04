/*
Fiind date două numere naturale x și y determinați valoarea care trebuie adunată la x pentru a obține triplul lui y.
*/

#include<iostream>
using namespace std;

int main() {
  int c, x, y;

  cin >> x >> y;

  c = (3 * y) - x;

  cout << c;
}
