// ASSIGNMENT OPERATORS IN C++

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a = 5; // this is the basic assignment operator used to assign values to a var
	cout << a << endl;

	// Basically, what the +=, -=, /=, etc. do is that they first perform the arithmetic
	// operation on the variable based on the symbol, then assign the result value to the
	// same variable

	a += 3; // this is the 'add & assign value' operator 
	cout << a << endl;

	a -= 3; // this is the 'subtract & assign value' operator 
	cout << a << endl;

	a *= 3; // this is the 'multiply & assign value' operator 
	cout << a << endl;

	a /= 3; // this is the 'divide & assign value' operator 
	cout << a << endl;

	a %= 3; // this is the 'mod & assign value' operator 
	cout << a << endl;

	return 0;
}