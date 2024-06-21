/**
 *  Rest Operator:(...): Collects multiple elements and "condenses"
 *  them into a single array or object. It's used primarily in function lists
 *  and in destructing assignments
 * 
 *  Used for collecting multiple elements or properties into 
 *  a single array or object
 * 
 */

// 1. Functions: To gather the remaining arguements into an array
function sum(...numbers) {
    return numbers.reduce((acc, curr) => acc + curr, 0);
}
console.log(sum(1, 2, 3, 4)); // Output 10
