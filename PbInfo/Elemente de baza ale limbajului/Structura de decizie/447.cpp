// https://www.pbinfo.ro/probleme/447/cifmid

#include <iostream>
#include <algorithm>

int main() {
    short Nr;
    std::cin >> Nr;

    short cif[3];
    cif[0] = Nr % 10;
    cif[1] = Nr % 100 / 10;
    cif[2] = Nr / 100;

    std::sort(cif, cif + 3);

    std::cout << cif[1];
}