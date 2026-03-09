/* =====================================================================
   COMPLETE JAVASCRIPT HANDBOOK
   Beginner → Advanced Reference
   =====================================================================

   JavaScript is a programming language used to add logic and
   interactivity to websites.

   It runs in:
   • Web browsers
   • Servers (Node.js)
   • Desktop apps
   • Mobile apps

   JavaScript allows developers to:
   - manipulate webpage content
   - respond to user interactions
   - communicate with servers
   - build complete applications

===================================================================== */


/* =====================================================================
   SECTION 1 — BASIC OUTPUT
   ===================================================================== */

console.log("Hello World");

/*
console.log()

Outputs text or values to the browser console.

Developers use it for debugging and testing code.
*/


alert("Hello from JavaScript");

/*
alert()

Displays a popup dialog to the user.
Usually used only for demonstrations.
*/


/* =====================================================================
   SECTION 2 — VARIABLES
   ===================================================================== */

/*
Variables store data that your program can use later.
*/

let age = 25;

/*
let
Used for variables whose values may change.
*/

age = 26;


const PI = 3.14159;

/*
const
Creates a variable that cannot be reassigned.
*/


var oldVariable = "legacy";

/*
var is older syntax and rarely used in modern code.
*/


/* =====================================================================
   SECTION 3 — DATA TYPES
   ===================================================================== */

let name = "Alice";      // string
let number = 42;         // number
let isOnline = true;     // boolean
let nothing = null;      // null
let undefinedVar;        // undefined


console.log(typeof name);

/*
typeof returns the type of a variable.
*/


/* =====================================================================
   SECTION 4 — OPERATORS
   ===================================================================== */

let a = 10;
let b = 5;

console.log(a + b); // addition
console.log(a - b); // subtraction
console.log(a * b); // multiplication
console.log(a / b); // division
console.log(a % b); // remainder


console.log(a === b);

/*
=== strict equality
Checks both value and type.
*/


/* =====================================================================
   SECTION 5 — CONDITIONAL STATEMENTS
   ===================================================================== */

let temperature = 30;

if (temperature > 25) {

    console.log("Warm weather");

}

else if (temperature > 15) {

    console.log("Moderate weather");

}

else {

    console.log("Cold weather");

}


/* =====================================================================
   SECTION 6 — LOOPS
   ===================================================================== */

/* FOR LOOP */

for (let i = 0; i < 5; i++) {

    console.log("Iteration:", i);

}

/*
Loop structure:

initialization
condition
increment
*/


/* WHILE LOOP */

let count = 0;

while (count < 3) {

    console.log("Counting:", count);

    count++;

}


/* =====================================================================
   SECTION 7 — FUNCTIONS
   ===================================================================== */

function greetUser(name) {

    console.log("Hello " + name);

}

greetUser("Alice");


function addNumbers(a, b) {

    return a + b;

}

let result = addNumbers(3, 4);

console.log(result);


/* =====================================================================
   SECTION 8 — ARRAYS
   ===================================================================== */

let fruits = ["Apple", "Banana", "Orange"];

console.log(fruits[0]);

fruits.push("Mango");

fruits.pop();


for (let i = 0; i < fruits.length; i++) {

    console.log(fruits[i]);

}


/* =====================================================================
   SECTION 9 — OBJECTS
   ===================================================================== */

let user = {

    name: "John",
    age: 30,
    isAdmin: true

};

console.log(user.name);

user.age = 31;


/* =====================================================================
   SECTION 10 — DOM MANIPULATION
   ===================================================================== */

let title = document.querySelector("h1");

title.textContent = "Updated Title";


let paragraph = document.createElement("p");

paragraph.textContent = "This paragraph was created by JavaScript.";

document.body.appendChild(paragraph);


/* =====================================================================
   SECTION 11 — EVENTS
   ===================================================================== */

let button = document.querySelector("button");

button.addEventListener("click", function(){

    alert("Button clicked!");

});


/* =====================================================================
   SECTION 12 — FETCH API
   ===================================================================== */

fetch("https://jsonplaceholder.typicode.com/posts/1")

.then(function(response){

    return response.json();

})

.then(function(data){

    console.log(data);

});


/* =====================================================================
   SECTION 13 — ARROW FUNCTIONS
   ===================================================================== */

const multiply = (a, b) => {

    return a * b;

};

console.log(multiply(2,3));


/* =====================================================================
   SECTION 14 — PROMISES (ADVANCED)
   ===================================================================== */

/*
Promises handle asynchronous operations.

States:
pending
fulfilled
rejected
*/

let myPromise = new Promise(function(resolve, reject){

    let success = true;

    if(success){

        resolve("Operation successful");

    }

    else{

        reject("Operation failed");

    }

});


myPromise.then(function(result){

    console.log(result);

})

.catch(function(error){

    console.log(error);

});


/* =====================================================================
   SECTION 15 — ASYNC / AWAIT
   ===================================================================== */

/*
Modern syntax for asynchronous code.
*/

async function getData(){

    try{

        let response = await fetch("https://jsonplaceholder.typicode.com/posts/1");

        let data = await response.json();

        console.log(data);

    }

    catch(error){

        console.log("Error:", error);

    }

}


/* =====================================================================
   SECTION 16 — CLOSURES
   ===================================================================== */

/*
Closures occur when a function remembers
variables from its outer scope.
*/

function outerFunction(){

    let counter = 0;

    return function(){

        counter++;

        console.log(counter);

    }

}

let increment = outerFunction();

increment();
increment();
increment();


/* =====================================================================
   SECTION 17 — MODULES
   ===================================================================== */

/*
Modules allow splitting JavaScript
into multiple files.

Example:

export function greet(){}

import { greet } from "./file.js"
*/


/* =====================================================================
   SECTION 18 — LOCAL STORAGE
   ===================================================================== */

/*
Stores data in the browser.
*/

localStorage.setItem("username","Alice");

let storedUser = localStorage.getItem("username");

console.log(storedUser);

localStorage.removeItem("username");


/* =====================================================================
   SECTION 19 — JSON
   ===================================================================== */

let obj = {

    name: "Alice",
    age: 25

};

let jsonString = JSON.stringify(obj);

console.log(jsonString);

let parsedObject = JSON.parse(jsonString);

console.log(parsedObject);


