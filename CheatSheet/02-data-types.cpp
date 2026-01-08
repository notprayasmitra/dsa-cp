#include <bits/stdc++.h>
using namespace std;

int main() {
	// char, int, float, double, bools, are the basic data types

	int n = 10; // Here a variable named 'num' is created of the integer data type
	char c = 'a';
	double d = 3.9;
	int m = d;
	bool b = false;

	cout << n << " " << c << " " << d << " " << m << " " << b << endl;
	// 'endl' creates a new line

	// Notice that when the variable 'm' was given the value of 'd' which is of the
	// double data type, the value of 'd' (3.9) got truncated to the nearest integer.
	// In C++, no matter how close the decimal is to reaching a whole number, when
	// truncation occurs, the decimal part is always removed and the integer part is written.

	// In C++, 0 is considered false, and all the other values (ex: -123, 123, 444),
	// considered true.

	return 0;
}