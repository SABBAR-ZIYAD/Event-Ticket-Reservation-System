#ifndef SYSTEM_H
#define SYSTEM_H
#include "User.h"
#include "Admin.h"
#include "Ticket.h"
#include "Event.h"
#include <string>
#include <iostream>
using namespace std;
class Event;
class System {
public:
    void startScreen();
    void showMainMenu();
    void eventSelectionMenu(Event events[], int size);
    void adminMode();
    void userMode();
    void exitSystem();
};

#endif 
