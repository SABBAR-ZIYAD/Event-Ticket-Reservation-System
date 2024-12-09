#ifndef ADMIN_H
#define ADMIN_H
#include <string>
using namespace std;

class Admin {
public:
    bool validatePassword();
    void viewUserTable(int eventID);
};

#endif
