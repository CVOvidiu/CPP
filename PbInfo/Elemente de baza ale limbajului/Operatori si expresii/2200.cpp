/*
Să se scrie un program care citește o literă mică și afișează litera mare corespunzătoare.
*/

#include <iostream>
using namespace std;

int main() {
  char r;
  cin >> r;

  cout << char(int(r) - 32);
}
