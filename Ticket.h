#ifndef TICKET_H
#define TICKET_H
#include <string>
#include <iostream>
#include "User.h"
#include "Event.h"
using namespace std;
class Ticket {
private:
    string ticketID;
    string Tdate;
    User userInfo;
    Event eventInfo;
public:
    Ticket();
    Ticket(string Id, User user, Event event, string date);
    static string generateTicketID(time_t eventTimestamp, const std::string& username, const std::string& eventName);
    void saveToFile();
    void showDetails() const;
    const string& getTicketID() const { return ticketID; }
    const string& getTdate() const { return Tdate; }
    const User& getUserInfo() const { return userInfo; }
    const Event& getEventInfo() const { return eventInfo; }
};

#endif 
