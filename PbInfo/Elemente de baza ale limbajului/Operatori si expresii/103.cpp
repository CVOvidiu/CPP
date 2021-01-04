/*
Curtea bunicului are formă dreptunghiulară şi se cunosc
lungimea şi lăţimea ei. Să se determine aria acestei curţi,
precum şi lungimea gardului care înconjoară curtea.
*/

#include <iostream>
using namespace std;

int main() {
  int a, b, A, P;
  cin >> a >> b;

  A = a * b;
  P = 2 * a + 2 * b;

  cout << A << " " << P;
}
