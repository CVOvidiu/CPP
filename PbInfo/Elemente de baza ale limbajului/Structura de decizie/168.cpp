// https://www.pbinfo.ro/probleme/168/semn1

#include <iostream>

using namespace std;

int main() {
    int Nr_1, Nr_2;
    cin >> Nr_1 >> Nr_2;

    if((Nr_1 >= 0 && Nr_2 >= 0) || (Nr_1 < 0 && Nr_2 < 0))
        cout << "da";
    else
        cout << "nu";
}