//https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include<iostream>
#include<math.h>

using namespace std;

void update(int *a, int *b) {
	
	int c = *a;
	int d = *b;

	*a = c + d;
	*b = fabs(c - d);
}

int main() {
	int a, b;
	cin >> a >> b;

	update(&a, &b);

	cout << a << endl;
	cout << b << endl;
}