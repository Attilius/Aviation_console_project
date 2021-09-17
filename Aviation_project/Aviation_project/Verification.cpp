#include <iostream>
#include <regex>
#include "Verification.h"

using namespace std;

int Verification::menuSelectedInput()
{
    const regex pattern("[a-zA-Z<>#&@{}:;,?+!%/=()-_*$ß€đĐ]*");
    string selected;
    cin >> selected;

    if (regex_match(selected, pattern)) return -1;

    return stoi(selected);
}
