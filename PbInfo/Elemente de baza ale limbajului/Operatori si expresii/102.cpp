/*
Să se scrie un program care citeşte de la tastatură un număr natural cu
cel puţin două cifre şi determină suma dintre cifra zecilor şi cifra unităţilor numărului citit.
*/

#include<iostream>
using namespace std;

int main() {
  long long int n, s;

  cin >> n;

  int ucU, ucZ;

  ucU = n % 10;
  n = n / 10;
  ucZ = n % 10;

  s = ucU + ucZ;

  cout << s;
}
