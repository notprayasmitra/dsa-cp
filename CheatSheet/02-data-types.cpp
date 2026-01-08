#include <bits/stdc++.h>
// The <bits/stdc++.h> header file contains a lot of the mostly used header files in C++
// Though this header file is not universally accepted since it is a GCC convention, hence
// this header file works only with the GCC/G++ compiler

using namespace std;

int main() {
	// char, int, float, double, bools, are the basic data types
	// long int, long long int (abbr. ll) are used to create integer data types with
	// larger values
	// string data type can be used to create a variable to hold a string

	int n = 10; // Here a variable named 'num' is created of the integer data type
	char c = 'a';
	double d = 3.9;
	int m = d;
	bool b = false;

	cout << n << " " << c << " " << d << " " << m << " " << b << endl;
	// 'endl' creates a new line

	// Notice that when the variable 'm' was given the value of 'd' which is of the
	// double data type, the value of 'd' (3.9) got truncated to the nearest integer
	// In C++, no matter how close the decimal is to reaching a whole number, when
	// truncation occurs, the decimal part is always removed and the integer part is written

	// In C++, 0 is considered false, and all the other values (ex: -123, 123, 444),
	// considered true

	string s = "pizza";
	long int nm = 12345;
	long long int mn = 123456789;

	// long long int mn == long long mn

	long long mnm = 123456789;

	cout << s << " " << nm << " " << mn << " " << mnm << endl;
	return 0;
}