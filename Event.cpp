#include "Event.h"
#include <iostream>
#include <ctime>
#include <iomanip>

Event::Event() : name("Event00"), date("01/01/2025"), venue("heaven"), totalTickets(0), availableTickets(0) {}

Event::Event(string eventName, string eventDate, string eventVenue, int total, int available) : 
    name(eventName), date(eventDate), venue(eventVenue), totalTickets(total), availableTickets(available) {}

string Event::getName() const {
    return name;
}

string Event::getDate() const {
    return date;
}
void Event::showDetails() const {
    cout << "                       Event Details                       \n";
    cout << "-------------------------------------------------------------\n" << endl;
    cout << "Name: " << name << endl;
    cout << "Date: " << date << endl;
    cout << "Venue: " << venue << endl;
    cout << "Total Tickets: " << totalTickets << endl;
    cout << "Available Tickets: " << availableTickets << endl;
    cout << "\n-------------------------------------------------------------\n" << endl;
}

void Event::decrementTickets() {
    if (availableTickets > 0) {
        availableTickets--;
    } else {
        cout << "No tickets available for this event!" << endl;
    }
}

time_t Event::dateToTimestamp() const {
    int year, month, day;
    sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);

    tm timeStruct = {};
    timeStruct.tm_year = year - 1900;  // tm_year is years since 1900
    timeStruct.tm_mon = month - 1;     // tm_mon is 0-based
    timeStruct.tm_mday = day;

    return mktime(&timeStruct);
}
