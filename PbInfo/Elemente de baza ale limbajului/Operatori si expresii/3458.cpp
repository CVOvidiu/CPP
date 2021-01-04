/*
Se dă un număr natural x, reprezentând mărimea în
grade sexagesimale a unui unghi. Să se afișeze sin(x) și cos(x).
*/

#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int x;
  cin >> x;
  cout << fixed << setprecision(3) << sin(x * 2 * acos(0) / 180) << " " << cos(x * 2 * acos(0) / 180) << endl;
}
