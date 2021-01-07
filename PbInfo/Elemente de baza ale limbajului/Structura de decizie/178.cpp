// https://www.pbinfo.ro/probleme/178/patratperfect

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int Nr;
    cin >> Nr;

    /*
    int Sw = 0
    for(int i = 1; i <= Nr; i++)
        if(i * i == Nr)
            Sw = 1;

    if(Sw == 0)
        cout << "nu";
    else
        cout << "da";
    */

    if(sqrt(Nr) == int(sqrt(Nr)))
        cout << "da";
    else
        cout << "nu";
}