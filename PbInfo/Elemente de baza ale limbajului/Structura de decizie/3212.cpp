// https://www.pbinfo.ro/probleme/3212/cumparaturi2

#include <iostream>

using namespace std;

int main() {
    int Suma, Pret_Drona, Pret_Robot, Pret_Masina;
    cin >> Suma >> Pret_Drona >> Pret_Robot >> Pret_Masina;

    if(Suma >= Pret_Drona) {
        cout << "drona";
        return 0;
    }
    else if(Suma >= Pret_Robot) {
        cout << "robot";
        return 0;
    }
    else if(Suma >= Pret_Masina) {
        cout << "masina";
        return 0;
    }
    else {
        cout << "nimic";
    }
}