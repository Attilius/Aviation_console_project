#pragma once
#include <iostream>
#include <iomanip>
#include <string>

using std::string;
using std::cout;
using std::setw;
using std::left;
using std::right;
using std::endl;

class FlightInformations
{
private:
    string Carrier;
    string FlightNumber;
    string Destination;
    string Time;
    string Remarks = " ";
public:
    FlightInformations(string carrier, string flightNumber, string destination, string time);

    void showFlight();

    void setRemarks(string status);

    string getCarrier();

    string getFlightNumber();

    string getDestination();

    string getRemarks();
};

