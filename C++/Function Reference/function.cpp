#include <iostream>

// Passing variable by value
int function_value(int x)
{
    return x * 2;
}

// Passing variable by address
int function_pointer(int *x)
{
    return *x *= 2; // Changing the actual passed in value
}

// Pass variable by reference
int function_reference(int &x)
{
    return x *= 2;
}

int main()
{
    int x{10};

    int value = function_value(x); // Passed by value

    std::cout << value << '\n';
    std::cout << x << '\n';

    int pointer = function_pointer(&x);
    std::cout << x << '\n'; // The value of x is changed by using pass by address

    int reference = function_reference(x);
    std::cout << x << '\n';

    return 0;
}

/**
 *  @note It is common to pass C++ objects by reference even when a function does not need to change the original object in the calling routine.
 *  Passing objects by value is expensive, because you are recreating variables on the stack, (making doubles of used variables).
 *
 *  @note Passing by reference saves memory and times.
 *
 *  @note You cannot pass constant objects by reference in cpp.
 *  But you can instead use a reference to a constant variable
 *
 */

/**
 *  @note General Rule: If you want a function or a method to be able to change a C++ object pass it by reference
 *
 *  @note Passing by reference saves memory and times.
 *
 *  @note You cannot pass constant objects by reference in cpp.
 *  But you can instead use a reference to a constant variable
 *
 */