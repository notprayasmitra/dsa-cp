// TYPE CASTING IN C++

#include <iostream>
using namespace std;

int main() {

    // ===============================
    // IMPLICIT TYPE CASTING
    // ===============================
    
    int a = 10;

    double b = a;
    // here the variable 'b' gets the value of variable 'a'
    // 'a' is of type int, but 'b' is of type double
    // so the compiler automatically converts 10 to 10.0

    char c = 65;
    // here we assign the value 65 to variable 'c'
    // 'c' is of type char, so the integer 65 is converted
    // into its corresponding ASCII character, which is 'A'

    cout << "Implicit Type Casting:" << endl;
    cout << b << " " << typeid(b).name() << endl; // typeid().name() gives us the data type
    cout << c << " " << typeid(c).name() << endl; // of the variable in the given field

    // ===============================
    // EXPLICIT TYPE CASTING
    // ===============================

    double x = 9.8;

    int y = (int)x;
    // here the value of 'x' is explicitly converted from double to int
    // the decimal part (.8) is removed, so y becomes 9
    // this is the old C-style casting, harder to debug and unsafe

    int z = static_cast<int>(x);
    // this is another way of explicit type casting in C++
    // static_cast<int> forces the compiler to convert
    // the double value into an integer
    // this is C++ explicit casting and safer to use

    cout << "\nExplicit Type Casting:" << endl;
    cout << y << endl;
    cout << z << endl;

    int p = 5, q = 2;

    double result = (double)p / q;
    // normally p / q would perform integer division
    // by casting 'p' to double, the entire expression
    // becomes floating-point division

    cout << "\nCasting in Expression:" << endl;
    cout << result << endl;

    return 0;
}
