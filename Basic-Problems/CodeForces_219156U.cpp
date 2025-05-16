#include <iostream>
#include <cstdio> // For printf (C-style formatted output)
using namespace std;

/*
    ================================
    Program Description:
    ----------------------------
    This program takes a floating-point number as input and checks whether it has a decimal (fractional) part.

    If the number has a decimal part (i.e., it's not a whole number), it prints:
        "float <integer part> <decimal part up to 3 digits>"

    If it is a whole number, it prints:
        "int <integer part>"

    ================================
    Algorithm:
    1. Read a floating-point number `n` from input.
    2. Extract the integer part by converting `n` to an int (truncates the decimal).
    3. Subtract the integer part from the original number to get the decimal (fractional) part.
    4. If the decimal part is not zero:
         - Print "float", followed by the integer part and the decimal part (with 3 decimal places).
       Else:
         - Print "int", followed by the integer part.
*/

int main() {
    float n;
    cin >> n;

    int i = int(n);        // Extract integer part
    float r = n - i;       // Extract decimal part

    if (r != 0.0)
        printf("float %d %.3f\n", i, r); // Print float with 3 decimal places
    else
        printf("int %d\n", i);          // Print integer if no decimal part

    return 0;
}
