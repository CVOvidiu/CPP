/*
Scrieți un program care cere de la tastatură un număr real (într-o variabilă de tip double)
și care afișează ultima cifră a părții întregi a valorii citite.
*/

#include<iostream>
using namespace std;

int main() {
  double a;

  int A;

  cin >> a;

  A = int(a);

  cout << A % 10;
}
