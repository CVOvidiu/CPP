/*
Scrieți un program care citește
de la tastatură un număr natural a și care afișează partea întreagă a valorii expresiei
-more on PBINFO
*/

#include<iostream>
#include<math.h>
using namespace std;

int main() {
  int a, e;

  cin >> a;

  e = ((3 * (pow(a, 2) + pow(a, 4))) / (pow(a, 2) + pow(a, 4) + sqrt(pow(a, 2) + pow(a, 4)))) + (sqrt(pow(a, 2) + pow(a, 4)));

  cout << int(e);

}
