// https://www.pbinfo.ro/probleme/2419/intalnire

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    // Coordonatele de pe Ox
    int a, b;
    cin >> a >> b;

    int Oboseala_Totala_min;

    // Numarul de pasi
    int pasi = fabs(a - b);

    Oboseala_Totala_min = (((pasi * pasi + 1) / 2) + pasi) / 2;

    cout << Oboseala_Totala_min;
}