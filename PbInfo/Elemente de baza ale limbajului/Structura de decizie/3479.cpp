// https://www.pbinfo.ro/probleme/3479/2lan

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("2lan.in");
ofstream out("2lan.out");

int main() {
    unsigned Putere;
    in >> Putere;

    if(Putere == 0)
        out << "1";

    while(Putere > 4)
        Putere -= 4;

    if(Putere == 1)
        out << "2";
    else if(Putere == 2)
        out << "4";
    else if(Putere == 3)
        out << "8";
    else if(Putere == 4)
        out << "6";
}