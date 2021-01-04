/*
O cutie cu bomboane costă B lei. Gigel are S lei.
Determinați câte cutii cu bomboane poate cumpăra Gigel și câți lei trebuie să mai primească pentru a cumpăra încă o cutie.
*/

#include<iostream>
using namespace std;

int main() {
  int C = 0, B, S;

  cin >> B >> S;

  while(S >= B) {
    S -= B;
    C++;
  }

  int P = B - S;

  cout << C << " " << P;

}
