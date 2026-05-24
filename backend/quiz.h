#ifndef QUIZ_H
#define QUIZ_H

#include<vector>
#include "question.h"

class Quiz {

public:

    vector<Question> questions;

    void loadQuestions();
};

#endif