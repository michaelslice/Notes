/**
 *  setTimeout(): Will call a function after a certain number of milliseconds
 * 
 */

setTimeout(() => {
    console.log("YO");
}, 3000);
// Returns after 3 seconds 

/**
 * setInterval(): Will run continuously until it is either cleared or the window is closed 
 * 
 */
let counter = 0;

const countInterval = setInerval(count , 1000);

function count() {
    console.log(counter++);

    if(counter > 5) {
        clearInterval(countInterval);
    }
}

// Returns counter every 5 seconds