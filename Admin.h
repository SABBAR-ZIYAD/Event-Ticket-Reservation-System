#ifndef ADMIN_H
#define ADMIN_H
#include "User.h"
#include "Ticket.h"
#include "Event.h"
#include "System.h"
#include <string>
#include <iostream>
using namespace std;
class Event;
class Admin {
public:
    bool validatePassword();
    void viewUserTable(int eventID);
};

#endif
