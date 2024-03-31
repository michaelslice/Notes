#include <iostream>

/**
 *  @note To understand this in C++, 
 * 
 *  1. Each object in cpp gets its own copy of each of the 
 *  non-static data members of the class.
 * 
 *  2. All objects of a class share a single copy of each static data member of the class 
 *  the class. 
 * 
 *  3. A single copy of each compiled member function definition is stored
 *  in the code segment of the C++ program.
 * 
 *  The compiler supplies a special implicit pointer named this that allows a member function 
 *  to access the non-static data members. The this pointer contains the address
 *  of the object that called the member function.
 * 
 *  The this pointer is passed as an extra hidden argument whenever a non-static
 *  member function is called and is available as a local variable within the body
 *  of all non-static member functions
 * 
*/

class User
{
private:
    int x;
public:
    int get_x(int x);
};

int User::get_x(int x)
{
    // 'this' is a pointer that holds the memory address of the current object
    // instance, it can be used to refer to the current instance
    this->x = x; // Used to differentiate between member variable 'x' and the parameter x
}