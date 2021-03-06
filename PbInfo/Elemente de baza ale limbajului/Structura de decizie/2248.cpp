// https://www.pbinfo.ro/probleme/2248/coordonate

#include <iostream>

using namespace std;

int main() {
    /*
    Lat - Latura patratului
    Val_1 - Valoarea de la pozitia (x,y)
    Val_2 - Valoarea de la pozitia (i,j)
    i, j - Coordonatele valorii Val_2
    x, y - Coordonatele valorii Val_1
    */

    unsigned short int Lat;
    long long Val_1, Val_2;
    unsigned short int x, y, i, j;

    cin >> Lat >> x >> y >> Val_2;

    // Val_1
    if (x == 1)
        Val_1 = y;
    else {
        Val_1 = y + ((x-1)*Lat);
    }

    // (i, j)
    unsigned short int lin = 1, col;
    while (Val_2 > Lat) {
        Val_2 -= Lat;
        lin++; // Numarul de linii
    }
    col = Val_2; // Numarul coloanei e ce ramane

    // Afisare
    cout << Val_1 << " " << lin << " " << col;
}