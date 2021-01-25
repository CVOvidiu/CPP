#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int HA, HB, D;
    cin >> HA >> HB >> D;

    /*int H_max = HA;

    if(HB > H_max)
        cout << HA;
    else
        cout << HB;
    */

   cout << abs(HB * HB + D * D - HA * HA) / (2 * D);

}

/*
Habar n-am : Corect : 

int main()
{
    int a , b , d;
    cin >> a >> b >> d;
    if(a < b)
        swap(a , b);
    int x;
    int ms = abs(b * b - a * a + d * d);
    x = ms / (2 * d);
    cout << x;
    return 0;
}
*/