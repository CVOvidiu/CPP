// Tema Lore

#include <iostream>

using namespace std;

int pDoi12(int n) {
    int Nr_Constructie = 2; // Numarul care trebuie construit pe parcurs prin puterile lui '2', initializat la inceput cu '2 la puterea 1'

    while(Nr_Constructie <= n) { // Cat timp numarul de construit este mai mic decat n
        Nr_Constructie = Nr_Constructie * 2; // Creeaza numarul prin puterile lui '2'
    }
    Nr_Constructie = Nr_Constructie / 2; // La sfarsit de tot trebuie dat un pas inapoi pentru ca while-ul devine fals cand trece peste valoare care ne trebuie

    return Nr_Constructie; // Returneaza numarul construit
}

int suma8(int n) {
    int sum = 0; // Suma Divizorilor (suma mereu pleaca de la '0')
    int n_aux = n; // Ca sa trecem prin toti divizorii lui 'n', trebuie sa il salvam in alta variabila deoarece 'n' o sa se schimbe pe parcursul problemei in 'while' la linia 27

    for(int i = 2; i <= n_aux / 2; i++) { // Algoritmul de divizori care trece prin toti divizorii lui 'n'
        if(n % i == 0) { // Daca este divizor
            sum = sum + i; // Aduna-l la suma

            while(n % i == 0) // Trebuie sa scapam de tot de divizor din numar ca sa putem trece la urmatorul divizor
                n = n / i;
        }
    }

    return sum; // Returneaza suma divizorilor
}

int putere7(int n, int p) {
    int c = 0, sw_p = 0;

    // sw_p = 1 - nu e prim
    // sw_p = 0 - prim

    for(int i = 2; i <= p / 2; i++) { // algoritm de divizori
        if(p % i == 0) // vede daca se imparte vreun 'i' la 'p' (nu e prim daca se imparte)
            sw_p = 1;
    }

    if(sw_p == 0) { // daca 'p' e prim
        while(n % p == 0) {
            c++;
            n = n / p;
        }
    
        return c;
    }

    return -1;
}

int baza5(int n) {
    int uc, max_uc = 0;

    while(n) {
        uc = n % 10;
        n = n / 10;
        if(max_uc < uc)
            max_uc = uc;
    }

    return max_uc + 1;
}

void generatoare4(int n) {
    int sw = 0, n_aux = n;

    for(int i = 1; i <= n_aux / 2; i++)
        for(int j = 1; j <= n_aux / 2; j++) {
            if(((i * j) + (i / j)) == n && i % 2 == 0) {
                cout << i << "-" << j << " ";
                sw = 1;
            }
        }

    if(sw == 0)
        cout << "nu exista";
}

int factori3(int n, int m) {
    int c = 0, n_aux, m_aux;

    n_aux = n;

    for(int i = 2; i <= n_aux; i++) {
        if(n % i == 0 && m % i == 0) {
            c++;
        }

        while(n % i == 0) {
            n = n / i;
        }

        while(m % i == 0) {
            m = m / i;
        }

    }

    return c;
}

int main() {
    
    int Nr_1, Nr_2;
    //cin >> Nr_1 >> Nr_2;
    //cout << factori3(Nr_1, Nr_2);

    int Nr_3;
    //cin >> Nr_3;
    //generatoare4(Nr_3);

    int Nr_4;
    //cin >> Nr_4;
    //cout << baza5(Nr_4);

    int Nr_5, Nr_6;
    //cin >> Nr_5 >> Nr_6;
    //cout << putere7(Nr_5, Nr_6);

    int Nr_7;
    //cin >> Nr_7;
    //cout << suma8(Nr_7);

    int Nr_8;
    //cin >> Nr_8;
    //cout << pDoi12(Nr_8);
}