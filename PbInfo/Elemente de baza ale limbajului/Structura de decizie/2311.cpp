//https://www.pbinfo.ro/probleme/2311/rapunzel

#include <iostream>
#include <fstream>

using namespace std;

ifstream in("rapunzel.in");
ofstream out("rapunzel.out");

int main() {
    long long N, M1, M2;
    in >> N >> M1 >> M2;

    // N - Cati metrii are turnul
    // M1 - Rasarit -> Pranz
    // M2 - Pranz -> Apus

    long long Zi = M1 + M2;
    // Zi - Totalul de metrii deplasati pe intreaga zi

    if(N % Zi == 0)
        out << N / Zi;
        // Daca metrii se impart exact, e numarul exact de zile
    else
        out <<  N / Zi + 1;
        // Daca metrii nu se impart exact, inseamna ca restul ii face ii urmatoarea zi -> inca o zi
}