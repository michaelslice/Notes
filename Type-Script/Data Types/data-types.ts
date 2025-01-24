// To initialize a ts project run
// npm init -y, node_modules will store all your packages used


/* 

Type Annotations
const: Constant variable
var: Function-scope, can be hoisted but has undefined value until assigned
let: Provides static type checking, and is block scoped

*/

/*
Data Types
number
string
boolean
array
object
null
undefined
any
void
never
unknown
*/

// Type Annotations on variables
let age: number = 21;
let my_name: string = "Michael";
let option: boolean = false;
let numbers: number[] = [1, 2, 3];

// Date objects
let date: Date = new Date();
console.log(date.getDay());

// Union Types
let id: string | number;
id = "id";
id = 123;

// Type Aliases
type UserId = string | number;
let userId: UserId = "123";

// Interface
interface Point{
    x: number;
    y: number;
}

let point: Point = {x : 1, y: 2};


// Difference between type aliases, and interface.
// A type cannot be re-opened to add new properties vs an interface which is always extenable
// interface: can add new values
// type: is persistant at declaration

// Adding Types to a Interface
interface BasicAddress {
    name?: string;
    street: string;
    city: string;
    country: string;
    postalCode: string;
}

// By adding the extends keyword, it allows us to 
// Add new members to a existing interface
interface AddressWithUnit extends BasicAddress {
    unit: string;
}

// Intersection Types
// You can combine two interfaces with the & operator
interface Colorful {
    color: string;
}

interface Circle {
    radius: number;
}
   
type ColorfulCircle = Colorful & Circle;

// The Array Type
// let num: number[] is the same as Array<number>

// Tuple Types
type stringAndNum = [string, number];
let myNum: stringAndNum = ["Michael", 20];