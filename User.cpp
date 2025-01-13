#include "User.h"
#include <algorithm>
#include <cctype>
#include <iostream>
#include <limits>

using namespace std;

User::User() : fullName(""), email(""), phone("") {}

User::User(string Fname, string email, string fon)
    : fullName(Fname), email(email), phone(fon) {}

User User::getUserinfo() {
    return User(fullName, email, phone);
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
    while (Email.find('@') == string::npos) {
        cout << "Invalid email! Please try again.\n";
        cout << "Enter Email: ";
        getline(cin, email);
    }
    email = Email;
}

string User::getPhone() const { 
    return phone; 
}

void User::setPhone(const string& Phone) {
    while (Phone.size() != 10 || !all_of(Phone.begin(), Phone.end(), ::isdigit)) {
        cout << "Invalid phone number! Please try again.\n";
        cout << "Enter Phone: ";
        getline(cin, phone);
    }
    phone = Phone;
}

void User::inputDetails() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    cout << "Enter Full Name: ";
    getline(cin, fullName);
    setFullName(fullName);

    cout << "Enter Email: ";
    string tempEmail;
    getline(cin, tempEmail);
    setEmail(tempEmail);

    cout << "Enter Phone: ";
    string tempPhone;
    getline(cin, tempPhone);
    setPhone(tempPhone);
}


