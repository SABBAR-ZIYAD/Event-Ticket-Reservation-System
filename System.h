#ifndef SYSTEM_H
#define SYSTEM_H

#include <string>
using namespace std;

class System {
public:
    void startScreen();
    void showMainMenu();
    void eventSelectionMenu();
    void adminMode();
    void userMode();
    void exitSystem();
};

#endif 
