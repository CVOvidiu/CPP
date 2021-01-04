/*
Se dă un număr real n. Să se afișeze rădăcina sa pătrată.

Restricții și precizări:
1 ≤ n ≤ 1000
Numărul afișat va conține zecimale.
Se recomandă folosirea tipului double.
*/

#include<iostream>
#include<math.h>
using namespace std;

int main() {
  float n, R;

  cin >> n;

  R  = sqrt(n);

  cout << R;
}
