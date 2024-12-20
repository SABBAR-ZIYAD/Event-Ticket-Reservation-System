#include "System.h"
#include "Event.h"

int c,i;
void System::startScreen(){
   
}
void System::showMainMenu(){
    cout << "\n           ========== Main Menu ==========\n";
    cout << "                       1. Admin\n";
    cout << "                       2. User\n";
    cout << "                       3. Exit\n";
    cout << "             ================================\n";
    cout << "Enter your choice: ";
}

void System::eventSelectionMenu(Event events[], int size){
   cout << "\n           ========== Events Menu ==========\n";
   for ( i = 0; i < size; i++) {
        cout << "                       " << i + 1 << ". " << events[i].getName() << endl;
    }
    cout << "            =================================\n";
    cout << "Enter the event number to view details, or 0 to return: ";
}
void System::adminMode(){

}
void System::userMode(){
    
}
void System::exitSystem(){
   
}
