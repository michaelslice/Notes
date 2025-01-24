class Person{
    name: string;
    age: number;

    // Constructors
    constructor(name = "Michael", age = 21){
        this.name = name;
        this.age = age;
    }

    // Methods
    public returnName(): string{
        return this.name;
    }

    public setName(name: string): void{
        this.name = name;
    }
}

// Joe inherits from person
class Joe extends Person{
    
    returnName(): string {
        // Use super, to access base class members
        super.returnName();
        return this.name;
    }
}

// Generic Classes
class Box<T>{
    contents: T;

    constructor(box: T){
        this.contents = box;
    }
}

const b = new Box("Hello");