#ifndef EVENT_H
#define EVENT_H

#include <string> 
#include <ctime>  

using namespace std;

class Event {
public:
    string name;
    string date;
    string venue;
    int totalTickets;
    int availableTickets;

    Event();
    Event(string eventName, string eventDate, string eventVenue, int total, int available);

    string getName() const;
    string getDate() const;
    void showDetails() const;
    void decrementTickets();
    time_t dateToTimestamp() const;
};

#endif
