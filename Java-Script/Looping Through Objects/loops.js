const obj = {
    name : "Michael",
    age : 21,
    weight : 135,
};

// Loop through keys with Object.keys
Object.keys(obj).forEach((value, index) => {
    console.log(value, index);
});

// Loop through values with Object.values
Object.values(obj).forEach((value, index) => {
    console.log(value, index);
});

// Loop through key-value pairs with Object.entries
Object.entries(obj).forEach(([key, value], index) => {
    console.log(key, value, index);
})