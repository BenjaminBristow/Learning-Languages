<!DOCTYPE html>
<html lang="en">

<head>

<meta charset="UTF-8">

<meta name="viewport" content="width=device-width, initial-scale=1.0">

<title>JavaScript Todo App</title>

<style>

/* ======================================================
   BASIC PAGE STYLING
   ====================================================== */

body{

font-family: Arial, sans-serif;

/*
Sets default font for the entire webpage.
*/

background:#f4f4f4;

/*
Light grey background color.
*/

display:flex;

/*
Flexbox layout used to center the app.
*/

justify-content:center;

/*
Centers horizontally.
*/

align-items:center;

/*
Centers vertically.
*/

height:100vh;

/*
vh = viewport height.
100vh means full screen height.
*/

margin:0;

}

/* ======================================================
   APP CONTAINER
   ====================================================== */

.container{

background:white;

padding:30px;

border-radius:10px;

box-shadow:0 5px 10px rgba(0,0,0,0.1);

/*
Creates soft shadow for depth.
*/

width:350px;

}

/* ======================================================
   INPUT SECTION
   ====================================================== */

input{

width:70%;

padding:10px;

margin-right:10px;

}

/* ======================================================
   BUTTON STYLING
   ====================================================== */

button{

padding:10px;

cursor:pointer;

background:#3498db;

color:white;

border:none;

}

/*
cursor:pointer makes the cursor change
to a hand when hovering.
*/

/* ======================================================
   TASK LIST
   ====================================================== */

ul{

list-style:none;

/*
Removes bullet points from list.
*/

padding:0;

margin-top:20px;

}

li{

background:#eee;

padding:10px;

margin-bottom:10px;

display:flex;

/*
Flexbox makes it easy to align
text and delete button.
*/

justify-content:space-between;

}

</style>

</head>

<body>

<div class="container">

<h2>Todo List</h2>

<!-- ==================================================
     INPUT AREA
     ================================================== -->

<input id="taskInput" placeholder="Enter a task">

<button onclick="addTask()">Add</button>

<!-- ==================================================
     TASK LIST
     ================================================== -->

<ul id="taskList"></ul>

</div>

<script>

/* ======================================================
   TODO APP JAVASCRIPT
   ====================================================== */

/*
We store tasks inside an array.

Arrays allow us to store multiple values
in a single variable.
*/

let tasks = [];


/* ======================================================
   LOAD SAVED TASKS
   ====================================================== */

/*
localStorage allows us to save data
in the user's browser.

This means tasks remain even if the page reloads.
*/

if(localStorage.getItem("tasks")){

tasks = JSON.parse(localStorage.getItem("tasks"));

}

/*
JSON.parse converts stored text back into a JavaScript array.
*/

renderTasks();


/* ======================================================
   ADD TASK FUNCTION
   ====================================================== */

function addTask(){

let input = document.getElementById("taskInput");

/*
Gets the input element from the page.
*/

let taskText = input.value;

/*
Retrieves the text typed by the user.
*/

if(taskText === ""){

return;

/*
Stops the function if input is empty.
*/

}

tasks.push(taskText);

/*
push() adds a new item to the array.
*/

saveTasks();

renderTasks();

input.value = "";

/*
Clears the input field.
*/

}


/* ======================================================
   DELETE TASK
   ====================================================== */

function deleteTask(index){

tasks.splice(index,1);

/*
splice removes an item from the array.

index = position of the task.
*/

saveTasks();

renderTasks();

}


/* ======================================================
   SAVE TASKS
   ====================================================== */

function saveTasks(){

localStorage.setItem("tasks",JSON.stringify(tasks));

}

/*
JSON.stringify converts array into text
so it can be stored in localStorage.
*/


/* ======================================================
   RENDER TASKS
   ====================================================== */

function renderTasks(){

let list = document.getElementById("taskList");

list.innerHTML = "";

/*
Clears existing list before re-rendering.
*/

for(let i=0;i<tasks.length;i++){

let li = document.createElement("li");

/*
Creates new list item.
*/

li.textContent = tasks[i];

/*
Displays task text.
*/

let deleteBtn = document.createElement("button");

deleteBtn.textContent = "Delete";

deleteBtn.onclick = function(){

deleteTask(i);

};

/*
When clicked, delete the specific task.
*/

li.appendChild(deleteBtn);

list.appendChild(li);

}

}

</script>

</body>

</html>