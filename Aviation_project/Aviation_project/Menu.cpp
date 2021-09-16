#include "Menu.h"

string* Menu::getMenuItems()
{
    string* menuItems = new string[7];
    menuItems[0] = "Add new flight";
    menuItems[1] = "Update flight";
    menuItems[2] = "Display all arrival flight";
    menuItems[3] = "Display all departing flight";
    menuItems[4] = "Delete flight";
    menuItems[5] = "Back to location";
    menuItems[6] = "Quit";

    this->numberOfMenuItems = 7;

    return menuItems;
}

int Menu::getNumberOfMenuItems()
{
    return this->numberOfMenuItems;
}