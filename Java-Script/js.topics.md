
# JavaScript Notes

## Basics

### Declaration: `let`, `const`, `var`
- `let` and `const` are block-scoped, while `var` is function-scoped.
- `let` allows reassignment, `const` does not.

### Data Types
- JavaScript is loosely typed; variables do not require type declaration.
- Common types: `String`, `Number`, `Boolean`, `Object`, `undefined`, `null`, `Symbol`, `BigInt`.

### Functions
- **Callbacks**: Functions passed as arguments to other functions.
- **Closures**: A function that retains access to its lexical scope.
- **Arrow Functions**: Concise syntax for anonymous functions.
  ```javascript
  const sum = (a, b) => a + b;
  ```

### Classes
- **Constructor**: Initializes object properties.
- **Extends**: Used to create subclasses.
- **`this`**: Refers to the instance of the object in the context.

```javascript
class Animal {
    constructor(name) {
        this.name = name;
    }
    speak() {
        console.log(`${this.name} makes a sound`);
    }
}

class Dog extends Animal {
    speak() {
        console.log(`${this.name} barks`);
    }
}
```

### Arrays
- Arrays are ordered collections.
- Methods: `.push()`, `.pop()`, `.shift()`, `.unshift()`, `.map()`, `.filter()`, `.reduce()`.

### Async / Await
- Syntax for handling asynchronous code in a synchronous-like manner.

```javascript
async function fetchData() {
    let response = await fetch('https://api.example.com');
    let data = await response.json();
    console.log(data);
}
```

### Fetch API
- Used to make HTTP requests.
```javascript
fetch('https://api.example.com')
    .then(response => response.json())
    .then(data => console.log(data))
    .catch(error => console.error(error));
```

## Advanced Functions

### Higher-Order Functions
- Functions that take other functions as arguments or return them.
  ```javascript
  const numbers = [1, 2, 3];
  const doubled = numbers.map(num => num * 2);
  ```

### Recursion
- Functions that call themselves.
  ```javascript
  function factorial(n) {
      if (n === 0) return 1;
      return n * factorial(n - 1);
  }
  ```

### Immediately Invoked Function Expressions (IIFE)
- Functions executed immediately after they are defined.
  ```javascript
  (function() {
      console.log("IIFE executed");
  })();
  ```

## Error Handling

### Try-Catch
- Handling errors gracefully using `try-catch`.
  ```javascript
  try {
      throw new Error('Something went wrong');
  } catch (error) {
      console.log(error.message);
  }
```

### Throwing Errors
- Using `throw` to manually throw errors.
  ```javascript
  throw new Error('Custom error');
  ```

## DOM Manipulation

### Traversing the DOM
- Access elements using methods like `getElementById()`, `querySelector()`, and `parentElement`.

### Creating and Appending Elements
```javascript
const newElement = document.createElement('p');
newElement.textContent = 'Hello World';
document.body.appendChild(newElement);
```

### Removing Elements
```javascript
const element = document.getElementById('removeMe');
element.remove();
```

## Event Handling

### Event Propagation
- Bubbling vs. Capturing.
  ```javascript
  element.addEventListener('click', handler, { capture: true });
  ```

### Event Delegation
- Attaching events to parent elements.
  ```javascript
  document.getElementById('parent').addEventListener('click', (event) => {
      if (event.target.tagName === 'BUTTON') {
          console.log('Button clicked');
      }
  });
  ```

## Advanced JavaScript

### Closures
- Retaining access to outer function's variables even after it returns.

```javascript
function outer() {
    let count = 0;
    return function inner() {
        count++;
        console.log(count);
    };
}
const counter = outer();
counter(); // 1
counter(); // 2
```

### Modules
- Using `import` and `export`.
  ```javascript
  // file.js
  export const greet = () => 'Hello';
  ```

  ```javascript
  // main.js
  import { greet } from './file.js';
  console.log(greet());
  ```

### Destructuring Assignment
- Extracting values from objects and arrays.
  ```javascript
  const person = { name: 'John', age: 25 };
  const { name, age } = person;

  const numbers = [1, 2, 3];
  const [first, second] = numbers;
  ```

### Rest and Spread Operators
- **Rest**: Collecting remaining arguments into an array.
  ```javascript
  function sum(...numbers) {
      return numbers.reduce((a, b) => a + b, 0);
  }
  ```

- **Spread**: Spreading elements into new arrays/objects.
  ```javascript
  const array1 = [1, 2, 3];
  const array2 = [...array1, 4, 5];
  ```

### Promises
- Handling asynchronous operations with `Promise`.
  ```javascript
  const promise = new Promise((resolve, reject) => {
      resolve('Success');
  });
  promise.then(result => console.log(result));
  ```

## Asynchronous JavaScript

### Event Loop
- How JavaScript handles asynchronous operations with the event loop.

### `setTimeout` and `setInterval`
- Setting delays and intervals.
  ```javascript
  setTimeout(() => console.log('Hello after 2 seconds'), 2000);
  setInterval(() => console.log('Hello every 1 second'), 1000);
  ```

## JavaScript Objects

### Object Methods
- Using `Object.keys()`, `Object.values()`, and `Object.entries()`.
  ```javascript
  const person = { name: 'Alice', age: 30 };
  console.log(Object.keys(person)); // ['name', 'age']
  ```

### Prototypes and Inheritance
- Understanding prototype chains.
  ```javascript
  function Person(name) {
      this.name = name;
  }
  Person.prototype.greet = function() {
      console.log(`Hello, ${this.name}`);
  };
  ```

## Regular Expressions

- Basics of regex patterns:
  ```javascript
  const regex = /abc/;
  console.log(regex.test('abcdef')); // true
  ```

## Date and Time

- Using the `Date` object:
  ```javascript
  const now = new Date();
  console.log(now.toISOString());
  ```

## Storage APIs

### LocalStorage and SessionStorage
- Storing data in the browser.
  ```javascript
  localStorage.setItem('key', 'value');
  const value = localStorage.getItem('key');
  ```

### Cookies
- Reading, writing, and deleting cookies.
  ```javascript
  document.cookie = "user=John Doe";
  ```

## Error and Debugging

### Console Methods
- `console.log()`, `console.error()`, `console.table()`, `console.warn()`, `console.group()`

---
