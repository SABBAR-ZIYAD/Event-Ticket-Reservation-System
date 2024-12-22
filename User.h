#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>

using namespace std;

class User {
private:
    string id;
    string fullName;
    string email;
    string phone;

public:
    string eventID;

    User();
    User(string Uid, string Fname, string Email, string Phone, string Evid);

    string getId() const;
    void setId(const string& Uid);

    string getFullName() const;
    void setFullName(const string& Fname);

    string getEmail() const;
    void setEmail(const string& Email);

    string getPhone() const;
    void setPhone(const string& Phone);

    void inputDetails();
    void saveToFile(int eventID);
};

#endif
