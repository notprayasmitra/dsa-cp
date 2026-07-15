// POINTERS IN C++

#include <iostream>
using namespace std;

int main() {

    // ===============================
    // DECLARING A NORMAL VARIABLE
    // ===============================

    int x = 10;
    // here we declare an integer variable 'x'
    // the value 10 is stored in some memory location

    // ===============================
    // DECLARING A POINTER
    // ===============================

    int* ptr;
    // here we declare a pointer variable named 'ptr'
    // this pointer is meant to store the address of an integer variable

    // ===============================
    // STORING ADDRESS IN POINTER
    // ===============================

    ptr = &x;
    // '&x' gives the memory address of variable 'x'
    // this address is stored inside the pointer 'ptr'
    // now ptr is pointing to x

    // ===============================
    // ACCESSING VALUES
    // ===============================

    cout << "Value of x: " << x << endl;
    // this directly prints the value stored in x

    cout << "Address of x: " << &x << endl;
    // this prints the memory address of x

    cout << "Value of ptr: " << ptr << endl;
    // this prints the address stored inside the pointer
    // which is the address of x

    cout << "Value pointed by ptr: " << *ptr << endl;
    // '*' is the dereference operator
    // it accesses the value present at the address stored in ptr
    // so it prints the value of x

    // ===============================
    // MODIFYING VALUE USING POINTER
    // ===============================

    *ptr = 20;
    // here we change the value present at the address stored in ptr
    // since ptr points to x, the value of x becomes 20

    cout << "Updated value of x: " << x << endl;

    // ===============================
    // POINTER ARITHMETIC
    // ===============================

    int arr[3] = {10, 20, 30};
    // an array name stores the address of the first element

    int* p = arr;
    // here p stores the address of arr[0]

    cout << "First element: " << *p << endl;
    // dereferencing p gives the first element

    p++;
    // moving the pointer to the next memory location
    // it now points to the second element of the array

    cout << "Second element: " << *p << endl;

    // ===============================
    // NULL POINTER
    // ===============================

    int* q = NULL;
    // a null pointer does not point to any valid memory
    // it is used to avoid accidental access to garbage values

    return 0;
}
