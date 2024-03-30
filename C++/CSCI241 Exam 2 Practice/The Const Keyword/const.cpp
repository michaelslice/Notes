#include <iostream>

int main()
{
    /*
    The const keyword is commonly used to pointers to restrict the access of the pointer

    1. Dereference the pointer to get the value it points to
    2. Subscript the pointer to get the value it points to
    3. Use pointer arithmetic notation and the dereference operator with the pointer to get the value it points to.
    4. Dereference the pointer to change the value it points to
    5. Subsript the pointer to change the value it points to
    6. Using pointer arithmetic notation and dereference operator with the pointer to get the value it points to
    7. Change the address stored in the pointer (does not work with an array name )

    */

    // This prevents you from changing the value of the variable that the pointer points to
    char const *p; // P is a pointter to a constant char
    /*
    ALLOWS
    1, through 3, and 7
    DOSE NOT ALLOW
    4, through 6
    */

    // This prevents you from changing the address stored in the pointer variable

    // char *const p; // Const pointer to non-constant data

    /*
    ALLOWS
    1, through 6
    DOSE NOT ALLOW
    7
    */

    // This prevents you from changing the value of the variable that the pointer points to and also prevents you from changing the address stored in the pointer variable

    // const char *const p; // Constant pointer to constant data

    /*
    ALLOWS
    1, through 3
    DOSE NOT ALLOW
    4, through 7
    */

    // References and The Const Keyword
    // The const keyword also frequently appears in the declaration of reference variables. It is used to restrict what can be done with the reference

    // LIST OF THINGS YOU CAN DO WITH REFERENCES
    // 1. Use the reference variable to get the value of the variable it refers to
    // 2. Use the reference variable to change the value of the variable it refers to

    // Reference to constant data: This prevents you from changing the value of the variable that the reference variable refers to
    const std::string y = "TEST";
    const std::string &s = y;
    // ALLOWS
    // 1. from above
    // DOES NOT ALLOW
    // 2. from above
}