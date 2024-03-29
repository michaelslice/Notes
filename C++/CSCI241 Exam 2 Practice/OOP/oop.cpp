#include <iostream>
#include "oop.h"
using string = std::string;

// Accessor Methods 
int Person::get_age()
{
    return age;
}

int Person::get_height()
{
    return age;
}

string Person::get_gender()
{
    return gender;
}

string Person::get_ethnicity()
{
    return ethnicity;
}

// Mutator Methods

int Person::set_age(int age_)
{
    age = age_;
    return age;
}

int Person::set_height(int height_)
{
    age = height_;
    return age;
}

string Person::set_gender(string gender_)
{
    gender = gender_;
    return gender;
}

string Person::set_ethnicity(string ethnicity_)
{
    ethnicity = ethnicity_;
    return ethnicity;
}
