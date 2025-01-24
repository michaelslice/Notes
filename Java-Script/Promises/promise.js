// Promise object represents the eventual completion (or failure) of a asynchronous operation and its resulting value
// Promise is one of three states
// - pending: neither fulfilled or rejected
// - fulfilled: operation was successful
// - rejected: meaning that the operation failed

// Synchronous: Happening at the same time
// Asynchronous: Not happening at the same time

const myPromise = () => {
  return new Promise((resolve, reject) => {
      let success = true;

      if(success){
        resolve("Task completed");
      }
      else {
        reject("Task failed");
      }
  })
}

// Consuming our promise with 
// .then
// .catch
myPromise()
.then((result) => {
  console.log(result);
})
.catch((error) => {
  console.log(error);
})
.finally(() => {
  console.log("THIS GETS EXECUTED LAST!")
})


// Arrow function promises

const promise = new Promise((resolve, reject) => {
  let num = 5;

  if(num < 10){
    resolve("Num less than 10")
  }
  else {
    reject("Num is greater than 10")
  }
})

// If arrow function just do variable name
promise
.then((result) => {
  console.log(result);
})
.catch((error) => {
  console.log(error);
})