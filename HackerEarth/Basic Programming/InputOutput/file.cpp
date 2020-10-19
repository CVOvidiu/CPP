/*
Read different types of data from standard input, process them as shown in output format and print the answer to standard output.

Input format:
First line contains integer N.
Second line contains string S.

Output format:
First line should contain N x 2.
Second line should contain the same string S. 

Constraints:
1) 0 <= N <= 10
2) 1 <= |S| <= 15 (S = len(S))
*/

#include <iostream>
using namespace std;

int main() {
	int N;
	char S[15];

	cin >> N;
	cin >> S;

	cout << N * 2 << endl;
	cout << S << endl;
}