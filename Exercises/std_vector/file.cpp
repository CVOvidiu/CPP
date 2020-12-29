/*
    2 vectori, arata fiecare vector
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n, k;
    cin >> n; // 2

    vector<int> a[n];

    for(int i = 0; i < n; i++) {
        // Pentru fiecare vector ai lungimea si componentele

        int o; // lungimea fiecarui vector citita la inceput si dupa sunt componentele vectorului, o - fiecare componenta pe rand
        cin >> k; 

        for(int j = 0; j < k; j++) { // plimbare prin fiecare vector
            cin >> o;
            a[i].push_back(o); // il legam la spate pe o in functie de vectorul curent
        }
    }

    cout << "=====LA AFISARE=====";

    for(int i = 0; i < k; i++) { // cu k iese in afara si arata si memoria dar tot se observa matricea
        for(int j = 0; j < k; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}