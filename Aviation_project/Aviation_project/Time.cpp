#include "Time.h"

Time::Time(string time) {
    stringstream test(time);
    string segment;
    vector<string> segmentList;

    while (getline(test, segment, ':'))
    {
        segmentList.push_back(segment);
    }
    int hour = stoi(segmentList[0]);
    int minute = stoi(segmentList[1]);

    this->Hour = hour;
    this->Minute = minute;
}

int Time::getHour() {
    return this->Hour;
}

int Time::getMinute() {
    return this->Minute;
}

string Time::getLondonTime(int Hour, int Minute) {
    string hour = to_string(Hour - 1);
    string minute = to_string(Minute);

    if ((Hour - 1) < 10) hour = "0" + to_string(Hour - 1);

    if (Minute < 10) minute = "0" + to_string(Minute);

    return hour + ":" + minute;
}

string Time::getNewYorkTime(int Hour, int Minute) {
    string hour = to_string(Hour - 6);
    string minute = to_string(Minute);

    if ((Hour - 6) < 10) hour = "0" + to_string(Hour - 6);

    if (Minute < 10) minute = "0" + to_string(Minute);

    return hour + ":" + minute;
}