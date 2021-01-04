/*
Să se scrie un program care determină aria totală şi volumul unui cub pentru care se cunoaşte lungimea laturii.
*/

#include<iostream>
using namespace std;

int main() {
  int L, S, V;

  cin >> L;

  S = 6 * L * L;

  V = L * L * L;

  cout << S << " " << V;
}
