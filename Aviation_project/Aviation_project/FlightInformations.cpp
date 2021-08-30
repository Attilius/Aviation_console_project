#include "FlightInformations.h"


FlightInformations::FlightInformations(string carrier, string flightNumber, string destination, string time) {
    this->Carrier = carrier;
    this->FlightNumber = flightNumber;
    this->Destination = destination;
    this->Time = time;
}

void FlightInformations::showFlight() {
    cout << left << setw(3);
    cout << this->Carrier;
    cout << left << setw(11);
    cout << this->FlightNumber;
    cout << left << setw(18);
    cout << this->Destination;
    cout << left << setw(15);
    cout << this->Time;
    cout << left << setw(11);
    cout << this->Remarks;
    cout << left << setw(11) << endl;
}

void FlightInformations::setRemarks(string status) {
    this->Remarks = status;
}

string FlightInformations::getCarrier() {
    return this->Carrier;
}

string FlightInformations::getFlightNumber() {
    return this->FlightNumber;
}

string FlightInformations::getDestination() {
    return this->Destination;
}

string FlightInformations::getRemarks() {
    return this->Remarks;
}
