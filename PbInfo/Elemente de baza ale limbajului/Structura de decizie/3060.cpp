// https://www.pbinfo.ro/probleme/3060/melc

#include <iostream>

using namespace std;

int main() {
    double viteza;
    int metrii, minute;
    cin >> viteza >> metrii;
    // viteza (km/h) => viteza = viteza * (1000 / 3600) (m/s)
    // timp = (distanta / viteza) (m/s) / 60 -> (in minute)

    viteza = viteza * (1000.0 / 3600.0);
    minute = (metrii / viteza) / 60;

    cout << minute;
}

/*
WTF? : Varianta corecta.

#include <iostream>

using namespace std;

float v, T;

int t, d;

int main()

{

   cin >> v >> d;

   v=v*1000/60;

   T=1.0*d/v;

   t=(int)T;

   if (T>t) ++t;

   cout << t;

}
*/