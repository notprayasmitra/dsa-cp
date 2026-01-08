// BITWISE OPERATORS IN C++

#include <iostream>
using namespace std;

int main() {
    int a = 5;   // Binary: 0101
    int b = 3;   // Binary: 0011

    // Bitwise AND (&)
    // 0101 & 0011 = 0001 (1)
    cout << "a & b  : " << (a & b) << endl;

    // Bitwise OR (|)
    // 0101 | 0011 = 0111 (7)
    cout << "a | b  : " << (a | b) << endl;

    // Bitwise XOR (^)
    // 0101 ^ 0011 = 0110 (6)
    cout << "a ^ b  : " << (a ^ b) << endl;

    // Bitwise NOT (~)
    // Flips all bits (two's complement)
    cout << "~a     : " << (~a) << endl;

    // Left shift (<<)
    // 5 << 1 → 1010 (10)
    cout << "a << 1 : " << (a << 1) << endl;

    // Right shift (>>)
    // 5 >> 1 → 0010 (2)
    cout << "a >> 1 : " << (a >> 1) << endl;

    return 0;
}
