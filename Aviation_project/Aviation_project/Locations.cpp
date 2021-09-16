#include "Locations.h"

string* Locations::getCities()
{
    string* cities = new string[5];
    cities[0] = "Budapest";
    cities[1] = "London";
    cities[2] = "Paris";
    cities[3] = "Munich";
    cities[4] = "New_York";

    this->numberOfLocation = 5;

    return cities;
}

int Locations::getNumberOfLocations()
{
    return this->numberOfLocation;
}