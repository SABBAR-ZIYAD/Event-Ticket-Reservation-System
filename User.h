#ifndef USER_H
#define USER_H
#include <string>
#include <iostream>
using namespace std;

class User {
private:
    string fullName;
    string email;
    string phone;

public:

    User();
    User( string Fname, string email, string fon);
    User getUserinfo();
    
    string getFullName() const;
    void setFullName(const string& Fname);

    string getEmail() const;
    void setEmail(const string& Email);

    string getPhone() const;
    void setPhone(const string& fon);
    void inputDetails();
};

#endif
