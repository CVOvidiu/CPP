/*
Se dau două numere naturale x și y. Calculați ultima cifră a sumei lor.
*/

#include<iostream>
using namespace std;

int main() {
  int x, y;

  cin >> x >> y;

  int s = x + y;

  cout << s % 10;
}
