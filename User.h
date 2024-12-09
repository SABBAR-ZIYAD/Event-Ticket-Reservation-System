#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
private:
    int id;
    string fullName;
    string email;
    string phone;
    int eventID;

public:
    User();
    void inputDetails();
    void saveToFile(int eventID);
};

#endif 
