// ARRAYS IN C++ - HOW TO CREATE THEM, USE THEM, MANIPULATE THEM, ETC.

#include <iostream>
using namespace std;

int main() {

    // ===============================
    // DECLARING AND INITIALIZING AN ARRAY
    // ===============================

    int arr[5] = {10, 20, 30, 40, 50};
    // here we declare an array named 'arr'
    // the data type is int, so the array can store integer values
    // the size of the array is 5, meaning it can store 5 elements
    // the values are stored in contiguous memory locations

    // ===============================
    // ACCESSING ARRAY ELEMENTS
    // ===============================

    cout << "First element: " << arr[0] << endl;
    // array indexing starts from 0
    // arr[0] accesses the first element of the array

    cout << "Third element: " << arr[2] << endl;
    // arr[2] accesses the third element of the array

    // ===============================
    // MODIFYING ARRAY ELEMENTS
    // ===============================

    arr[1] = 25;
    // here we modify the second element of the array
    // the value 20 is replaced with 25

    // ===============================
    // TRAVERSING AN ARRAY USING FOR LOOP
    // ===============================

    cout << "Array elements:" << endl;

    for (int i = 0; i < 5; i++) {
        // the loop variable 'i' starts from 0
        // the loop runs until i is less than the size of the array
        // i is used as the index to access each element
        cout << arr[i] << " ";
    }
    cout << endl;

    // ===============================
    // CALCULATING SUM OF ARRAY ELEMENTS
    // ===============================

    int sum = 0;
    // this variable is used to store the sum of all elements

    for (int i = 0; i < 5; i++) {
        // each element of the array is added to 'sum'
        sum += arr[i];
    }

    cout << "Sum of elements: " << sum << endl;

    // ===============================
    // FINDING THE LARGEST ELEMENT
    // ===============================

    int max = arr[0];
    // we assume the first element is the largest initially

    for (int i = 1; i < 5; i++) {
        // starting from the second element, we compare each value
        if (arr[i] > max) {
            // if a larger value is found, we update 'max'
            max = arr[i];
        }
    }

    // Similarly, the min() function can also be used to find the
    // minimum value in an array

    cout << "Largest element: " << max << endl;

    return 0;
}
