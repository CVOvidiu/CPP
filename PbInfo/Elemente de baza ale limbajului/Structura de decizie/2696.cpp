// https://www.pbinfo.ro/probleme/2696/cifp-cifi

#include <iostream>

short Cif_Pare(short Num) {
    short C = 0, uc;
    while(Num) {
        uc = Num % 10;
        if(uc % 2 == 0)
            C++;
        Num = Num / 10;
    }

    return C;
}

short Cif_Impare(short Num) {
    short C = 0, uc;
    while(Num) {
        uc = Num % 10;
        if(uc % 2 != 0)
            C++;
        Num = Num / 10;
    }

    return C;
}

int main() {
    short Nr[2];
    std::cin >> Nr[0] >> Nr[1];

    if((Nr[0] % 2 == 0 && Nr[1] % 2 == 0) || (Nr[0] % 2 != 0 && Nr[1] % 2 != 0))
        std::cout << Cif_Pare(Nr[0]) + Cif_Pare(Nr[1]);
    else
        std::cout << Cif_Impare(Nr[0]) + Cif_Impare(Nr[1]);
}