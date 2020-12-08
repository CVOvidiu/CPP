/*
OPTIUNEA 1 : Afiseaza tabelul actualizat.
OPTIUNEA 2 : Aranjeaza angajatii alfabetic dupa job, iar in categoria fiecarui job, dupa salariu.
OPTIUNEA 3 : Afisarea angajatilor de sex masculin si totalul lor.
OPTIUNEA 4 : Afiseaza totalul de copii dintr-un job citit de la tastatura.
OPTIUNEA 5 : Schimba salariul unui job citit de la tastatura.
OPTIUNEA 6 : Afisarea angajatilor care au cel mai mare salariu.
OPTIUNEA 7 : Inchiderea aplicatiei.
*/

#include<iostream>
#include<fstream>
#include<iomanip>
#include<string.h>

using namespace std;

int main() {

    ifstream in("firma.in");

    struct angajat{
        char Nume[30], Sex[10], Job[30];
        int nr_Copii, Salariu;
    };

    angajat Angajat[100], aux_Angajat;

    int nr_Angajati;

    in >> nr_Angajati;

    for(int i = 1; i <= nr_Angajati; i++)
        in >> Angajat[i].Nume >> Angajat[i].Sex >> Angajat[i].nr_Copii >> Angajat[i].Job >> Angajat[i].Salariu;

    int OPT;
    
    do {
        cout << endl;
        cout << "======= MENIU =======" << endl;
        cout << "Apasa 1 pentru tabel." << endl;
        cout << "Apasa 2 pentru ordonare dupa job si salariu." << endl;
        cout << "Apasa 3 pentru a arata tabelul si totalul angajatilor barbati." << endl;
        cout << "Apasa 4 pentru totalul de copii al unui job ales." << endl;
        cout << "Apasa 5 pentru a schimba salariul unui job ales." << endl;
        cout << "Apasa 6 pentru angajatii care au cel mai mare salariu." << endl;
        cout << "Apasa 7 pentru EXIT" << endl;
        cout << "Alege optiunea : ";
  
        cin >> OPT;
  
        if(OPT == 1) {
            cout << endl;

            cout << "======= TABEL INITIAL =======" << endl;

            for(int i = 1; i <= nr_Angajati; i++)
                cout << setw(15) << Angajat[i].Nume << setw(15) << Angajat[i].Sex << setw(15) << Angajat[i].nr_Copii << setw(15) << Angajat[i].Job << setw(15) << Angajat[i].Salariu << endl;
            
            cout << endl;
        }
        else if(OPT == 2) {
            cout << endl;

            for(int i = 1; i <= nr_Angajati - 1; i++)
                for(int j = i + 1; j <= nr_Angajati; j++)
                    if(stricmp(Angajat[i].Job, Angajat[j].Job) > 0) {
                        aux_Angajat = Angajat[i];
                        Angajat[i] = Angajat[j];
                        Angajat[j] = aux_Angajat;
                    }
                    else if(stricmp(Angajat[i].Job, Angajat[j].Job) == 0)
                        if(Angajat[i].Salariu > Angajat[j].Salariu) {
                            aux_Angajat = Angajat[i];
                            Angajat[i] = Angajat[j];
                            Angajat[j] = aux_Angajat;
                        }

            cout << "TABELUL A FOST ACTUALIZAT, PENTRU A REAFISA TABELUL APASATI 1!" << endl;

            cout << endl;
        }
        else if(OPT == 3) {
            cout << endl;

            int Total = 0;

            cout << "======= TABELUL ANGAJATILOR BARBATI =======" << endl;

            for(int i = 1; i <= nr_Angajati; i++)
                if(strcmp(Angajat[i].Sex, "M") == 0) {
                    cout << setw(15) << Angajat[i].Nume << setw(15) << Angajat[i].Sex << setw(15) << Angajat[i].nr_Copii << setw(15) << Angajat[i].Job << setw(15) << Angajat[i].Salariu << endl;
                    Total++;
                }
            cout << endl;

            cout << " TOTALUL DE ANGAJATI BARBATI : " << Total << endl;

            cout << endl;
        }
        else if(OPT == 4) {
            cout << endl;

            int Total = 0;
            char optJob[30];

            cout << "Alege jobul : " << endl;
            cin >> optJob;

            for(int i = 1; i <= nr_Angajati; i++)
                if(stricmp(Angajat[i].Job, optJob) == 0)
                    Total += Angajat[i].nr_Copii;

            cout << " TOTALUL DE COPII AL JOBULUI ALES : " << Total << endl;

            cout << endl;
        }
        else if(OPT == 5) {
            cout << endl;

            int newSum;
            char optJob[30];

            cout << "Carui job vrei sa ii schimbi salariul? : " << endl;
            cin >> optJob;

            cout << "Ce salariu vrei sa aiba jobul? : " << endl;
            cin >> newSum;

            for(int i = 1; i <= nr_Angajati; i++)
                if(stricmp(Angajat[i].Job, optJob) == 0)
                    Angajat[i].Salariu = newSum;

            cout << "TABELUL A FOST ACTUALIZAT, PENTRU A REAFISA TABELUL APASATI 1!" << endl;

            cout << endl;
        }
        else if(OPT == 6) {
            cout << endl;

            int index = 1, maxSalariu = 0;

            for(int i = 1; i <= nr_Angajati; i++)
                if(maxSalariu < Angajat[i].Salariu)
                    maxSalariu = Angajat[i].Salariu;

            cout << "======= TABELUL ANGAJATILOR CARE AU CEL MAI MARE =======" << endl;

            for(int i = 1; i <= nr_Angajati; i++)
                if(Angajat[i].Salariu == maxSalariu)
                    cout << setw(15) << Angajat[i].Nume << setw(15) << Angajat[i].Sex << setw(15) << Angajat[i].nr_Copii << setw(15) << Angajat[i].Job << setw(15) << Angajat[i].Salariu << endl;

            cout << endl;
        }
    }
    while(OPT != 7);
 
    cout << "END";
}