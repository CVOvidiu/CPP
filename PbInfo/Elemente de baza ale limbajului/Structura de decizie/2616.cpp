// https://www.pbinfo.ro/probleme/2616/paznici1
// Ciorna pe spatele caietului de docs info

#include <iostream>

using namespace std;

int main() {
   int linii, coloane, P, Start;
   cin >> linii >> coloane;

    if(linii % 2 == 0) { // daca doar liniile sunt pare
        if(linii == coloane) // daca liniile si coloanele sunt egale : CAZ : 6 : 6
            P = (linii / 2) * (linii / 2);
        else if(coloane % 2 == 0) { // daca si coloanele sunt pare dar diferite : CAZ : 6 : 4
            Start = linii / 2;
            P = Start * (coloane / 2);
        }
        else if(coloane % 2 != 0) { // CAZ : 6 : 5
            coloane++;
            Start = linii / 2;
            P = Start * (coloane / 2);
        }
    }
    else if(linii % 2 != 0) { // daca doar liniile sunt impare
        linii++;
        if(linii == coloane) // caz 5 : 5
            P = (linii / 2) * (linii / 2);
        else if(coloane % 2 == 0) { // caz 5 : 6
            Start = linii / 2;
            P = Start * (coloane / 2);
        }
        else if(coloane % 2 != 0) { // caz 5 : 7
            coloane++;
            Start = linii / 2;
            P = Start * (coloane / 2);
        }
    }

    cout << P;
}