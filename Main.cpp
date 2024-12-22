#include <iostream>
#include <cstdlib> 
#include <ctime>  
#include "User.h"

using namespace std;


string generateRandomID() {
    srand(time(0)); 
    string id = "ID";
    for (int i = 0; i < 6; ++i) {
        id += to_string(rand() % 10); 
    }
    return id;
}

int main() {
    User user;

    string randomID = generateRandomID();
    user.setId(randomID);

    cout << "---------------------------------------------\n";
    cout << "               TICKET BOOKING                \n";
    cout << "---------------------------------------------\n";
    cout << "ID: " << user.getId() << "     Do not share these infos with anyone\n";
    user.inputDetails();

    cout << "\n---------------------------------------------\n";
    cout << "                 CONFIRMATION                \n";
    cout << "---------------------------------------------\n";
    cout << "ID: " << user.getId() << "     Do not share these infos with anyone\n";
    cout << "Name: " << user.getFullName() << "\n";
    cout << "Email: " << user.getEmail() << "\n";
    cout << "Phone: " << user.getPhone() << "\n";
    cout << "Press Enter to confirm.\n";
    cin.ignore();

    cout << "\nTicket Booked Successfully!\n";
    cout << "\nPress any key to Exit...\n";
    cin.get();

    return 0;
}
