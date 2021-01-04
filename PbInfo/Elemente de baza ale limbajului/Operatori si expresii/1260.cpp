/*
Se citesc două numere naturale. Afișați suma, diferenţa, produsul şi câtul lor, în această ordine, separate prin câte un spațiu.
*/

#include<iostream>
using namespace std;

int main() {
  int a, b;

  cin >> a >> b;

  cout << a + b << " " << a - b << " " << a * b << " " << a / b;
}
