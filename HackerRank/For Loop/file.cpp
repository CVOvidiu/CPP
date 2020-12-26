//https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

#include<iostream>
#include<vector>

using namespace std;

vector<string> lowers = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

int main() {
	unsigned a, b;
	cin >> a >> b;

	int n;

	for (n = a; n <= b; n++) {

		if (n < 10)
			cout << lowers[n] << endl;
		else if (n > 9 && n % 2 == 0)
			cout << "even" << endl;
		else if (n > 9 && n % 2 != 0)
			cout << "odd" << endl;
	}
}