#include <iostream>
#include <string>

/**
 *  @note What distinguish a overloaded function?
 * 
 *  1. The number of arguements
 * 
 *  2. The data types of the arguements
 * 
 *  3. The order of the data types
 * 
 *  4. Whether or not a member function is const 
 * 
 *  RETURN TYPE OF THE FUNCTION IS NOT ONE OF THE CRITERIA USED
 * 
*/

class Student
{
private:
    int age;
    double height;
    double weight;
    int64_t id;
public:
    Student();
    int set_age();
};