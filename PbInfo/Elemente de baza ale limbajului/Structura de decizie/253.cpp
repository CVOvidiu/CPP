// https://www.pbinfo.ro/probleme/253/u2pare

#include <iostream>

using namespace std;

int main() {
    unsigned int n;
    cin >> n;

    if(n % 2 == 0)
        cout << n + 2 << " " << n + 4;
    else
        cout << n + 1 << " " << n + 3;
}