// https://www.pbinfo.ro/probleme/3480/9lan

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("9lan.in");
ofstream out("9lan.out");

int main() {
    unsigned Putere;
    in >> Putere;

    if(Putere % 2 == 0)
        out << "1";
    else
        out << "9";
}