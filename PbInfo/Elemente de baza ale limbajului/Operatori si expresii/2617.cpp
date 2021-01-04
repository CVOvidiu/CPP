/*
Gigel are o bucată de hârtie cu dimensiunile N*M și vrea să o taie în bucăți cu dimensiunile 1*1, respectând regulile:

> poate să taie o singură foaie la un moment dat. Nu poate suprapune mai multe foi și să le taie în același timp;

> fiecare tăietură se face dintr-o parte în alta a foii, pe verticală sau orizontală.
Figura următoare arată cele trei moduri în care poate fi tăiată o foaie cu dimensiunile 3*2.


Scrieți un program care să citească numerele N și M și să determine numărul de tăieturi care trebuie efectuate.
*/

#include<iostream>
using namespace std;

int main() {
  long long int N, M, S;

  cin >> N >> M;

if(N != M)
  S = N * M - 1;
else {
  if(N == M)
    S = N * M - 1;
  if(N == 2 && M == 2)
    S = 2;
}

  cout << S;
}
