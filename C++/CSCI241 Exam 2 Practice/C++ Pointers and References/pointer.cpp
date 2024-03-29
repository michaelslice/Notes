#include <iostream>

/**
 *  @note Pointer: A reference is an alias for an existing variable... Or an alternative name for a variable.
 *
 *  Syntax: int* ref = &x;
 *
 *  @note int* : Is a new data type, a pointer that can hold the address of a int
 *
 *  @note Syntax is read as ref points to x, or ref contains the address of x
 *
 *  DIFFERENT SYNTAX FOR POINTERS TO OBJECTS
 *
 *  pointer-name: Address of the object pointed to by pointer-name
 *
 *  *pointer-name: Value of the object pointed to by pointer-name
 *
 *  (*pointer-name).member-name: Syntax to access the data member, member-name of the object pointed to by pointer-name
 *  *pointer-name->member_name: Alternative syntax to access a data member, memberbame through a point pointed to by pointer-name
 *
 *
 */

int main()
{
    // Pointer: Holds the memory address of another variable
    int x = 12;
    int *ans = &x;                            // Using & we can put the address of a variable to a pointer
    std::cout << "Pointer: " << *ans << '\n'; // To use a pointer we must dereference the pointer using *

    // Pointer to constant data: This is a pointer that cannot change the value of the data pointed to
    int y = 12;
    const int *ptr_to_const = &y;

    // Const pointer: Is a pointer whose memory address cannot be changed, it will always point to the same location
    int z = 12;
    int const *const_ptr = &z;

    // Const Pointer to constant data
    int a = 12;
    const int const *const_ptr_to_const = &a;
}