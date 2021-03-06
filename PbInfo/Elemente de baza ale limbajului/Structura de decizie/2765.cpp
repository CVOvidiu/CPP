// https://www.pbinfo.ro/probleme/2765/checkcolor

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    short int R, G, B;
    cin >> R >> G >> B;

    if((R >= 0 && R <= 255) && (G >= 0 && G <= 255) && (B >= 0 && B <= 255)) {
        if((fabs(R - G) < 10) || (fabs(R - B) < 10) || (fabs(G - B) < 10))
            cout << "GRI";
        else
            cout << "CULOARE";
    }
    else
        cout << "NU E CULOARE";
}