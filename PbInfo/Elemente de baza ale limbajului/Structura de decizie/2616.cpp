// https://www.pbinfo.ro/probleme/2616/paznici1

#include <iostream>

using namespace std;

int main() {
   int linii, coloane, P, Start;
   cin >> linii >> coloane;

    if(linii % 2 == 0 && linii == coloane) {
        P = (linii / 2) * (linii / 2);
    }
    else if(linii % 2 != 0 && linii == coloane) {
        linii++;
        coloane++;

        P = (linii / 2) * (linii / 2);
    }

    if(linii % 2 == 0 && coloane % 2 == 0) {
        Start = linii / 2;

        P = Start * (linii / 2)
    }
    else if(linii % 2 != 0) {
        linii++;
        Start = linii / 2;
    }

    cout << P;
}