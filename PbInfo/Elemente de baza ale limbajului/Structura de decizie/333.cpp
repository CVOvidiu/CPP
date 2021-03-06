// https://www.pbinfo.ro/probleme/333/triunghi1

#include <iostream>
#include <algorithm>
#include <math.h>

int main() {
    double lat[3];
    std::cin >> lat[0] >> lat[1] >> lat[2];

    std::sort(lat, lat+3);

    if(lat[0] + lat[1] <= lat[2])
        std::cout << "nu este triunghi";
    else {
        if(pow(lat[0], 2) + pow(lat[1], 2) == pow(lat[2], 2))
            std::cout << "triunghi dreptunghic";
        else if(pow(lat[0], 2) + pow(lat[1], 2) > pow(lat[2], 2))
            std::cout << "triunghi ascutitunghic";
        else
            std::cout << "triunghi obtuzunghic";
    }
}