#include <iostream>
using namespace std;

int main() {

    // ===============================
    // IF STATEMENT
    // ===============================

    int x = 10;

    if (x > 0) {
        // here we check whether the value stored in variable 'x' is greater than 0
        // if the condition is true, the code inside the if block will execute
        cout << "x is positive" << endl;
    }

    // ===============================
    // IF–ELSE STATEMENT
    // ===============================

    if (x % 2 == 0) {
        // here we check whether x is divisible by 2
        // if the remainder is 0, x is an even number
        cout << "x is even" << endl;
    } else {
        // this block executes when the if condition becomes false
        // which means x is not divisible by 2
        cout << "x is odd" << endl;
    }

    // ===============================
    // SWITCH STATEMENT
    // ===============================

    int day = 3;

    switch (day) {
        // the switch statement compares the value of 'day'
        // with each case value one by one

        case 1:
            // this block runs if day == 1
            cout << "Monday" << endl;
            break;
            // break stops further case execution

        case 2:
            // this block runs if day == 2
            cout << "Tuesday" << endl;
            break;

        case 3:
            // this block runs if day == 3
            cout << "Wednesday" << endl;
            break;

        default:
            // this block runs if none of the above cases match
            cout << "Invalid day" << endl;
    }

    // ===============================
    // FOR LOOP
    // ===============================

    for (int i = 1; i <= 3; i++) {
        // initialization: i = 1 runs once at the start
        // condition: loop runs as long as i <= 3 is true
        // increment: i++ increases the value of i after each iteration
        cout << i << " ";
    }
    cout << endl;

    // ===============================
    // WHILE LOOP
    // ===============================

    int j = 1;

    while (j <= 3) {
        // the condition is checked before entering the loop body
        // if j <= 3 is true, the loop continues
        cout << j << " ";
        j++;
        // incrementing j is important to avoid infinite loop
    }
    cout << endl;

    // ===============================
    // DO–WHILE LOOP
    // ===============================

    int k = 1;

    do {
        // the loop body executes at least once
        // because the condition is checked after execution
        cout << k << " ";
        k++;
    } while (k <= 3);

    cout << endl;

    // ===============================
    // BREAK STATEMENT
    // ===============================

    for (int n = 1; n <= 5; n++) {
        // this loop runs from 1 to 5
        if (n == 3) {
            // when n becomes equal to 3
            // the break statement immediately terminates the loop
            break;
        }
        cout << n << " ";
    }
    cout << endl;

    // ===============================
    // CONTINUE STATEMENT
    // ===============================

    for (int m = 1; m <= 5; m++) {
        // this loop runs from 1 to 5
        if (m == 3) {
            // when m is equal to 3
            // continue skips the current iteration
            // and moves to the next loop iteration
            continue;
        }
        cout << m << " ";
    }
    cout << endl;

    // ===============================
    // GOTO STATEMENT
    // ===============================

    int p = 1;

start:
    // this label marks a position in the program

    if (p <= 3) {
        // if p is less than or equal to 3
        cout << p << " ";
        p++;
        // goto transfers control back to the label 'start'
        goto start;
    }

    return 0;
}
