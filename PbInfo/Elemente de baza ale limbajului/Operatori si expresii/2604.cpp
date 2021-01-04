/*
Scrieți un program care citește de
la tastatură un număr natural de două cifre și
care afișează pe ecran pătratul valorii
obținute prin schimbarea între ele a celor două cifre.
*/

#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n;

  m = n % 10;
  n = n / 10;
  m = m * 10 + n % 10;

  cout << m*m;
}
