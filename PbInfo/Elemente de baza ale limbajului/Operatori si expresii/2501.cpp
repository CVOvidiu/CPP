/*
Se citește un număr natural impar n. Să se afișeze valoarea sumei 1+3+5+7+...n.
*/

#include <iostream>
using namespace std;

int main() {
  long long int n, i, s = 0;
  cin >> n;

  for(i = 1; i <= n; i = i + 2)
    s = s + i;

  cout << s;
}
