#include <iostream>
#include <string>
#include <vector>
#include "ticket.h"
#include "admin.h"
#include "System.h"
#include "User.h"
using namespace std;
//Temporarry includes
#include "System.cpp"
#include "Ticket.cpp"
#include "User.cpp"
#include "Admin.cpp"
//reg add HKCU\Console /v VirtualTerminalLevel /t REG_DWORD /d 1
//chcp 65001

string getCurrentTimestamp() {
    time_t now = time(nullptr);
    tm* localTime = localtime(&now);
    ostringstream timestamp;
    timestamp << put_time(localTime, "%d-%m-%Y %H:%M:%S");
    return timestamp.str();
}


int main(){
    System sys;
    Admin admin;
    vector<Event> events;
    vector <Ticket> tickets;
    events.emplace_back("Marrakech International Film Festival", "2025-02-20", "Palais des Congrès, Marrakech", 1000, 1000);
    events.emplace_back("Gnaoua World Music Festival", "2025-06-21", "Essaouira", 500, 500);
    events.emplace_back("Timitar Festival", "2025-07-15", "Agadir", 700, 700);
    events.emplace_back("Casablanca Jazz Festival", "2025-09-10", "Casablanca", 300, 300);
    events.emplace_back("Fez Festival of World Sacred Music", "2025-05-01", "Fez", 600, 600);
    events.emplace_back("Oasis Festival", "2025-09-14", "Fellah Hotel, Marrakech", 800, 800);
    events.emplace_back("Rabat International Book Fair", "2025-10-02", "Exhibition Center, Rabat", 400, 400);
    events.emplace_back("Mawazine", "2025-06-20", "Rabat", 1200, 1200);


     sys.startScreen();
     cout << endl << endl << endl;
     cout <<"Press any Key to start ";
     cin.get();
     cout << endl << endl << endl;
     sys.showMainMenu();
     int eventIndex = -1;
     int choice;
     cin >> choice;
     bool adminpass ;
     switch (choice){
     case 1:
       adminpass = admin.validatePassword();
      cout << endl << endl << endl;
        if (adminpass) {
          sys.displayMode("ADMIN MODE");
          sys.eventSelectionMenu(events);
          int eventChoice;
          cin >> eventChoice;
          cout << endl;
          cout << "                           EVENT BOOKINGS                        \n";
          cout << "-------------------------------------------------------------------\n";
          cout << " ID   | Name        | Email         | Phone      | Event    | Date\n";
          cout << "-------------------------------------------------------------------\n";
          switch (eventChoice){
          case 1 :
            for (const auto& ticket : tickets) {
                if (ticket.getEventInfo().getName() == events[eventChoice-1].getName()) {
                    cout << " " << ticket.getTicketID() << "    | " << ticket.getUserInfo().getFullName() << " | " 
                         << ticket.getUserInfo().getEmail() << " | " << ticket.getUserInfo().getPhone() 
                         << " | " << ticket.getEventInfo().getName() << " | " << ticket.getTdate()<< "\n";
                }
            }
            break;
          case 2 :
            for (const auto& ticket : tickets) {
                if (ticket.getEventInfo().getName() == events[eventChoice-1].getName()) {
                    cout << " " << ticket.getTicketID() << "    | " << ticket.getUserInfo().getFullName() << " | " 
                         << ticket.getUserInfo().getEmail() << " | " << ticket.getUserInfo().getPhone() 
                         << " | " << ticket.getEventInfo().getName() << " | " << ticket.getTdate()<< "\n";
                }
            }
            break;
          case 3 :
            for (const auto& ticket : tickets) {
                if (ticket.getEventInfo().getName() == events[eventChoice-1].getName()) {
                    cout << " " << ticket.getTicketID() << "    | " << ticket.getUserInfo().getFullName() << " | " 
                         << ticket.getUserInfo().getEmail() << " | " << ticket.getUserInfo().getPhone() 
                         << " | " << ticket.getEventInfo().getName() << " | " << ticket.getTdate()<< "\n";
                }
            }
            break;
          case 4 :
            for (const auto& ticket : tickets) {
                if (ticket.getEventInfo().getName() == events[eventChoice-1].getName()) {
                    cout << " " << ticket.getTicketID() << "    | " << ticket.getUserInfo().getFullName() << " | " 
                         << ticket.getUserInfo().getEmail() << " | " << ticket.getUserInfo().getPhone() 
                         << " | " << ticket.getEventInfo().getName() << " | " << ticket.getTdate()<< "\n";
                }
            }
            break;
          case 5 :
            for (const auto& ticket : tickets) {
                if (ticket.getEventInfo().getName() == events[eventChoice-1].getName()) {
                    cout << " " << ticket.getTicketID() << "    | " << ticket.getUserInfo().getFullName() << " | " 
                         << ticket.getUserInfo().getEmail() << " | " << ticket.getUserInfo().getPhone() 
                         << " | " << ticket.getEventInfo().getName() << " | " << ticket.getTdate()<< "\n";
                }
            }
            break;
          case 6 :    
            for (const auto& ticket : tickets) {
                if (ticket.getEventInfo().getName() == events[eventChoice-1].getName()) {
                    cout << " " << ticket.getTicketID() << "    | " << ticket.getUserInfo().getFullName() << " | " 
                         << ticket.getUserInfo().getEmail() << " | " << ticket.getUserInfo().getPhone() 
                         << " | " << ticket.getEventInfo().getName() << " | " << ticket.getTdate()<< "\n";
                }
            }
            break;
          case 7 :
            for (const auto& ticket : tickets) {
                if (ticket.getEventInfo().getName() == events[eventChoice-1].getName()) {
                    cout << " " << ticket.getTicketID() << "    | " << ticket.getUserInfo().getFullName() << " | " 
                         << ticket.getUserInfo().getEmail() << " | " << ticket.getUserInfo().getPhone() 
                         << " | " << ticket.getEventInfo().getName() << " | " << ticket.getTdate()<< "\n";
                }
            }
            break;
          case 8 :  
            for (const auto& ticket : tickets) {
                if (ticket.getEventInfo().getName() == events[eventChoice-1].getName()) {
                    cout << " " << ticket.getTicketID() << "    | " << ticket.getUserInfo().getFullName() << " | " 
                         << ticket.getUserInfo().getEmail() << " | " << ticket.getUserInfo().getPhone() 
                         << " | " << ticket.getEventInfo().getName() << " | " << ticket.getTdate()<< "\n";
                }
            }
            break;
          case 9 :
            sys.exitSystem();
            break;
          }
        }
         else {
               cout << "Access denied." << endl;
               sys.exitSystem();
               return 0;
         }
        break;
     case 2:
         cout << endl << endl << endl;
          sys.displayMode("USER MODE");
          sys.eventSelectionMenu(events);
          int eventChoice;  
          cin >> eventChoice;
          cout << endl << endl << endl;
          switch (eventChoice){ 
          case 1 :
           sys.displayMode("USER MODE");
            events[0].showDetails();
            break;
          case 2 :  
           sys.displayMode("USER MODE");
            events[1].showDetails();
            break;  
          case 3 :
            sys.displayMode("USER MODE");
            events[2].showDetails();
            break;
          case 4 :  
            sys.displayMode("USER MODE");
            events[3].showDetails();
            break;
          case 5 :
            sys.displayMode("USER MODE");
            events[4].showDetails();
            break;
          case 6 :
            events[5].showDetails();
            break;
          case 7 :  
            sys.displayMode("USER MODE");
            events[6].showDetails();
            break;
          case 8 :  
            sys.displayMode("USER MODE"); 
            events[7].showDetails();
            break;
          case 9 :  
            sys.exitSystem();
            break;
          }
          cout << "Do you want to book a ticket ? (y/n) ";
          char ch;
          cin >> ch;
          if (ch == 'y' || ch == 'Y') {
            User newUser;
            newUser.inputDetails();
            string usernam = newUser.getFullName();
            string eventName=events[eventChoice-1].getName();
            time_t eventTimestamp = events[eventChoice-1].dateToTimestamp();
            string Date = getCurrentTimestamp();
            string ticketID = Ticket::generateTicketID(eventTimestamp, usernam, eventName);
            Ticket newTicket( ticketID, newUser, events[eventChoice-1], Date);
            newTicket.showDetails();
            cout << "Press Enter to confirm...";
            cin.ignore(); 
            cin.get(); 
            cout << endl << endl;
            cout << "Ticket booked successfully!" << endl;
            events[eventChoice-1].decrementTickets();
            tickets.push_back(newTicket);
            sys.exitSystem();
          }
          else {
            cout << "Thank you for using our system!" << endl;
            sys.exitSystem();
          }
        break;
      case 3:
        sys.exitSystem();
        break;
     }
     
    return 0;
}
