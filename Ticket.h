#ifndef TICKET_H
#define TICKET_H
#include <string>
#include <iostream>
using namespace std;
class Ticket {
private:
    int ticketID;
    string eventName;
    string barcode;
public:
    Ticket();
    Ticket(int Id, string eventN);
    void generateBarcode();
    void saveToFile();
};

#endif 
