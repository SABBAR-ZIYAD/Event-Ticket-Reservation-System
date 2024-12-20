#include"Event.h"

Event::Event():id(0), name("Event00"), date("01/01/2025"), venue("heaven"), totalTickets(0), availableTickets(0){}

Event::Event(string eventId, string eventName, string eventDate, string eventVenue, int total, int available) : 
id(eventId), name(eventName), date(eventDate), venue(eventVenue), totalTickets(total), availableTickets(available) {}

string Event::getName(){
    return name;
}

void Event::showDetails(Event eventArray[], int size) const {
    cout << "Event Details:\n";
    for (int i = 0; i < size; i++) {
        cout << "Event ID: " << eventArray[i].id << endl;
        cout << "Name: " << eventArray[i].name << endl;
        cout << "Date: " << eventArray[i].date << endl;
        cout << "Venue: " << eventArray[i].venue << endl;
        cout << "Total Tickets: " << eventArray[i].totalTickets << endl;
        cout << "Available Tickets: " << eventArray[i].availableTickets << endl;
        cout << "-----------------------------" << endl;
    }
}
void Event::decrementTickets() {
    if (availableTickets > 0) {
        availableTickets--;
    } else {
        cout << "No tickets available for this event!" << endl;
    }
}