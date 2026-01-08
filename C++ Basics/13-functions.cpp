// FUNCTIONS IN C++ - HOW TO CREATE THEM, USE THEM, ETC.

#include <iostream>
using namespace std;

// ===============================
// FUNCTION DECLARATION
// ===============================

// here we declare a function named 'add'
// the function expects two integer arguments
// and it will return an integer value
int add(int a, int b);

// here we declare a function that does not return any value
// the keyword 'void' indicates no return value
void greet(string name);

int main() {

    int x = 5;
    int y = 10;

    // here we call the function 'add'
    // the values of x and y are passed as arguments
    // x is copied into parameter 'a' and y is copied into parameter 'b'
    int result = add(x, y);

    // the returned value from add() is stored in variable 'result'
    cout << "Sum is: " << result << endl;

    // here we call the greet() function
    // the value stored in 'name' is passed to the function
    greet("Prayas");

    return 0;
}

// ===============================
// FUNCTION DEFINITION
// ===============================

int add(int a, int b) {
    // when the function is called, copies of the arguments
    // are stored in parameters 'a' and 'b'
    // these parameters are local to this function only

    int sum = a + b;
    // here we use the passed values to perform addition

    return sum;
    // the return statement sends the value of 'sum'
    // back to the place where the function was called
}

void greet(string name) {
    // the argument passed during the function call
    // is copied into the parameter 'name'

    cout << "Hello, " << name << "!" << endl;
    // since the return type is void, nothing is returned
}