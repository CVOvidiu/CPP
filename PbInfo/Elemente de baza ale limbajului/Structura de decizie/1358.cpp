// https://www.pbinfo.ro/probleme/1358/minciuna

#include <iostream>

// Poate sa puna ambele bilete intre doua pagini consecutive

using namespace std;

int main() {
    unsigned short int x, y;
    cin >> x >> y;

    if(x > y)
        swap(x, y);

    if(y - x != 1)
        cout << "minciuna";
    else if(x % 2 == 0)
        cout << "Andrei e mai responsabil";
    else
        cout << "minciuna";
}