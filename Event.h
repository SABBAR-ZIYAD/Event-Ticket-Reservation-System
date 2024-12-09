#ifndef EVENT_H
#define EVENT_H

#include <string>
using namespace std;

class Event{
    private:
    int id;              
    string name;
    string date;
    string venue;
    int totalTickets;
    int availableTickets;

public:
    Event(int eventId, string eventName, string eventDate, string eventVenue, int total, int available);
    void showDetails() const;
    void decrementTickets();

};

#endif