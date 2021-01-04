/*
La un concurs pot participa copii cu vârste între a și b ani, inclusiv. Gigel are n ani. Stabiliți dacă poate participa la concurs.
*/

#include <iostream>
using namespace std;

int main() {
  int a, b, n;
  cin >> a >> b >> n;

  if(n >= a && n <= b)
    cout << "DA";
  else
    cout << "NU";
}
