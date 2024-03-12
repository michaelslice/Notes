// Super class = parent class

// Super class
class Practice
{
    // Called when a Practice object is created
    constructor(name, age)
    {
        this.name = "Joe";
        this.age = 20;
    }
    // Method of Practice
    greet()
    {
        console.log(`Hello my name is ${this.name} I am ${this.age} years old`);
    };
}

// Extends : A keyword used to declare inheritence for a child class to inherit from a parent class

// Subclass extending Practice
class Baseball extends Practice
{


    constructor(coach, bat)
    {
        super(); // Call the parent class in the child class constructor

        this.coach = "Joe Schmoe";
        this.bat = "MLB Pro";
    }
}

class Example
{
    #private_member; // # is used to declare a private data member

    constructor(x)
    {
        this.#private_member = x; // Initialize the private data member
    }
}