/*
Să se scrie un program care citeşte de la tastatură un număr natural
cu exact trei cifre și determină suma cifrelor sale.
*/

#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;

  int uc1 = a % 10;
  a = a / 10;
  int uc2 = a % 10;
  a = a / 10;
  int uc3 = a % 10;

  cout << uc1+uc2+uc3;
}
