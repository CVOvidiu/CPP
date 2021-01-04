/*
Calculaţi diferența dintre cel mai mare și cel mai mic dintre cele 3 numere date.
*/

#include <iostream>
using namespace std;

int a, b, c;

int main()
{
    cin >> a >> b >> c;
    cout << max(a, max(b, c)) - min(a, min(b,c));
}
