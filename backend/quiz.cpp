#include "quiz.h"

void Quiz::loadQuestions() {

    // QUESTION 1
    Question q1;

    q1.question =
    "What is the capital of India?";

    q1.option1 = "Delhi";
    q1.option2 = "Mumbai";
    q1.option3 = "Kolkata";
    q1.option4 = "Chennai";

    q1.answer = 0;

    questions.push_back(q1);

    // QUESTION 2
    Question q2;

    q2.question =
    "Which language is used for OOP?";

    q2.option1 = "HTML";
    q2.option2 = "CSS";
    q2.option3 = "C++";
    q2.option4 = "SQL";

    q2.answer = 2;

    questions.push_back(q2);

    // QUESTION 3
    Question q3;

    q3.question =
    "Who developed C++?";

    q3.option1 =
    "Dennis Ritchie";

    q3.option2 =
    "Bjarne Stroustrup";

    q3.option3 =
    "James Gosling";

    q3.option4 =
    "Guido van Rossum";

    q3.answer = 1;

    questions.push_back(q3);

    // QUESTION 4
    Question q4;

    q4.question =
    "Which symbol is used for comments in C++?";

    q4.option1 = "//";
    q4.option2 = "##";
    q4.option3 = "**";
    q4.option4 = "%%";

    q4.answer = 0;

    questions.push_back(q4);

    // QUESTION 5
    Question q5;

    q5.question =
    "Which company developed Java?";

    q5.option1 = "Microsoft";
    q5.option2 = "Sun Microsystems";
    q5.option3 = "Google";
    q5.option4 = "Apple";

    q5.answer = 1;

    questions.push_back(q5);

    // QUESTION 6
    Question q6;

    q6.question =
    "What does CPU stand for?";

    q6.option1 =
    "Central Process Unit";

    q6.option2 =
    "Central Processing Unit";

    q6.option3 =
    "Computer Personal Unit";

    q6.option4 =
    "Central Power Unit";

    q6.answer = 1;

    questions.push_back(q6);

    // QUESTION 7
    Question q7;

    q7.question =
    "Which data structure uses FIFO?";

    q7.option1 = "Stack";
    q7.option2 = "Queue";
    q7.option3 = "Tree";
    q7.option4 = "Graph";

    q7.answer = 1;

    questions.push_back(q7);

    // QUESTION 8
    Question q8;

    q8.question =
    "Which keyword is used to inherit a class in C++?";

    q8.option1 = "extends";
    q8.option2 = "inherits";
    q8.option3 = ":";
    q8.option4 = "super";

    q8.answer = 2;

    questions.push_back(q8);

    // QUESTION 9
    Question q9;

    q9.question =
    "Which operator is used for comparison?";

    q9.option1 = "=";
    q9.option2 = "==";
    q9.option3 = "+=";
    q9.option4 = "!=";

    q9.answer = 1;

    questions.push_back(q9);

    // QUESTION 10
    Question q10;

    q10.question =
    "Which HTML tag is used for largest heading?";

    q10.option1 = "<h6>";
    q10.option2 = "<heading>";
    q10.option3 = "<head>";
    q10.option4 = "<h1>";

    q10.answer = 3;

    questions.push_back(q10);
}