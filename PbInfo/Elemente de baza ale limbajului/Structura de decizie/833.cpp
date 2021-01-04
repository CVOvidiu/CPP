/*
Fiind date vârstele a doi copii (a și b) afișați care dintre ei este cel mai mare și cu cât.
*/

#include <iostream>
using namespace std;

int main() {
  int a, b, m, dif = 0;
  cin >> a >> b;

  if(a > b) {
    m = a;
    dif = a - b;
  }
  else if(b > a) {
    m = b;
    dif = b - a;
  }

  if(m == a)
    cout << "Primul copil este mai mare cu " << dif << " ani";
  else if(m == b)
    cout << "Al doilea copil este mai mare cu " << dif << " ani";
  else
    cout << "Copiii au varste egale";
}
