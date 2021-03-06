// https://www.pbinfo.ro/probleme/334/dreapta

#include <iostream>

using namespace std;

int main() {
    short int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if(x1 == x2)
        cout << "verticala";
    else if(y1 == y2)
        cout << "orizontala";
    else
        cout << "oblica";
}