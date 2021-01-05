// https://www.pbinfo.ro/probleme/167/semn

#include <iostream>

using namespace std;

int main() {
    int Nr;
    cin >> Nr;

    if(Nr > 0)
        cout << "pozitiv";
    else if(Nr < 0)
        cout << "negativ";
    else if(Nr == 0)
        cout << "nul";
}