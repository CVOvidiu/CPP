/*
Scrieți un program care cere de la tastatură un număr real (într-o variabilă de tip double)
și care afișează prima cifră care se află după virgulă în valoarea citită.
*/

#include<iostream>
using namespace std;

int main() {
  double a;

  cin >> a;

  int b;

  a = a * 10;

  b = int(a);

  cout << b % 10;
}
