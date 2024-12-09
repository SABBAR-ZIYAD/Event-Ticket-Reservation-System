#ifndef TICKET_H
#define TICKET_H

#include <string>
using namespace std;

class Ticket {
private:
    int ticketID;
    string eventName;
    string barcode;

public:
    Ticket();
    void generateBarcode();
    void saveToFile();
};

#endif 
