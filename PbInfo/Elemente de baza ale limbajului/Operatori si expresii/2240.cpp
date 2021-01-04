/*
Într-o curte sunt câini, pisici și găini. Se știe că numărul de pisici este egal cu dublul numărului de câini,
iar numărul de găini este egal cu dublul numărului de pisici.
Dacă în curte sunt C câini, câte animale sunt în curte?
*/

#include<iostream>
using namespace std;

int main() {
  int C;

  cin >> C;

  int p = 2 * C;
  int g = 2 * p;

  cout << C + p + g;
}
