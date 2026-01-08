#include <iostream> // This is a header file
#include <math.h> // This is also a header file

// Header files are basically files which contain various functions, such as the
// <iostream> header file contains the stream operators which are required for I/O
// functions.
// Similarly, the <math.h> function contains the sqrt() function required in this
// program.

int main() {
	std::cout << "Hello World!" << std::endl;
	std::cout << sqrt(4); // This function here requires the <math.h> header file

	// :: is the scope resolution operator

	return 0;
}