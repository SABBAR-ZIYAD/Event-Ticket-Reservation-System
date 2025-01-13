#include "Admin.h"
#include <iostream>
using namespace std;


bool Admin::validatePassword(){
 string adminPasskey; 
    const string correctPasskey = "00000"; 
    int attempts = 3; 

    cout << endl;
    cout << "\n                          ADMIN LOGIN\n";
    cout << "*************************************************************\n";
    cout << endl;
    cout << endl;

    while (attempts > 0) {
        cout << " Enter Admin Passkey: ";
        cin >> adminPasskey; 

        if (adminPasskey == correctPasskey) {
            cout << "Access granted. Welcome, Admin!\n";
            cout <<endl<<endl;
            cout << "*************************************************************\n";
            return true; 
        } else {
            attempts--; 
            if (attempts > 0) {
                cout << "\nInvalid passkey. You have " << attempts << " attempt(s) remaining.\n";
            }
        }
    }

    cout << "\nToo many failed attempts. Access denied.\n";
    return false;
}
/* 
void Admin::viewUserTable(int eventID){

}
*/