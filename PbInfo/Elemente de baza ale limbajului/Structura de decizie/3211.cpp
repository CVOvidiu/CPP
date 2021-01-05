// https://www.pbinfo.ro/probleme/3211/cumparaturi1

#include <iostream>

using namespace std;

int main() {
    int Bani, Pret_Ciocolata, Pret_Napolitana;
    cin >> Bani >> Pret_Ciocolata >> Pret_Napolitana;

    if(Bani % Pret_Ciocolata == 0)
        cout << "C";
    if(Bani % Pret_Napolitana == 0)
        cout << "N";

    if(Bani % Pret_Ciocolata != 0 && Bani % Pret_Napolitana != 0)
        cout << "nimic";
}