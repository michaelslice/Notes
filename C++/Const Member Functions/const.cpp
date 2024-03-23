#include <iostream>
#include <string>

/**
 *
 *  @note A method declared as const means that the method promises to not modify the state of the object on which it is called.
 *
 *  @note If a object is declared as const you can call const member functions on the object.
 *
 */

class MyClass
{
public:
    int get_id(int num) const { return num; }; // Const after parentheses is a const member function
    void ModifyState()
    { /* Modify the state of the object */
    }
};

int main()
{
    const MyClass obj;

    obj.get_id(12); // This is allowed because DisplayState is const
    // obj1.ModifyState(); // This would result in a compilation error because ModifyState is not const
}

using string = std::string;

class Schedule
{
private:
    string school;
    string work;
    string weekend;

public:
    // Constructor initializer list, used to initialize member variables with passed in arguements
    Schedule(string school_, string work_, string weekend_) : school(school_), work(work_), weekend(weekend_){};
};
