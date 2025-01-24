// Regular functions
function add(num1, num2){
    return num1 + num2;
}

// Arrow function
const addition = (num1, num2) => {
    return num1 + num2;
}

// Callback function
// Is a function passed into another function as an arguement
// Which is then invoked inside the outer function to complete some action
// used to handle asynchronous operations:
//  1. Reading a file
//  2. Network requests
//  3. Interacting with databases
function call(name, callback){
    console.log(`Hello ${name}`);
    callback();
}

function sayGoodbye(){
    console.log("Goodbye");
}

call("Joe", sayGoodbye);

// Closure
// A function defined inside another function
// The inner function has access to variables in the outer function
function outer(){
    const message = "TEST!";

    function inner(){
        console.log(message);
    }

    inner();
}

// Call outer
outer();