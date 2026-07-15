// STRINGS IN C++

#include <iostream>
#include <string>
using namespace std;

int main() {

    // ===============================
    // DECLARING AND INITIALIZING STRINGS
    // ===============================

    string s1 = "Hello";
    // here we declare a string variable named 's1'
    // the string stores a sequence of characters
    // the value "Hello" is stored as a single string object

    string s2;
    // here we declare a string without initializing it
    // currently, s2 is an empty string

    // ===============================
    // TAKING STRING INPUT
    // ===============================

    cout << "Enter your name: ";
    cin >> s2;
    // cin reads input until it encounters a space
    // so this method is suitable for single-word input

    // ===============================
    // DISPLAYING STRINGS
    // ===============================

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;

    // ===============================
    // STRING CONCATENATION
    // ===============================

    string s3 = s1 + " " + s2;
    // here we use the + operator to join multiple strings
    // a space is added between the two strings
    // the final combined string is stored in 's3'

    cout << "Concatenated string: " << s3 << endl;

    // ===============================
    // FINDING STRING LENGTH
    // ===============================

    int len = s3.length();
    // length() returns the number of characters in the string
    // spaces are also counted as characters

    cout << "Length of string: " << len << endl;

    // ===============================
    // ACCESSING CHARACTERS IN A STRING
    // ===============================

    cout << "First character: " << s3[0] << endl;
    // string indexing starts from 0, just like arrays
    // s3[0] accesses the first character of the string

    // ===============================
    // MODIFYING A CHARACTER
    // ===============================

    s3[0] = 'h';
    // here we modify the first character of the string
    // 'H' is replaced with 'h'

    cout << "Modified string: " << s3 << endl;

    // ===============================
    // USING getline() FOR FULL SENTENCE INPUT
    // ===============================

    cin.ignore();
    // this clears the input buffer
    // it removes any leftover newline character

    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);
    // getline() reads the entire line including spaces
    // the input is stored in the string variable 'sentence'

    cout << "Sentence: " << sentence << endl;

    // ===============================
    // COMPARING STRINGS
    // ===============================

    if (s1 == "Hello") {
        // the == operator checks whether two strings are equal
        cout << "s1 is equal to Hello" << endl;
    }

    return 0;
}
