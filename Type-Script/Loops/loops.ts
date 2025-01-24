// How to run code
// 1. npm install -g ts-node
// 2. ts-node loops.ts

let my_array: number[] = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

// For loop
for(let i: number = 0; i < my_array.length; ++i){
    console.log(my_array[i]);
}

// While loop
let count: number = 0;
while(count < 5){
    console.log(count);
    count++;
}

const fruits: string[] = ["Banana", "Apple", "Pear"];
// For... of loop
for(const fruit in fruits){
    console.log(`${fruit}`);
}

const person = {name: "Jose", age: 21, city: "New York"};

// For... in loop
for(const key in person){
    console.log(`${key}: ${person[key as keyof typeof person]}`)
}

// For each loop
const nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
nums.forEach((num, index) => {
    console.log(num);
})

// Map method
let numbers123: number[] = [1, 2, 3]
const squared = numbers123.map((num) => num * num);
console.log(squared) 