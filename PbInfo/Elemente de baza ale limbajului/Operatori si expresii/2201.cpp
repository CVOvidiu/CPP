/*
Într-un grup sunt n prieteni. Când se întâlnesc se salută, fiecare dând mână cu toți ceilalți. Câte strângeri de mână au loc?
*/

#include<iostream>
using namespace std;

int main() {
  long long int n;

  cin >> n;

  cout << ((n - 1) * n) / 2;
}
