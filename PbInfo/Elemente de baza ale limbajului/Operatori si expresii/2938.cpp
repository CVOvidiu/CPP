/*
Într-un stup, pe un fagure de miere infinit, trăiește o albină foarte harnică.
Fagurele este alcătuit din celule hexagonale, fiecare celulă având șase vecini.
În prima zi albina depune nectar într-o singură celulă. În fiecare din zilele următoarele,
albina depune nectar în celulele vecine cu cele în care a fost deja depus nectar.

Aflați în câte celule este depus nectar după n zile.
*/

#include<iostream>
using namespace std;

int main() {
  long long int n, i, C = 1;

  cin >> n;

  for(i = 0; i <= n - 1; i++) {
    C = C + i * 6;
  }

  cout << C;

}
