// https://www.pbinfo.ro/probleme/1303/calculator

#include <iostream>

using namespace std;

int main() {
    int Nr_1, Nr_2;
    cin >> Nr_1 >> Nr_2;

    char Sign;
    cin >> Sign;

    // Citim numerele si dupa semnul

    // Pentru cazurile de impartire si scadere
    if (Nr_1 < Nr_2)
        swap(Nr_1, Nr_2);

    switch (Sign) {
    case '+':
        cout << Nr_1 + Nr_2;
        break;
    case '-':
        cout << Nr_1 - Nr_2;
        break;
    case '*':
        cout << Nr_1 * Nr_2;
        break;
    case '/':
        cout << Nr_1 / Nr_2;
        break;
    }
}