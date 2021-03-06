// https://www.pbinfo.ro/probleme/3207/cercuri
// Kinda hard ngnl

#include <iostream>
#include <math.h>

int main() {
    int r1, r2, x1, x2, y1, y2;
    std::cin >> r1 >> x1 >> y1;
    std::cin >> r2 >> x2 >> y2;

    int d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)); // Distanta dintre doua puncte

    if(r1 == r2 && x1 == x2 && y1 == y2)
        std::cout << "infinit";
    else if(d == fabs(r1 - r2) || d == r1 + r2)
        std::cout << "1";
    else if(d < r1 + r2 && r1 + d > r2 && d + r2 > r1)
        std::cout << "2";
    else
        std::cout << "0"; 
}