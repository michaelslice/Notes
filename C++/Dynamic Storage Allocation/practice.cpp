#include <iostream>

class Object
{
private:
    int data;
    int test;
public:
    Object();
    int get_data();
};

int Object::get_data()
{
    return data;
}

int main()
{
    int num_elements{0};

    int* scores; // Pointer to a dynamic array of integers 
    scores = new int[num_elements]; // Using the new operator to allocate the desired number of elements for the array

    Object* obj; // Pointer to a Object object
    obj = new Object(); // Calls default constructor

    *obj; // Value of the object pointed to by s
    obj->get_data(); // Call a public member function for the object pointed to by obj


    delete obj; // Deallocate the object before the end of the program
return 0;
}

/**
 *  @note You need to use dynamic memory when...
 * 
 *  You cannot determine the maximum amount of memory to use at compile time
 * 
 *  You want to allocate a very large object
 * 
 *  You want to build data structures (containers) without a fixed upper size.
*/