
// Function declaration
function add(num1: number, num2: number){
    return num1 + num2;
}

// Function Expression
// You can assign a function to a variable using either an anonymous or named function
const multiply = function(num1: number, num2: number): number {
    return num1 + num2;
}

// Or with arrow function
const divide = (num1: number, num2: number): number => {
    return num1 / num2;
}

// Void function
function logMessage(): void{
    console.log("TEST");
}

// Generic Functions
// Will work with multiple data types
function value<T>(value: T): T{
    return value;
}

// Function to handle a object
interface Point{
    x: number;
    y: number;
}

function processPoint(pt: {x: 1, y: 2}){
    console.log(pt.x, pt.y);
}

// Mark a parameter as optional with ?
function printName(first: string, last?: string){
    console.log(first, last);
}

// Function inside of a function
// (a: string) => void means “a function with one parameter, named a, of type string
function my_func(fn: (a:string) => void){
    fn("Hello world");
}

// Construct Signatures
// Functions can be invoked with new keyword
// TS refers to these as constructors because they usually create a new object
interface MyObject{
    name: string;
}

type SomeConstructor = {
    new (s: string): MyObject;
}

function fn(scor: SomeConstructor){
    return new scor("Hello");
}

// Rest Parameter
// ... means the arguement has a unbounded number of appearences
function multiplys(num: number, ...arr: number[]){
    return arr.map((x) => num * x);
}

const a = multiplys(1, 1, 2, 4, 4, 5, 4);