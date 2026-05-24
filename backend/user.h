#ifndef USER_H
#define USER_H

#include<iostream>
using namespace std;

class User {

public:

    string username;
    string password;

    bool registerUser(
        string u,
        string p
    );

    bool loginUser(
        string u,
        string p
    );
};

#endif