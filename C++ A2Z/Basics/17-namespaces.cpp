// NAMESPACES IN C++

#include <iostream>
using namespace std;

// ===============================
// DEFINING A NAMESPACE
// ===============================

namespace MathOperations {
    // this namespace is named 'MathOperations'
    // it is used to group related functions and variables
    // this helps avoid name conflicts in large programs

    int add(int a, int b) {
        // this function belongs to the MathOperations namespace
        // it takes two integer arguments and returns their sum
        return a + b;
    }

    int value = 10;
    // this variable also belongs to the MathOperations namespace
}

// ===============================
// DEFINING ANOTHER NAMESPACE
// ===============================

namespace PhysicsOperations {
    // this is a different namespace
    // it can have identifiers with the same name
    // without causing any conflict

    int add(int a, int b) {
        // this add() function is different from MathOperations::add()
        return a + b + 1;
    }

    int value = 20;
}

int main() {

    // ===============================
    // ACCESSING NAMESPACE MEMBERS
    // ===============================

    int sum1 = MathOperations::add(5, 3);
    // here we explicitly specify the namespace name
    // '::' is the scope resolution operator
    // it tells the compiler to look inside MathOperations

    cout << "Math add result: " << sum1 << endl;

    int sum2 = PhysicsOperations::add(5, 3);
    // this calls the add() function from PhysicsOperations

    cout << "Physics add result: " << sum2 << endl;

    // ===============================
    // ACCESSING NAMESPACE VARIABLES
    // ===============================

    cout << "Math value: " << MathOperations::value << endl;
    // accessing the variable 'value' from MathOperations namespace

    cout << "Physics value: " << PhysicsOperations::value << endl;
    // accessing the variable 'value' from PhysicsOperations namespace

    // ===============================
    // USING NAMESPACE WITH 'using' KEYWORD
    // ===============================

    using namespace MathOperations;
    // after this line, we can directly access members
    // of MathOperations without writing the namespace name

    cout << "Using namespace add: " << add(2, 2) << endl;
    // this calls MathOperations::add()

    cout << "Using namespace value: " << value << endl;
    // this refers to MathOperations::value

    return 0;
}
