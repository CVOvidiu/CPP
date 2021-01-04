/*
Scrieți un program care citește un număr natural nenul n și care afișează numele lunii calendaristice corespunzătoare numărului n.
*/

#include <iostream>
using namespace std;

int n;

int main() {
  cin >> n;

  if(n == 1)
    cout << "ianuarie";
  if(n == 2)
    cout << "februarie";
  if(n == 3)
    cout << "martie";
  if(n == 4)
    cout << "aprilie";
  if(n == 5)
    cout << "mai";
  if(n == 6)
    cout << "iunie";
  if(n == 7)
    cout << "iulie";
  if(n == 8)
    cout << "august";
  if(n == 9)
    cout << "septembrie";
  if(n == 10)
    cout << "octombrie";
  if(n == 11)
    cout << "noiembrie";
  if(n == 12)
    cout << "decembrie";
}
