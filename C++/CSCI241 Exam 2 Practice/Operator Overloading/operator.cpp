#include <iostream>

/**
 *  @note Some restrictions with operator overloading is the precedence and associativity of an operator
 *  (wether the operator is applied to the right-to-left or left-to-right) cannot be changed by overloading.
 *  Parentheses can be used to force the order of evaluation of overloaded operatorsin an expression.
 *
 *  @note It is not possible to change the number of operands that an operator can take. The ternary operator can not be overloaded ?:
 *
 *  @note Only the existing operators can be overloaded
 *
 *  @note Operator overloading only works with objects of user-defined types (classes, or structs) or with a mixture of an object of a user-defined type and a built in type
 *
 *  @note Operators like (),[], ->, any any assignment operator needs to be overloaded as a member function of the class for which they are overloaded
 *
 *  @note For operators other than those they can be overloaded operator functions can be member functions or standalone functions that are not part of a class
 *
 *  @note When an operator function is implemented as a member, the leftmost operand must be a class object (or a reference to a class object ) of the operators class
 *
 *  @note If the left operand of an overloaded operator is an object of a C++ standalone library class or not an object, then the operator function must be implemented
 *  as as standalone function. A standalone operator function is usually made a friend of the class to improve performance by avoiding the overhead of calls to accessor and mutator methods.
 *
 *  @note YOU CAN MAKE A OVERLOADED OPERATOR FUNCTION IF ITS LEFT OPERAND is not an object or is an object of a different class.
 *
 */

class Numbers
{
private:
    int x;
    int y;
};