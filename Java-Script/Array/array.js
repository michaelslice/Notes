let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

// Get element at index 0
console.log(arr.at(0));

// Concat two arrays together
let arr2 = [11, 12, 13, 14, 15];
console.log(arr.concat(arr2));

// Copy a range of elements from one array to another
let other_arr = arr.copyWithin(arr, 0, 10);
console.log(other_arr);


// Test if every element in array passes the test, and return bool
const isEven = (num) => num % 2 === 0; 

console.log(arr.every(isEven));

// Fil every element in range with a number
console.log(arr.fill(1, 0, 10));

// Filter the array and return all elements that follow the condition
const isOdd = (num) => num % 2 !== 0;

console.log(arr.filter(isOdd));

// Find the first element that matches the predicate, otherwise return undefined
arr = arr.concat(12, 11, 21, 100, 111);
const findNum = (num) => num === 111;
console.log(arr.find(findNum, arr));

// Returns index of first element where predicate is true
console.log(arr.findIndex(findNum, arr));

// Craetes a new arary with all sub array elements concatenated into it recursively up to depth
console.log(arr.flat(100));

// Applies call back function to all elements in arr
const square = (num) => num * 2;
console.log(arr.flatMap(square, arr));

const printElement = (num) => console.log(num);

// Apply the callback function to each element in arr
// You can nest call functions like so...
console.log(arr.forEach((value, index) => value * 2))

// Determines if a element exists in the array
console.log(arr.includes(222))

// Returns index of the element if it exits
console.log(arr.indexOf(222, 0))

// Returns a string of all nums in array, seperated by seperator
console.log(arr.join(","))

// Returns last index of a element
console.log(arr.lastIndexOf(222, 0));

// Length of array
console.log(arr.length)

// Apply the function to each element in array
console.log(arr.map((num) => num * 2));

// Push : Adds one or more elements to the end of the array
arr.push(4); // Adds 4 to the end of the array

// Pop removes the last element of a array
arr.pop();

// Shift : Removes the first element from an array
arr.shift(); // Returns 1

// Unshift : Adds one or more elements to the beginning of an array
arr.unshift(0); 

console.log(arr)