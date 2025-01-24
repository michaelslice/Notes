/**
 *  event: Is a signal that something has happend
 * 
 *  listener: Function that is called when a event is raised
 */
const EventEmitter = require('events'); // Uppercase per word to represent class
const emitter = new EventEmitter();

// on or addListener is exactly the same
// Register a Listener
emitter.on('messageLogged', function() {
    console.log("Listener Called")
}) 
// 1. Name of event, 2. Callback Function, or listener

// Raise an event
emitter.emit('messageLogged'); 