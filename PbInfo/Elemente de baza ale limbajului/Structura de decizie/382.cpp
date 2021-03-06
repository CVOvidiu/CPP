// https://www.pbinfo.ro/probleme/382/aproapek

#include <iostream>
#include <math.h>
#include <algorithm>

int main() {
    int n, k;
    std::cin >> n >> k;

    int p1 = n, p2 = n;
    
    while(p1 % k != 0)
        p1--;

    while(p2 % k != 0)
        p2++;

    if(fabs(n - p1) == fabs(n - p2))
        std::cout << std::min(p1, p2);
    else if(fabs(n - p1) < fabs(n - p2))
        std::cout << p1;
    else
        std::cout << p2;
}