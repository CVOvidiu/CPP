/*
Câte cutii cubice de latură l pot fi suprapuse într-o încăpere de înălțime h.
*/

#include<iostream>
using namespace std;

int main() {
  int n = 0, auxL, l, h;

  cin >> l >> h;

  auxL = l;

  while(l <= h) {
    n++;
    l += auxL;
  }

  cout << n;

}
