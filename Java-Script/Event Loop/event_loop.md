# Event Loop

**JavaScript Runtime**

JavaScript is single-threaded, meaning it can execute only one piece of code at a time. However, it handles asynchronous operations efficiently using the **event loop**.

---

## Components of the Event Loop

### Call Stack
- A data structure that keeps track of the currently executing code (e.g., function calls).
- When a function is called, it gets pushed onto the stack. When the function completes, it gets popped off the stack.
- If the stack is empty, JavaScript can process other tasks.

### Web APIs
- Browser-provided or environment-specific features (e.g., `setTimeout`, DOM events, AJAX calls) that handle asynchronous operations outside the call stack.
- Once these tasks are complete, they send callbacks to the **callback queue**.

### Callback Queue
- A data structure where all the callbacks from Web APIs are stored after completing their tasks.
- Operates on a **FIFO (First-In-First-Out)** basis: the first callback added is the first to be processed.

### Microtask Queue
- A separate queue for tasks with higher priority, such as **Promises** and `MutationObserver` callbacks.
- **Microtasks** are processed **before** tasks in the callback queue, even if they are added later.

### Event Loop
- The mechanism that ties everything together.
- Constantly monitors the **call stack** and **queues**:
  1. If the call stack is empty, the event loop first checks the **microtask queue**.
  2. Once all microtasks are processed, it dequeues the oldest task from the **callback queue** and pushes it onto the call stack for execution.

---

## Key Points

- **Microtasks** have higher priority than tasks in the **callback queue**.
- The event loop ensures that the **call stack** is empty before processing anything from the queues.
- JavaScript achieves asynchronous behavior despite being single-threaded by delegating tasks to **Web APIs** and using the event loop.
