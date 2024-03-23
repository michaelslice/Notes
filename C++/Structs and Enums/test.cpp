#include <iostream>

/**
 * @note A struct is a user defined data type used to store a group of items that are similiar to each other.
 * The variables listed are all grouped into one block of memory under the struct name, so they are all processed as a single unit.
 *
 * @note A struct is similiar to a class, except the members are public by default instead of private,
 * structs can have member functions, template parameters etc.
 *
 */
struct School // Useful for organizing groups of objects, or if you want to model objects with properties
{
    std::string math;
    std::string english;
    std::string history;
};

/**
 * @note Enums allow for you to declare a series of identifiers for use in your code.
 * The compiler will replace them with numbers.
 *
 * @note Enums are good for making code more readable and writable, because if a value
 * changes you just have to change the value of the declared variable.
 *
 * @note Values in a enum are implicitly assigned integer values ex, 0, 1, 2, 3, 4, 5,
 *
 *  @note Enums are used for NAMED CONSTANTS
 *
 */
enum class Day // Structured data type, useful for fixed set of constants that are closely related, opposed to using multiple const, or #define statements
{
    MONDAY,    // 0
    TUESDAY,   // 1
    WEDNESDAY, // 2
    THURSDAY,  // 3
    FRIDAY,    // 4
    SATURDAY,  // 5
    SUNDAY,    // 6

    HOLIDAY = 0 // Can also initialize constants
};