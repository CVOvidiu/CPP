// https://www.pbinfo.ro/probleme/1274/perf

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    unsigned int x;
    cin >> x;

    unsigned int div = sqrt(x);
    if((div * div) == x)
        cout << "DA";
    else
        cout << "NU";
}

// Altfel plimbare prin divizorii lui x si ii incercam pe toti la patrat pana dam de x