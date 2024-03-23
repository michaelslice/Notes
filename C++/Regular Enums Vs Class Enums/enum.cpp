#include <iostream>
#include <string>
// Difference between enum, and enum class

/**
 *
 * @note Regular enums pollute the surrounding scope, this means that the named constants can lead to naming collisions.
 *
 * @note Regular enums implicitly choose their data type, which is usally int
 *
 */

enum Person
{
    AGE,
    HEIGHT,
    GENDER,
    ETHNICITY
};

/**
 *
 * @note Enum classes encapsulate their named constants with their own scope, which prevents naming collisions.
 * The scope resolution opearator is used for this (" :: ")
 *
 * @note Enums classes allow for specifying the underlying type explicitly, thus allowing for more control over the size of the enumeration.
 *
 */
enum class Dog
{
    TYPE,
    HEIGHT,
    NAME
};

int main()
{
    Person bill = AGE;

    char dude = AGE; // This is legal, but why would you do this... regular enums are not type safe

    Dog scruffy = Dog::NAME; // This is 100x better, because better type safety
};