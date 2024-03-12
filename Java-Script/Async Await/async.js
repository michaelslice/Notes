/**
 *  @note asynchronous : Not simultaneous or concurrent in time: not synchronous 
 * 
 *  @note async : When a function is declared as async it means 
 *  the function will always return a promise, even if you dont 
 *  explicitly return one. 
 * 
 *  @note await : Can be used in a async function to wait for the promise to resolve
 *  before execution 
 * 
 *  @note Async and await are best used when needing to retrieve data from a API, reading files, database operations. concurrency control.
 * 
 */

async function test()
{
    // The statement to be executed
    try
    {
        // Fetch, on this line the function test() is 
        // paused until the HTTP request is completed and the promose returned by fetch() is resolved 
        const response = await fetch('https://www.google.com/')
    
        const data = await response.json();

        console.log(data);
    }
    catch(error) // The statement executed if an exception is thrown in the try block
    {
        console.error("Error", error);
    }
}