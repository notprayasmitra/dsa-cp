#include <bits/stdc++.h>
using namespace std;

int main() {
	int a = 2 * 3; 		// multiplication operator
	int b = 3 / 2; 		// division operator
	float c = 3 / 2; 	// in C++17 even if the variable is of the float data type, if the
						// values are integer, then the result is also integer.
	float d = 3.0 / 2.0;	// result is float since values are also in float data type

	int e = 2 + 3; // addition operator
	int f = 2 - 3; // subtraction operator

	int g = 25 % 7; // modulus operator gives the remainder

	cout << a << " " << b << " " << c << " " << d << endl;
	cout << e << " " << f << endl;
	cout << g;

	return 0;
}