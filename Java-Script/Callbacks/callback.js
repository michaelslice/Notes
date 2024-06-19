// callback = a function that is passed as an argument
//                    to another function.

//                    used to handle asynchronous operations:
//                    1. Reading a file
//                    2. Network requests
//                    3. Interacting with databases

//                    "Hey, when you're done, call this next."

hello(goodbye);

function hello(callback){
    console.log("Hello!");
    callback();
}

function goodbye(){
    console.log("Goodbye!");
}

//here is how callbacks work- listen to events this one is called when the exit event happens. Callback is second arg

process.on('exit', function(){
    console.log('this function runs after the process is exited')
})

//this is a callback- gets run after the process gets done/exited. This happens at the end of every script