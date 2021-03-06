// https://www.pbinfo.ro/probleme/448/ciford

#include <iostream>
#include <algorithm>

int main() {
    short Nr;
    std::cin >> Nr;

    short Cif[3];

    Cif[0] = Nr % 10;
    Cif[1] = Nr % 100 / 10;
    Cif[2] = Nr / 100;

    std::sort(Cif, Cif + 3);

    std::cout << Cif[0] << " " << Cif[1] << " " << Cif[2];
}