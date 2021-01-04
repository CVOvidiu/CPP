/*
Să se scrie un program care citeşte de la tastatură
 un număr natural cu exact două cifre și determină
 suma cifrelor sale.
*/

#include <iostream>
using namespace std;

int main() {
  int a, uc1, uc2;

  cin >> a;

  uc1 = a % 10;
  a = a / 10;
  uc2 = a % 10;

  cout << uc1 + uc2;
}
