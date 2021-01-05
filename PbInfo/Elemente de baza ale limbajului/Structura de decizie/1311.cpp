// https://www.pbinfo.ro/probleme/1311/cifegale

#include <iostream>

using namespace std;

int main() {
    int Numar, Ultima_Cifra_1, Ultima_Cifra_2, Ultima_Cifra_3;
    cin >> Numar;

    Ultima_Cifra_1 = Numar % 10;
    Ultima_Cifra_2 = (Numar / 10) % 10;
    Ultima_Cifra_3 = (Numar / 100) % 10;

    if(max(Ultima_Cifra_1, max(Ultima_Cifra_2, Ultima_Cifra_3)) == min(Ultima_Cifra_1, min(Ultima_Cifra_2, Ultima_Cifra_3)))
        cout << "da";
    else
        cout << "nu";
}