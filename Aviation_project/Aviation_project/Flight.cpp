#include "Flight.h"


Flight::Flight(string carrier, string flightNumber, string destination, string time) {
    this->Carrier = carrier;
    this->FlightNumber = flightNumber;
    this->Destination = destination;
    this->Time = time;
}

void Flight::showFlight() {
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

void Flight::setRemarks(string status) {
    this->Remarks = status;
}

string Flight::getCarrier() {
    return this->Carrier;
}

string Flight::getFlightNumber() {
    return this->FlightNumber;
}

string Flight::getDestination() {
    return this->Destination;
}

string Flight::getRemarks() {
    return this->Remarks;
}
