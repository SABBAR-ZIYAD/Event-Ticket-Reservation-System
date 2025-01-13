#ifndef SYSTEM_H
#define SYSTEM_H
#include "User.h"
#include "Admin.h"
#include "Ticket.h"
#include "Event.cpp"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class System {
public:
    void startScreen();
    void showMainMenu();
    void eventSelectionMenu(const vector<Event>& events);
    void displayMode(const string &mode);
    void adminMode();
    void userMode();
    void exitSystem();
};

#endif 
