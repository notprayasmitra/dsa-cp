#include <bits/stdc++.h>
using namespace std;

int main() {
	int a = 5;
	a = a + 1; 	// In C++, when we do this a = a + 1, the 'a' on the RHS, has the value that 
				// is assigned to it
	
	cout << a << endl;
	cout << ++a << endl; // pre-increment operator - increase then use
	cout << a++ << endl; // post-increment operator - use then increase
	cout << a << endl;

	// Similarly

	a = a - 1;
	cout << a << endl;
	cout << --a << endl;
	cout << a-- << endl;
	cout << a << endl;

	return 0;
}