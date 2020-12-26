// https://www.hackerrank.com/challenges/variable-sized-arrays/problem

/*
    Matrice? 

    Explicatie : Un vector are in componenta lui un numar de subvectori dat de indexul vectorului principal
        a - vectorul de subvectori
        a[i] - un subvector al lui a (vector referinta al lui a[i])

    n - numarul de subvectori
    k - lungimea ficarui subvector n (se schimba)
    q - numarul queryurilor
    i - indexul vectorului a
    j - indexul vectorului referinta al lui a[i]

    a[i] - referinta fiecarui vector

    1: n & q
    2: k & vector[1]
    3: k & vector[2]
        ...
    q1: i1 & j1
    q2: i2 & j2
        ...

*/

#include<iostream>

using namespace std;

int main() {

    int n, q, k;
    cin >> n >> q;
    long a[n][q];

    for(int i = 0; i < n; i++) { 
        cin >> k;

        for(int j = 0; j < k; j++) {
            cin >> a[i][j];
        }
    }

    for(int r = 0; r < q; r++) {
        int i, j;
        cin >> i >> j;

        cout << a[i][j] << endl;
    }
}