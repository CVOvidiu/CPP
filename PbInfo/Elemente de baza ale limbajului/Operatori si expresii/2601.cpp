/*
Scrieți un program care calculează suma pătratelor cifrelor
 unui număr natural de trei cifre citit de la tastatură.
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

  cout << uc1*uc1 + uc2*uc2 + uc3*uc3;
}
