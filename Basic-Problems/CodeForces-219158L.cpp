#include <iostream>
#include <string>

using namespace std;

/*
    Problem:
    -------------
    Given the full names of two people (assumed to be in the format "FirstName LastName"),
    determine if they are brothers by checking if they share the same last name.

    Solving Algorithm:
    -------------------
    1. Read two full names using getline() to capture spaces.
    2. Find the position of the space character in each name (assumes only one space).
    3. Extract the last names using substr() from the character after the space.
    4. Compare the two last names:
        - If they are equal, print "ARE Brothers".
        - Otherwise, print "NOT".
*/

int main() {
    string fname1;  // First full name (e.g., "John Smith")
    string fname2;  // Second full name (e.g., "Mike Smith")

    // Read full names from user input
    getline(cin, fname1);
    getline(cin, fname2);

    // Find the space index to separate first and last names
    size_t index1 = fname1.find(" ");
    size_t index2 = fname2.find(" ");

    // Extract last names using substr
    string lname1 = fname1.substr(index1 + 1);
    string lname2 = fname2.substr(index2 + 1);

    // Compare last names to determine if they are brothers
    if (lname1 == lname2) {
        cout << "ARE Brothers\n";
    } else {
        cout << "NOT\n";
    }

    return 0;
}
