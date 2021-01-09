#include <iostream>

using namespace std;

int main() {
    int Start, Cautat;
    cin >> Start >> Cautat;

    /*
    int Element = 1;
    while(c != Cautat) {
        if(c % 2 == 0)
            Element += 2;
        else
            Element += 1;

        c++;
    }
    */

    if(Cautat % 2 == 0) {
        cout << (Cautat / 2) + Cautat - 2 << Start; 
    }
    else {
        cout << (Cautat / 2) + Cautat - 1 << Start;
    }
}