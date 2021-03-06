// https://www.pbinfo.ro/probleme/446/cifmax3

#include <iostream>
#include <algorithm>

int main() {
    short Nr;
    std::cin >> Nr;

    short maxi = Nr % 10;
    Nr = Nr / 10;
    while(Nr) {
        short uc = Nr % 10;
        
        maxi = std::max(maxi, uc);
        
        Nr = Nr / 10;
    }

    std::cout << maxi;
}