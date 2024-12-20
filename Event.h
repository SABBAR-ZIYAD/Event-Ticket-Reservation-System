#ifndef EVENT_H
#define EVENT_H
#include <string>
#include <iostream>
using namespace std;
#include "User.h"
#include "Admin.h"
#include "Ticket.h"
#include "Event.h"
#include "System.h"

class Event{
    public:
    string id;              
    string name;
    string date;
    string venue;
    int totalTickets;
    int availableTickets;
    Event();
    Event(string eventId, string eventName, string eventDate, string eventVenue, int total, int available);
    string getName();
    void showDetails(Event eventAray[], int size) const;
    void decrementTickets();

};

#endif