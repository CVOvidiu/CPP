/*
O firmă are două tipuri de camioane: camioane de tipul 1, care pot transporta câte t1 tone de marfă pe zi, și camioane de tipul 2,
care pot transporta câte t2 tone de marfă pe zi.

Știind că firma are n camioane de tipul 1 și m camioane de tipul 2,
câte tone de marfă pot transporta camioanele firmei în z zile.
*/

#include<iostream>
using namespace std;

int main() {
  int t1, t2, n, m, z;

  cin >> t1 >> t2 >> n >> m >> z;

  cout << ((n * t1) + (m * t2)) * z;
}
