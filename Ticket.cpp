#include "Ticket.h"
#include <string>
#include <ctime>
#include <sstream>
#include <iomanip>
#include <chrono>

Ticket::Ticket():ticketID(0){}
Ticket::Ticket(string Id, User user, Event event, string date):ticketID(Id),Tdate(date), userInfo(user), eventInfo(event) {}

string Ticket::generateTicketID(time_t eventTimestamp, const std::string& username, const std::string& eventName) {
        time_t currentTimestamp = time(nullptr);
        time_t timestampSum = eventTimestamp + currentTimestamp;

        std::string eventPrefix = eventName.substr(0, 2);
        std::string userPrefix = username.substr(0, 2);
        std::stringstream ticketID;
        ticketID << eventPrefix
                 << userPrefix
                 << timestampSum;

    return ticketID.str();
}
void Ticket::saveToFile(){

}

void Ticket::showDetails() const {
    cout << "                         CONFIRMATION                       \n";
    cout << "-------------------------------------------------------------\n";
    cout << "ID: " << ticketID << " (Do not share this ID with anyone)\n";
    cout << "Name: " << userInfo.getFullName() << "\n";
    cout << "Email: " << userInfo.getEmail() << "\n";
    cout << "Phone: " << userInfo.getPhone() << "\n";
    cout << "Event Name: " << eventInfo.getName() << "\n";
    cout << "Event Date: " << eventInfo.getDate() << "\n";
    cout << "-------------------------------------------------------------\n";
}

