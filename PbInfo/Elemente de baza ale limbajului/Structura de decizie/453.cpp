// https://www.pbinfo.ro/probleme/453/distincte1

#include <iostream>

int main() {
    short Nr[3];
    std::cin >> Nr[0] >> Nr[1] >> Nr[2];

    if(Nr[0] != Nr[1]) {
        if(Nr[0] != Nr[2])
            std::cout << 3;
        else if(Nr[0] == Nr[2])
            std::cout << 2;
        else if(Nr[1] != Nr[2])
            std::cout << 3;
        else if(Nr[1] == Nr[2])
            std::cout << 2;
    }
    else if(Nr[1] != Nr[2]) {
        if(Nr[1] != Nr[0])
            std::cout << 3;
        else if(Nr[1] == Nr[0])
            std::cout << 2;
        else if(Nr[2] != Nr[0])
            std::cout << 3;
        else if(Nr[2] == Nr[0])
            std::cout << 2;
    }
    else if(Nr[0] != Nr[2]) {
        if(Nr[0] != Nr[1])
            std::cout << 3;
        else if(Nr[0] == Nr[1])
            std::cout << 2;
        else if(Nr[2] != Nr[1])
            std::cout << 3;
        else if(Nr[2] == Nr[1])
            std::cout << 2;
    }
    else if(Nr[0] == Nr[1] && Nr[1] == Nr[2])
        std::cout << 1;
}