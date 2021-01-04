/*
Scrieți un program care determină câte sticle de x litri cu apă trebuie deschise pentru a umple un vas de y litri.
*/

#include <iostream>
using namespace std;

int main() {
  long long int x, n, y;
  cin >> x >> y;

  for (n = 1; n <= y; n++)
    if(n * x >= y) {
      cout << n;
      break;
    }
}
