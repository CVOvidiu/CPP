/*
Pe planeta Marte anul marțian durează x zile marțiene, iar o zi marțiană durează y ore.
În fiecare oră, marțianului Iggle îi crește o antenă. După cât timp va avea Iggle n antene?
*/

#include<iostream>
using namespace std;

int main() {
  int x, y, n, a, z, h;

  cin >> x >> y >> n;

  a = n / (x * y);
  n -= a * (x * y);

  z = n / y;
  n -= z * y;
  
  h = n;

  cout << a << endl;
  cout << z << endl;
  cout << h;

}
