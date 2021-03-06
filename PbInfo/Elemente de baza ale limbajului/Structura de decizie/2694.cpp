// https://www.pbinfo.ro/probleme/2694/minmax2

#include <iostream>

short Cif_Max(short Num) {
    short maxi = 0, uc;

    while(Num) {
        uc = Num % 10;
        if(maxi < uc)
            maxi = uc;
        Num = Num / 10;
    }

    return maxi;
}

short Cif_Min(short Num) {
    short mini = 10, uc;

    while(Num) {
        uc = Num % 10;
        if(mini > uc)
            mini = uc;
        Num = Num / 10;
    }

    return mini;
}

int main() {
    short Nr[2];
    std::cin >> Nr[0] >> Nr[1];

    if(Cif_Max(Nr[0]) < Cif_Max(Nr[1]))
        std::cout << Cif_Max(Nr[1]) << Cif_Max(Nr[0]) << " ";
    else
        std::cout << Cif_Max(Nr[0]) << Cif_Max(Nr[1]) << " ";

    if(Cif_Min(Nr[0]) > Cif_Min(Nr[1]))
        std::cout << Cif_Min(Nr[1]) << Cif_Min(Nr[0]) << " ";
    else
        std::cout << Cif_Min(Nr[0]) << Cif_Min(Nr[1]) << " ";
}