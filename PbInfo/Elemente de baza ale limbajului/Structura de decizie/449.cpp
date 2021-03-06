// https://www.pbinfo.ro/probleme/449/nrcif

#include <iostream>

int main() {
    short Nr;
    std::cin >> Nr;

    short C = 0;
    while(Nr) {
        C++;
        Nr = Nr / 10;
    }

    std::cout << C;
}