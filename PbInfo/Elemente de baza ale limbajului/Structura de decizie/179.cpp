// https://www.pbinfo.ro/probleme/179/triunghi

#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    bool ok = 0;
    if(a + b <= c)
        ok = 1;
    else if(a + c <= b)
        ok = 1;
    else if(b + c <= a)
        ok = 1;

    if(ok == 1)
        cout << "nu";
    else
        cout << "da";
}