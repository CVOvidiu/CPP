/*
Să se scrie un program care citeşte de la tastatură un număr natural şi verifică dacă numărul este par sau impar.
*/

#include <iostream>
using namespace std;

int main() {
  long long int a;
  cin >> a;

  if (a % 2 == 0)
    cout << a << " este par";
  else
    cout << a << " este impar";
}
