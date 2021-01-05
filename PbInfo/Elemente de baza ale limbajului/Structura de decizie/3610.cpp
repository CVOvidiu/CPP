// https://www.pbinfo.ro/probleme/3610/urm00

#include <iostream>

using namespace std;

int main() {
    int Numar, Cat_Numar, Constructie_Numar;
    cin >> Numar;

    Cat_Numar = Numar / 100;
    
    if(Numar % 100 == 0)
        cout << Numar;
    else {
        Constructie_Numar = (Cat_Numar + 1) * 100;
        cout << Constructie_Numar;
    }
}