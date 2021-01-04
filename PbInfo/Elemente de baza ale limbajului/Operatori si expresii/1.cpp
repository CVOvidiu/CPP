/*
Calculaţi suma celor 2 numere date.

Date de intrare
Fişierul de intrare sum.in conţine pe prima linie 2 numere întregi separate printr-un spaţiu.

Date de ieşire
Fişierul de ieşire sum.out va conţine pe prima linie numărul S, reprezentând suma celor două numere.
*/

#include <iostream>
#include <fstream>
using namespace std;

ifstream f("sum.in");
ofstream o("sum.out");

int main() {
  long long int a, b;

  f >> a >> b;

  int S = a + b;

  o << S;
}
