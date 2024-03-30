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
    std::string example;

    int x;                      // x is a int
    int *x;                     // x is a pointer to a int
    int &x = x;                 // x is a reference to a int
    char ch;                    // ch is char
    char *str;                  // str is a pointer to a char
    const char *str;            // str is a const pointer to a char
    char const *str;            // str is a pointer to a constant char
    char *const p = str;        // p is a const pointer to a char. "Here it is the pointer that is constant, not the character to which it points to "
    std::string &str = example; // str is a reference to a string
    char text[31];              // text is an array of 31 char
    int numbers[0];             // numbers is an array of int
    int(*numbers[0]);           // numbers is a pointer to an array of int

    // Test Examples
    const char *const str1 = "TEST";
    const char *const str2 = "TEST";
    const char *const(&x)[2] = {str1, str2}; // x is a referene to an arary of size 2, where each element of the array is a constant pointer to a constant character
}