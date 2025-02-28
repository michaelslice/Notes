# Node.js Overview

## Key Characteristics
- Runs in a single process
- Uses asynchronous, event-driven architecture

## Starting a Server
```sh
node server.js
```

## Request Handling
When a request is received, an event is triggered, providing two objects:
- **request** (`http.IncomingMessage`): Contains request details.
- **response** (`http.ServerResponse`): Used to send data back to the client.

## JavaScript Essentials for Node.js
- Lexical Structure
- Expressions
- Data Types
- Classes
- Variables
- Functions
- `this` operator
- Arrow Functions
- Loops
- Scopes
- Arrays
- Template Literals
- Strict Mode
- ECMAScript 2015 (ES6) and beyond

## Asynchronous Programming in Node.js
- Asynchronous programming and callbacks
- Timers
- Promises
- Async and Await
- Closures
- The Event Loop

## Introduction to npm
- `npm` is the default package manager for Node.js

### Installing Dependencies
If a project has a `package.json` file, install packages using:
```sh
npm install
```

### Updating Packages
```sh
npm update
```

## Security Considerations: Denial of Service (DoS) Attack
- Use a **Reverse Proxy** to receive and forward requests to the Node.js application.
- Reverse proxies help with:
  - Caching
  - Load balancing
  - IP blacklisting
- These measures reduce the probability of a DoS attack being effective.

## Running TypeScript Code Using Transpilation
### Install TypeScript
```sh
npm i -D typescript  # -D is shorthand for --save-dev
```

### Compile TypeScript Code to JavaScript
```sh
npx tsc example.ts
```

---

## Using Express
Express is a web application framework for NodeJS, it simplifies the process of building web servers and APIs

### Key Features of Express
- Routing: Defines routes for GET, POST, PUT, DELETE
- Middleware Support: Process requests before sending responses 
- Static File Serving: Easily serve static files like HTML, CSS, images, and JavaScript

### Express Template
Express template command
```sh
npx express-generator
```

### Routing
**Routing**: Refers to how an application responds to client requests to a particular endpoint, with a HTTP request
Route structure
```sh
app.METHOD(PATH, HANDLER)
```
Where:
- app is an instance of express.
- METHOD is an HTTP request method, in lowercase.
- PATH is a path on the server.
-HANDLER is the function executed when the route is matched.

### Serving static files in Express
`express.static` can be used to serve static files like images, CSS files, and JavaScript files
The function signature is 
```sh
express.static(root, [options])
```