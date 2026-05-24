const questions = [

{
question:
"What is the capital of India?",

options:
["Delhi","Mumbai","Kolkata","Chennai"],

answer:0
},

{
question:
"Which language is used for OOP?",

options:
["HTML","CSS","C++","SQL"],

answer:2
},

{
question:
"Who developed C++?",

options:
[
"Dennis Ritchie",
"Bjarne Stroustrup",
"James Gosling",
"Guido van Rossum"
],

answer:1
},

{
question:
"Which symbol is used for comments in C++?",

options:
["//","##","**","%%"],

answer:0
},

{
question:
"Which company developed Java?",

options:
[
"Microsoft",
"Sun Microsystems",
"Google",
"Apple"
],

answer:1
},

{
question:
"What does CPU stand for?",

options:
[
"Central Process Unit",
"Central Processing Unit",
"Computer Personal Unit",
"Central Power Unit"
],

answer:1
},

{
question:
"Which data structure uses FIFO?",

options:
[
"Stack",
"Queue",
"Tree",
"Graph"
],

answer:1
},

{
question:
"Which keyword is used to inherit a class in C++?",

options:
[
"extends",
"inherits",
":",
"super"
],

answer:2
},

{
question:
"Which operator is used for comparison?",

options:
[
"=",
"==",
"+=",
"!="
],

answer:1
},

{
question:
"Which HTML tag is used for largest heading?",

options:
[
"<h6>",
"<heading>",
"<head>",
"<h1>"
],

answer:3
}

];

let currentQuestion = 0;

let score = 0;

let timer;

let timeLeft = 10;

function loadQuestion() {

clearInterval(timer);

timeLeft = 10;

document.getElementById("timer")
.innerText =
"Time Left: " + timeLeft;

let q =
questions[currentQuestion];

document.getElementById("question")
.innerText =
q.question;

document.getElementById("op1")
.innerText =
q.options[0];

document.getElementById("op2")
.innerText =
q.options[1];

document.getElementById("op3")
.innerText =
q.options[2];

document.getElementById("op4")
.innerText =
q.options[3];

startTimer();
}

function startTimer(){

timer = setInterval(()=>{

timeLeft--;

document.getElementById("timer")
.innerText =
"Time Left: " + timeLeft;

if(timeLeft <= 0){

clearInterval(timer);

nextQuestion();
}

},1000);
}

function checkAnswer(option){

clearInterval(timer);

if(option ===
questions[currentQuestion].answer){

score++;
}

nextQuestion();
}

function nextQuestion(){

currentQuestion++;

if(currentQuestion <
questions.length){

loadQuestion();
}
else{

localStorage.setItem(
"finalScore",
score
);

window.location.href =
"result.html";
}
}

window.onload =
loadQuestion;