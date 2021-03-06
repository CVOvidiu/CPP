// https://www.pbinfo.ro/probleme/1301/isoscel

#include <iostream>
#include <algorithm>

int main() {
    double lat[3];
    std::cin >> lat[0] >> lat[1] >> lat[2];

    // Algoritm de existenta triunghi
    std::sort(lat, lat+3);
    if(lat[0] != 0 && lat[1] != 0 && lat[2] != 0) {
        if(lat[0] + lat[1] <= lat[2])
            // Nu exista triunghi
            std::cout << "Nu formeaza triunghi";
        else {
            if ((lat[0] == lat[1] && lat[1] != lat[2]) || (lat[1] == lat[2] && lat[2] != lat[0]) || (lat[2] == lat[0] && lat[0] != lat[1]))
                std::cout << "Formeaza triunghi isoscel";
            else
                std::cout << "Nu formeaza triunghi isoscel";
        }
    }
}