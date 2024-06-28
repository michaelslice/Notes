// map() will return a new array 

var array = [1, 2, 3, 4, 5, 6]; 

// num is passed as a arguement to the map function
const example = array.map(num => num * 2);

console.log(example);
console.log(' ');


array.map((element, index) => {
    console.log(`Element ${element}`) // ${} can be used to enclose variables, and backticks `` can be used to print text and ignore expressions
    console.log(`Index ${index}`)
    return element;
});