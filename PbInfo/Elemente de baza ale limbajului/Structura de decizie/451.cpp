// https://www.pbinfo.ro/probleme/451/calcul

#include <iostream>

using namespace std;

int main() {
    unsigned Nr, S = 0, P = 1;
    cin >> Nr;
    
    if(Nr <= 15)
        cout << Nr * Nr;
    else if(Nr >= 16 && Nr <= 30) {
        while(Nr) {
            S += Nr % 10;
            Nr = Nr / 10;
        }
        cout << S;
    }
    else {
        while(Nr) {
            P = P * (Nr % 10);
            Nr = Nr / 10;
        }
        cout << P;
    }
}