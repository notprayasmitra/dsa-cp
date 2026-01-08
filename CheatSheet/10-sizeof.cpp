// SIZE OF FUNCTION/OPERATOR IN C++

#include <iostream>
using namespace std;

int main() {
	
	// the following functions or operators are used to calculate
	// how many bits each of the data types occupies in memory

	cout << "Char: " << sizeof(char) << endl;
	cout << "Int: " << sizeof(int) << endl;
	cout << "Float: " << sizeof(float) << endl;
	cout << "Double: " << sizeof(double) << endl;
	cout << "Bool: " << sizeof(bool) << endl;
	cout << "Long: " << sizeof(long) << endl;
	cout << "Long Long: " << sizeof(long long);

	return 0;
}