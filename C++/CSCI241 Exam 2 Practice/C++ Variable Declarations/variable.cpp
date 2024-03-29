#include <iostream>
#include <string>
/**
 *  @note ALGORITHM for reading variable declarations
 *
 *  1. Start at the variable name. Remember this location
 *
 *  2. Read to the right as far as possible, stopping if a right parenthesis ')' is encountered. Remember this location
 *
 *  3. Read to the left as far as possible, stopping if a left parenthesis '(' is encountered. Remember this location
 *
 *  4. Move out by one level of parenthesis as needed and go to step 2
 *
 */

int main()
{
    int x;      // x is a int
    int *x;     // x is a pointer to a int
    int &x = x; // x is a reference to a int
    char ch;    // ch is char
    char *str;  // str is a pointer to a char
}