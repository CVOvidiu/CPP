/*
Se dă un segment care are punct comun cu o dreaptă. Dându-se x reprezentând gradele unuia dintre unghiurile
dintre dreaptă și segment, să se determine valoarea celui de-al doilea unghi.
*/

#include<iostream>
using namespace std;

int main() {
  int x, y;

  cin >> x;

  y = 180 - x;

  cout << y;
}
