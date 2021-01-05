// https://www.pbinfo.ro/probleme/177/bisect

#include <iostream>
using namespace std;

int main() {
    int An;
    cin >> An;

    if((An % 400 == 0) || (An % 4 == 0 && An % 100 != 0))
        cout << "bisect";
    else
        cout << "nebisect";
}