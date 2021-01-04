/*
Să se scrie un program care citeşte de la tastatură cele trei note ale unui elev și determină media lor.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int n1, n2, n3;
float media;

int main() {
  cin >> n1 >> n2 >> n3;
  media = (n1 + n2 + n3) / 3.0;
  media = int(media * 100);
  media = float(media / 100.00);
  cout << fixed << setprecision(2) << media;
}
