/*
Într-un brad sunt a globuri albe, de două ori mai multe globuri roșii,
iar globuri verzi cu 3 mai puține ca numărul de globuri roșii. Câte globuri sunt în total ?
*/

#include<iostream>
using namespace std;

int main() {
  int a;

  cin >> a;

  int r, v;

  r = a * 2;
  v = r - 3;

  cout << a + r + v;
}
