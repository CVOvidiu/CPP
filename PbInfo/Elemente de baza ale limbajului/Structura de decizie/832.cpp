/*
Fiind dată nota unui elev să se afișeze dacă acesta este corigent sau promovat.
*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  if(n < 5)
    cout << "corigent";
  else
    cout << "promovat";
}
