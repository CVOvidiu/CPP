/*
Să se scrie un program care determină maximul a două numere întregi citite de la tastatură.
*/

#include <iostream>
using namespace std;

int main() {
  long long int a, b;
  cin >> a >> b;

  if(a > b)
    cout << a;
  else
    cout << b;
}
