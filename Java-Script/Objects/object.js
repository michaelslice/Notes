// object = A collection of related properties and/or methods

// Can represent real world objects (people, products, places)
// object = {key:value,
// function()}

const person = {
    name: "Michael",
    age: 21,
    city: "New York",
    sayHello: () => console.log("Hello!"),
    sayHola: function(){ console.log("Hola!") },
};

person.sayHello();
person.sayHola();