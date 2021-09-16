#pragma once
#include <string>

using namespace std;

class Menu
{
private:
	int numberOfMenuItems;

public:
	string* getMenuItems();

	int getNumberOfMenuItems();
};

