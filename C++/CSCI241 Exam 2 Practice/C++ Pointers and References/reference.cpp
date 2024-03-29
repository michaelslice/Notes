#include <iostream>

/**
 *  @note Reference: A reference is an alias for an existing variable... Or an alternative name for a variable.
 *
 *  Syntax: int& ref = x;
 *
 *  @note Any change made to ref will affect x, and vice versa
 */

int main()
{
    int x = 12;

    int &ans = x; // Reference Type

    std::cout << "Value of x: " << x << '\n';
    std::cout << "Address of operator: " << &x << '\n';
}