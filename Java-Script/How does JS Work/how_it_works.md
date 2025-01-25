# How Does JavaScript Work?

## JavaScript Engine
- Every browser has a JavaScript engine; the most popular is the **Google Chrome V8 Engine**.
- **Google's V8 Engine** powers Google Chrome and Node.js.

### Components of the JavaScript Engine
- **Call Stack**: Stores the code being executed.
- **Heap**: Stores any objects.

### Code Execution Process
1. When a code snippet is passed into the engine, it is initially **parsed** (read).
2. The code is converted into a data structure called the **Abstract Syntax Tree (AST)**.
3. The AST is then converted into **machine code** for execution.

---

## JavaScript Runtime
The JavaScript Runtime includes:
- The **JavaScript Engine**
- **Web APIs** (e.g., DOM, Fetch APIs)
- The **Callback Queue**

---

## Callback Queue
- The **Callback Queue** contains callback functions that are ready to be executed.
- It ensures callbacks are executed in a **First-In-First-Out (FIFO)** manner.
- Callbacks in the queue are passed into the stack when it is empty.

---

## Runtime Environments
- Examples of runtime environments include:
  - **Browser runtime**
  - **Node.js**

### Browser Runtime
- When JavaScript runs in a web browser, it operates within the browser’s runtime environment.
- The browser runtime environment provides access to the **DOM**, allowing interaction with web page elements, handling events, and manipulating the page structure.

---

## Just-in-Time (JIT) Compilation
- The process of translating JavaScript code into machine code involves **compilation** and **interpretation**.

### Compilation
- The entire source code is converted into machine code at once.
- The machine code is written into a binary file to be executed by the computer.
