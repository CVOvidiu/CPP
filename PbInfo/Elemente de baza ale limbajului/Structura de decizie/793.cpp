// https://www.pbinfo.ro/probleme/793/sumprod

#include <iostream>
#include <algorithm>

short E(short Num1, short Num2, short Num3) {
    return Num1 * Num2 + Num3;
}

int main() {
    short Nr[3];
    std::cin >> Nr[0] >> Nr[1] >> Nr[2];

    /*short R1 = E(Nr[0], Nr[1], Nr[2]);
    short R2 = E(Nr[0], Nr[2], Nr[1]);
    short R3 = E(Nr[1], Nr[2], Nr[0]);

    std::cout << std::max(R1, std::max(R2, R3));*/

    std::sort(Nr, Nr + 3);

    std::cout << Nr[2] * Nr[1] + Nr[0];
}