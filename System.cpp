#include "System.h"
#include"Admin.h"
#include <thread>
#include <chrono>
#include <iomanip>
#include <iostream>


 void clearScreen() {
   cout << "\033[2J\033[1;1H";
    }


void setConsoleColor(int color) {
     cout << "\033[1;" << (30 + color) << "m";
    }

void System::displayMode(const string &mode) {
    const int totalWidth = 60;
    int padding = (totalWidth - mode.size()) / 2;
    cout << string(padding, ' ') << mode << endl;    
    cout << string(totalWidth, '=')<< endl;      
}

void System::startScreen(){
    const string art = R"(

░▒▓████████▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓████████▓▒░▒▓███████▓▒░▒▓████████▓▒░▒▓█▓▒░▒▓████████▓▒░▒▓█▓▒░░▒▓█▓▒░ 
░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░   ░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░ 
░▒▓█▓▒░       ░▒▓█▓▒▒▓█▓▒░░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░   ░▒▓█▓▒░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░ 
░▒▓██████▓▒░  ░▒▓█▓▒▒▓█▓▒░░▒▓██████▓▒░ ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░   ░▒▓█▓▒░▒▓██████▓▒░  ░▒▓██████▓▒░  
░▒▓█▓▒░        ░▒▓█▓▓█▓▒░ ░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░   ░▒▓█▓▒░▒▓█▓▒░         ░▒▓█▓▒░     
░▒▓█▓▒░        ░▒▓█▓▓█▓▒░ ░▒▓█▓▒░      ░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░   ░▒▓█▓▒░▒▓█▓▒░         ░▒▓█▓▒░     
░▒▓████████▓▒░  ░▒▓██▓▒░  ░▒▓████████▓▒░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▒░   ░▒▓█▓▒░▒▓█▓▒░         ░▒▓█▓▒░     
                                                                                                  
                                                                                                  
    )";
    setConsoleColor(2); 
    clearScreen(); 
    cout << art << endl;
    clearScreen(); 
    setConsoleColor(7); 
}

void System::showMainMenu(){
    cout <<endl;
    cout << "\n                          ========== Main Menu ===========\n";
    cout <<endl;
    cout << "                                    1. Admin\n";
    cout << "                                    2. User\n";
    cout << "                                    3. Exit\n";
    cout <<endl;
    cout << "                          ================================\n";
    cout <<endl;
    cout << "Enter your choice: ";
}

void System::eventSelectionMenu(const vector<Event>& events){
   cout << "                         Events Menu                       \n";
    cout << "-------------------------------------------------------------\n";

    for (size_t i = 0; i < events.size(); ++i) {
        cout << "   " << i + 1 << ". " << setw(50) << left << events[i].getName() << endl;
    }

    cout << "   " << events.size() + 1 << ". Exit\n";
    cout << "-------------------------------------------------------------\n";
    cout << "\nEnter your choice: ";
}
void System::adminMode(){
     
}
void System::userMode(){
    
}
void System::exitSystem(){
    std::cout << "Exiting system";
    
    for (int y = 0; y < 3; y++) { 
        for (int i = 1; i <= 3; ++i) {
            std::cout << " ."; 
            std::cout.flush();
            std::this_thread::sleep_for(std::chrono::seconds(1)); 
        }
        std::cout << "\r              \rExiting system"; 
    }
    
    clearScreen();
}



