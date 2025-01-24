nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

// For loop
for(let i = 0; i < nums.length; ++i){
    console.log(nums[i]);
}

let num = 0;

// While loop
while(num < 5){
    console.log(num);
    num++;
}

// For... of loop
fruits = ["Banana", "Apple", "Pear"];

// Gets a index
for(index of fruits){
    console.log(index);
}


const my_object = {
    "name": "Joe",
    "city": "Chicago",
    "age": 21
};

// For in loop
for(index in my_object){
    console.log(my_object[index]);
}

// do while loop
my_num = 0;
do{
    console.log("TEST");
    my_num++;
} while(my_num < 5);