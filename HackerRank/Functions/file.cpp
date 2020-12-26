//https://www.hackerrank.com/challenges/c-tutorial-functions/problem

#include <iostream>

using namespace std;

int maxim(int a, int b, int c, int d) {
	return max(a, max(b, max(c, d)));
}

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int ans = maxim(a, b, c, d);

	cout << ans;
}