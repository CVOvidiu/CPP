// https://www.pbinfo.ro/probleme/450/minicalc

#include <iostream>

void Suma(int a, int b) {
    std::cout << a + b;
}

void Diff(int a, int b) {
    std::cout << a - b;
}

void Prod(int a, int b) {
    std::cout << a * b;
}

void Cat(int a, int b) {
    std::cout << a / b;
}

void Rest(int a, int b) {
    std::cout << a % b;
}

int main() {
    unsigned short int Nr[3];
    std::cin >> Nr[0] >> Nr[1] >> Nr[2];

    switch (Nr[2]) {
    case 1:
        Suma(Nr[0], Nr[1]);
        break;
    case 2:
        Diff(Nr[0], Nr[1]);
        break;
    case 3:
        Prod(Nr[0], Nr[1]);
        break;
    case 4:
        Cat(Nr[0], Nr[1]);
        break;
    case 5:
        Rest(Nr[0], Nr[1]);
        break;
    }
}