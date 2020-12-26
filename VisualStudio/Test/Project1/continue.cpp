#include <iostream>

using namespace std;

int main() {
	for(int i = 1; i <= 5; i++) {
		if (i % 2 == 0)
			continue; // skip next commands
		cout << "Hello" << endl;
		cout << i << endl;
	}

	cin.get();
}