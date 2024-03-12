/**
 *  @note Promises represent the eventual completition or failure of a asynchronous operation and its resulting value.
 * 
 *  @note Promises are suplemented with resolve and reject which are used to settle (fulfill or reject) the promise.
 * 
 *  @note resolve(value) This function is used to fulfill the promise. When resolve is called with the function 
 *  it means that the asynchronous operation was succussfully completed, and the promise is fulfilled with the given value.
 * 
 *  @note reject(reason) This function is used to reject the Promise. When reject is called with a reason (typically an Error object or a descriptive message), 
 *  it signals that the asynchronous operation has failed or encountered an error, and the Promise is rejected with the given reason.
 * 
 */

const promise = new Promise((resolve ,reject) => {
    setTimeout(() => {
        resolve("Operation succusful");
    }, 2000);
});

promise.then(result => {
    console.log(result);
});


const checkValuePromise = (value) => {
    return new Promise((resolve, reject) => {
      if (value > 10) 
      {
        resolve(`Value ${value} is greater than or equal to 10`);
      } 
      else 
      {
        reject(new Error(`Value ${value} is less than 10`));
      }
    });
  };
  
// Example usage:
const valueToCheck = 0;

checkValuePromise(valueToCheck)
.then((result) => {
    console.log(result); // Success case
})
.catch((error) => {
    console.error(error.message); // Failure case
});
