#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <ctime>

using std::string;
using std::vector;
using std::to_string;
using std::stringstream;

class Time
{
private:
    int Hour;
    int Minute;

public:
    Time(string time);

    int getHour();

    int getMinute();

    string getLondonTime(int Hour, int Minute);

    string getNewYorkTime(int Hour, int Minute);
};

