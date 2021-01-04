#include <iostream>
using namespace std;

int main() {
	int n, i, x;

	cin >> n;

	x = n / 2 + 1;
	if(n % 2 == 0)
		cout<<"NU ESTE NOROCOS";
	else
		for(i = x; i < x + n; i++)
			cout << i << " ";
}
