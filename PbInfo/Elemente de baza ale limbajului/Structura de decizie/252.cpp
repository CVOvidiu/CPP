// https://www.pbinfo.ro/probleme/252/u2impare

#include <iostream>

using namespace std;

int main() {
    unsigned int n;
    cin >> n;

    if(n % 2 == 0)
        cout << n - 3 << " " << n - 1;
    else
        cout << n - 4 << " " << n - 2;
}