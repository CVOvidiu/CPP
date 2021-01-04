/*
Într-o clasă sunt F fete și B băieți. Fiecare fată citește 3 pagini pe zi și fiecare băiat citește 2 pagini pe zi.
Câte pagini vor citi copiii în n zile?
*/

#include<iostream>
using namespace std;

int main() {
  int F, B, n;

  cin >> F >> B >> n;

  int t;
  t = (F * 3 * n) + (B * 2 * n);

  cout << t;
}
