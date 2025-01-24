/**
 * Spread Operator(...): Is used to expand elements of an iterable
 * (like an array or string) into individual elements
 * 
 * Commonly Used In:
 * 
 * 1. To create a copy of an array
 * 
 * 2. To concatenate arrays
 * 
 * 3. To pass array elements as arguements to a function 
 * 
 *  Used for expanding elements of an iterable or properties of an object
 * 
 */

// Copying an array
const originalArray = [1, 2, 3];
const copiedArray = [...originalArray];
console.log(copiedArray); // Output: [1, 2, 3]

// Concatenating arrays
const array1 = [1, 2];
const array2 = [3, 4];
const concatenatedArray = [...array1, ...array2];
console.log(concatenatedArray); // Output: [1, 2, 3, 4]

// Passing elements as arguements
const numbers = [1, 2, 3];
const sum = (a, b, c) => a + b + c;
console.log(sum(...numbers)); // Output 6