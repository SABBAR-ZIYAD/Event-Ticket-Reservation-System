#include "User.h"
#include <algorithm>
#include <cctype>
#include <iostream>
#include <limits>

using namespace std;

User::User() : id(""), fullName(""), email(""), phone(""), eventID("") {}

User::User(string Uid, string Fname, string Email, string Phone, string Evid)
    : id(Uid), fullName(Fname), email(Email), phone(Phone), eventID(Evid) {}

string User::getId() const { 
    return id; 
}

void User::setId(const string& Uid) { 
    id = Uid; 
}

string User::getFullName() const { 
    return fullName; 
}

void User::setFullName(const string& Fname) { 
    fullName = Fname; 
}

string User::getEmail() const { 
    return email; 
}

void User::setEmail(const string& Email) {
    if (Email.find('@') != string::npos) {
        email = Email;
    } else {
        cout << "Invalid email! Please try again.\n";
    }
}

string User::getPhone() const { 
    return phone; 
}

void User::setPhone(const string& Phone) {
    if (Phone.size() == 10 && all_of(Phone.begin(), Phone.end(), ::isdigit)) {
        phone = Phone;
    } else {
        cout << "Invalid phone number!\n";
    }
}

void User::inputDetails() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter Full Name: ";
    getline(cin, fullName);

    cout << "Enter Email: ";
    string tempEmail;
    getline(cin, tempEmail);
    setEmail(tempEmail);

    cout << "Enter Phone: ";
    string tempPhone;
    getline(cin, tempPhone);
    setPhone(tempPhone);
}

void User::saveToFile(int eventID) {
    // TODO: Implement file saving logic here.
    cout << "Saving user details to file for event ID: " << eventID << "\n";
}
