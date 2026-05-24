#include<iostream>
#include<fstream>

#include "quiz.h"
#include "user.h"

using namespace std;

int main() {

    User user;

    int choice;

    string username;
    string password;

    cout << "======================" << endl;
    cout << "      QUIZ MASTER     " << endl;
    cout << "======================" << endl;

    cout << endl;

    cout << "1. Register" << endl;
    cout << "2. Login" << endl;

    cout << endl;

    cout << "Enter Choice: ";
    cin >> choice;

    cout << endl;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    cout << endl;

    // Register
    if(choice == 1) {

        user.registerUser(
            username,
            password
        );

        cout << "Registration Successful!"
             << endl;
    }

    // Login
    else if(choice == 2) {

        bool success =
        user.loginUser(
            username,
            password
        );

        if(!success) {

            cout << "Invalid Login!"
                 << endl;

            return 0;
        }

        cout << "Login Successful!"
             << endl;
    }

    Quiz quiz;

    quiz.loadQuestions();

    int score = 0;

    int answer;

    for(int i = 0;
        i < quiz.questions.size();
        i++) {

        Question q =
        quiz.questions[i];

        cout << endl;

        cout << q.question << endl;

        cout << "1. "
             << q.option1 << endl;

        cout << "2. "
             << q.option2 << endl;

        cout << "3. "
             << q.option3 << endl;

        cout << "4. "
             << q.option4 << endl;

        cout << endl;

        cout << "Enter Answer: ";
        cin >> answer;

        if(answer - 1 ==
           q.answer) {

            score++;
        }
    }

    cout << endl;

    cout << "Final Score: "
         << score
         << "/"
         << quiz.questions.size()
         << endl;

    ofstream file(
        "scores.txt",
        ios::app
    );

    file << username
         << " "
         << score
         << endl;

    file.close();

    return 0;
}