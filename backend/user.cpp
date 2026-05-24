#include "user.h"

#include<fstream>

bool User::registerUser(
    string u,
    string p
) {

    ofstream file(
        "users.txt",
        ios::app
    );

    file << u
         << " "
         << p
         << endl;

    file.close();

    return true;
}

bool User::loginUser(
    string u,
    string p
) {

    ifstream file("users.txt");

    string username;
    string password;

    while(file >> username >> password) {

        if(username == u &&
           password == p) {

            return true;
        }
    }

    return false;
}