#include <iostream>

/**
 *  @note
 *
 *
 *
 */

class MyClass
{
private:
    int *data;
    int size;

public:
    MyClass(int s) : size(s)
    {
        data = new int[size];
    }

    /// Destructor
    // A destructor is called for a class object when it goes out of scope, is deleted, or the program ends. 
    // Be able to write a destructor for a class that dynamically created an array.
    ~MyClass()
    {
        delete[] data;
    }

    // Copy Constructor
    // Be able to list the three situations which may result in a call to the copy constructor:
    // 1. When an object is declared and initialized with another object of the same class 
    // 2. When an object is passed by value 
    // 3. When an object is returned by value
    MyClass(const MyClass &other) : size(other.size)
    {
        data = new int[size];

        // Perform deep copy
        for (int i{0}; i < size; ++i)
        {
            data[i] = other.data[i];
        }
    }

    // Copy Assignment Operator
    MyClass &operator=(const MyClass &other)
    {
        if (this != &other)
        {
            delete[] data;
            size = other.size;
            data = new int[size];

            // Perform Deep Copy
            for (int i{0}; i < size; ++i)
            {
                data[i] = other.data[i];
            }
        }
        return *this;
    }
};

int main()
{
    MyClass obj(3);

    // MyClass *obj_array = new MyClass[4]; // Call the default constructor for each object

    // delete[] obj_array; // De allocate the array

    // Shallow copy
    // Copies the object but not the dynamic memory
    // Deep Copy
    // Copies the object and the dynamic memory
}