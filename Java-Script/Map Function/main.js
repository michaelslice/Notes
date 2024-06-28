// Declaration
let array = [];

// Initialize elements
array = [1, 2, 3, 4, 5, 6];

// Print 3
console.log(array[2]);

// Get the size of a array
console.log(array.length); // Prints 6

// Push : Adds one or more elements to the end of the array
array.push(4); // Adds 4 to the end of the array
// Pop removes the last element of a array
array.pop();
// Shift : Removes the first element from an array
array.shift(); // Returns 1
// Unshift : Adds one or more elements to the beginning of an array
array.unshift(0); 

console.log(" ");
// Using for loop to iterate over array
for(let i = 0; i < array.length; ++i)
{
    console.log(array[i]);
}

let test_array = [6, 5, 4, 3, 2, 1];

console.log(" ");
// Using for each
test_array.forEach(option => console.log(option))

// Using map

let newArray = test_array.map(option => option * 2);

// Other array methods
// concat, slice, splice, indexOf, includes, sort, reverse, etc.
