#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 10;

    // Logical AND (&&)
    // True only if BOTH conditions are true
    cout << "(x > 0 && y > 0) : " << (x > 0 && y > 0) << endl;

    // Logical OR (||)
    // True if AT LEAST ONE condition is true
    cout << "(x > 0 || y < 0) : " << (x > 0 || y < 0) << endl;

    // Logical NOT (!)
    // Reverses the result
    cout << "!(x > y)        : " << !(x > y) << endl;

    return 0;
}
