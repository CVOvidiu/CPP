#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int sum_a = 0, sum_b = 0, sum_c = 0;

    sum_a = (a % 10) + ((a / 10) % 10);
    sum_b = (b % 10) + ((b / 10) % 10);
    sum_c = (c % 10) + ((c / 10) % 10);

    if(sum_a == max(sum_a, max(sum_b, sum_c)))
        cout << a << " ";

    if(sum_b == max(sum_a, max(sum_b, sum_c)))
        cout << b << " ";
    
    if(sum_c == max(sum_a, max(sum_b, sum_c)))
        cout << c << " ";
}