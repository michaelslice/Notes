#include <iostream>

/**
 * 
 *  @note Dynamic storage remains allocated until explicitly deallocated or until the program ends.
 *
 *  @note The main point of a copy constructor is to create a new object as a copy of an existing object of the same class. 
*/

class Student
{
private:
    int value;
public:
    Student(): value(0) {}; // Default constructor
    Student(const Student& other): value(other.value) {}; // Copy constructor

};

int main()
{
    int* scores; // Dynamically declared array

    scores = new int [12]; // Dynamically declare 12 elements in scores 

    std::cout << scores[0] << '\n'; // Using the pointer name as if it were a array

    // Deallocating the array

    delete[] scores;

    Student* s; // Pointer to a student object

    delete s; // Deallocated the object
}