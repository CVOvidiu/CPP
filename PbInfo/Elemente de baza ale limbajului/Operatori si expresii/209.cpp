/*
Să se scrie un program care citeşte de la tastatură
un număr natural cu exact trei cifre şi determină
numărul obţinut prin eliminarea cifrei din mijloc.
*/

#include <iostream>
using namespace std;

int main() {
  int n, m, ns;
  cin >> n;
  ns = n;

  n = n / 100;
  m = n % 10;
  m = m * 10 + ns % 10;

  cout << m;
}
