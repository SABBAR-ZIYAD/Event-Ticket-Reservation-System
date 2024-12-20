#include "Admin.h"
using namespace std;
bool Admin::validatePassword(){
 string password;
 string adminpassword = "admin123";
 cout <<"entre the password for admin :" ;
 cin >> password;
 if (password == adminpassword){
    return true;
 }else{
    cout << "admin password is incorrect" << endl;
    return false;
 }
}

void Admin::viewUserTable(int eventID){
  int user;
    cout << "Enter the number of users: ";
    cin >> user;

    string** usertab = new string*[user];
    for (int i = 0; i < user; ++i) {
        usertab[i] = new string[2]; 
    }

    for (int i = 0; i < user; ++i) {
        cout << "Enter user " << i + 1 << " name: ";
        cin >> usertab[i][0];
        cout << "Enter user " << i + 1 << " ID: ";
        cin >> usertab[i][1];
    }

    cout << "User Table for Event ID " << eventID << ":" << endl;
    for (int i = 0; i < user; ++i) {
        cout << "User " << i + 1 << ": Name = " << usertab[i][0] << ", ID = " << usertab[i][1] << endl;
    }


    for (int i = 0; i < user; ++i) {
        delete[] usertab[i];
    }
    delete[] usertab;
}
