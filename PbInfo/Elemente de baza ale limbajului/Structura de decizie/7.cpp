// https://www.pbinfo.ro/probleme/7/maxim2

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("maxim.in");
ofstream out("maxim.out");

int main() {
    int Nr_1, Nr_2, Max;
    in >> Nr_1 >> Nr_2;

    Max = max(Nr_1, Nr_2);

    out << Max;
}