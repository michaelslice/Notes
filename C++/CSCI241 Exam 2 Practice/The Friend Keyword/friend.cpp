#include <iostream>

/**
 *  @note The friend keyword allows you to designate a function or another class 
 *  as a friend of your class.
 * 
 *  @note A friend of a class has direct access to the private and protected members of the class,
 *  eliminating the need to call accessor and mutator methods.
 * 
*/

class Beta;

class Alpha
{
private:

    friend class Beta; // Declare the Beta class to be a friend of Alpha
    friend int add(int x); // Friend function of the class Alpha

    int x;
public:
    int get_x(int x);
};