#include <iostream>
#include <string>

#ifndef OOP_H // Header Guards
#define OOP_H

using string = std::string;

// Accessor = get
// Mutator = set

class Person
{
private: // Data member declarations
    int age;
    int height;
    std::string gender;
    std::string ethnicity;

public: // Member Functions prototypes
    // Default Constructor
    Person();
    // Overloaded Constructor
    Person(int age_, int height_, std::string gender_, std::string ethnicity_) : age(age_), height(height_), gender(gender_), ethnicity(ethnicity_){}; // Constructor initializer list
    // Accessor Methods
    int get_age();
    int get_height();
    string get_gender();
    string get_ethnicity();
    // Mutator Methods
    int set_age(int age_);
    int set_height(int height_);
    string set_gender(string gender_);
    string set_ethnicity(string ethnicity_);
};

#endif // Header Guards