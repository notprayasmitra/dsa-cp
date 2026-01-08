// OPERATOR PRECEDENCE
/*

()  
*, /, %  
+, -  
<, <=, >, >=  
==, !=  
&&  
||  
=

*/

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    // Equality operator - if 'a' is equal to 'b'
    cout << "a == b : " << (a == b) << endl;   // false (0)

    // Not equal operator
    cout << "a != b : " << (a != b) << endl;   // true (1)

    // Less than
    cout << "a < b  : " << (a < b) << endl;    // true

    // Greater than
    cout << "a > b  : " << (a > b) << endl;    // false

    // Less than or equal to
    cout << "a <= b : " << (a <= b) << endl;   // true

    // Greater than or equal to
    cout << "a >= b : " << (a >= b) << endl;   // false

    return 0;
}
