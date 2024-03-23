#include <iostream>

/**
 * @note Pointer: Is a variable that points to the memory address of another object
 *
 * @note Reference: Is a alias or an alternative name for an existing object.
 */

/*
int ptr_example()
{
    int *ptr; // Pointer to a int
    int x = 10;

    int *ptr = &x; // Pointer now holds the address of variable x

    int *ptr = nullptr; // nullptr means the pointer does not point to any memory address

    int value = *ptr; // Accessing ptr by deferencing the pointer using *

    return 0;
}
*/
/**
 *
 * @note Reference: Is a alias or an alternative name for an existing object.
 *
 */
/*
int reference_example()
{
    int x = 10;

    int &ref = x; // Reference to a variable x

    return 0;
}
*/
class MyClass
{
private:
    int height;
    int age;
    int gender;

public:
    MyClass(int height_, int age_, int gender_) : height(height_), age(age_), gender(gender_){};

    int getHeight() { return height; };
    int getAge() { return age; };
    int getGender() { return gender; };

    
};

using namespace std;

int main()
{
    MyClass obj(12, 12, 12); // Creating a instance of my class

    MyClass *ptr = &obj; // Declaring and initializing a pointer to obj

    MyClass *s;
    s->getAge();

    cout << "Using Pointer:" << endl;
    cout << "Height: " << ptr->getHeight() << endl;
    cout << "Age: " << ptr->getAge() << endl;
    cout << "Gender: " << ptr->getGender() << endl;

    // Using Reference
    MyClass& ref = obj; // Declaring and initializing a reference to obj

    cout << "\nUsing Reference:" << endl;
    cout << "Height: " << ref.getHeight() << endl;
    cout << "Age: " << ref.getAge() << endl;
    cout << "Gender: " << ref.getGender() << endl;

    

    return 0;
}


