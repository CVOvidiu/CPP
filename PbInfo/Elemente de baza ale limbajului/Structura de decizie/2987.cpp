// https://www.pbinfo.ro/probleme/2987/buletin

// AALLZZ

#include <iostream>
#include <string.h>

using namespace std;

int main() {
    long long Cod;
    cin >> Cod;

    unsigned Zi, Luna, An;
    
    Cod = Cod % 1000000000000;
    Cod = Cod / 1000000;

    if(Cod < 100000) {
        An = Cod / 10000;
        cout << "0" << An << " ";

        Luna = (Cod % 10000) / 100;
        if(Luna < 10) {
            cout << "0" << Luna << " ";
        }
        else
            cout << Luna << " ";

        Zi = Cod % 100;
        if(Zi < 10) {
            cout << "0" << Zi << " ";
        }
        else
            cout << Zi << " ";
    }
    else if(Cod > 100000){
        An = Cod / 10000;
        cout << An << " ";

        Luna = (Cod % 10000) / 100;
        if(Luna < 10) {
            cout << "0" << Luna << " ";
        }
        else
            cout << Luna << " ";
        
        Zi = Cod % 100;
        if(Zi < 10) {
            cout << "0" << Zi << " ";
        }
        else
            cout << Zi << " ";
    }
}