//https://www.hackerrank.com/challenges/arrays-introduction/problem

#include<iostream>

using namespace std;

int main() {
    unsigned N;
    cin >> N;

    int a[1000];

    for(int i = 1; i <= N; i++) // for(int i = 0; i < N; i++)
        cin >> a[i];

    for(int j = N; j >= 1; j--) // for(int j = N - 1; j >= 0; j--)
        cout << a[j] << " ";
}