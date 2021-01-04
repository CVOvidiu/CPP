/*
Într-un parc sunt n alei. Pe fiecare alee sunt n arbori. Fiecare arbore are n crengi.
Pe fiecare creanga sunt n cuiburi. În fiecare cuib sunt n păsări. Câte păsări sunt în parc?
*/

#include<iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

  cout << n * n * n * n * n;
}
