// OTHER USED OPERATORS IN C++

#include <iostream>
using namespace std;

/* A simple class to demonstrate member access operators */
class Student {
public:
    int age;

    void showAge() {
        cout << "Age: " << age << endl;
    }
};

int main() {

    // TERNARY OPERATOR ( ? : )
    int a = 10, b = 20;

    // If condition is true, result = a, else result = b
    int maxValue = (a > b) ? a : b;

    cout << "Max value is: " << maxValue << endl;

    // TYPE CASTING
    int x = 5, y = 2;

    // Without type casting (integer division)
    cout << "x / y without cast: " << x / y << endl;

    // Type casting int to float for accurate division
    float result = static_cast<float>(x) / y;
    cout << "x / y with cast: " << result << endl;


    // POINTER OPERATORS (& and *)
    int num = 100;

    // & gives the address of a variable
    int* ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << ptr << endl;

    // * dereferences the pointer (accesses value at address)
    cout << "Value using pointer: " << *ptr << endl;


    // MEMBER ACCESS OPERATORS (. and ->)
    Student s1;
    s1.age = 18;

    // Dot operator (.)
    s1.showAge();

    // Pointer to object
    Student* sptr = &s1;

    // Arrow operator (->) used with pointer to object
    sptr->age = 20;
    sptr->showAge();

    return 0;
}
