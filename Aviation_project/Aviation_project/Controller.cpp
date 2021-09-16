#include <iostream>
#include "Locations.h"
#include "Controller.h"
#include "View.h"
#include "Menu.h"

void local::Controller::LocalMenuController()
{
	location::View loc;
	main::Controller menuController;
	Locations lc;

	string* cities = lc.getCities();
	int sizeOfLocal = lc.getNumberOfLocations();
	int localSelected;

	do
	{
		system("cls");
		loc.setLocation();
		cin >> localSelected;
		system("cls");
		loc.showLocation(lc.getCities()[localSelected - 1]);
		menuController.MainMenuContoller();
		
	} while (localSelected < 1 || localSelected > sizeOfLocal);

}

void main::Controller::MainMenuContoller()
{
	menu::View menu;
	Menu menus;

	int sizeOfMenu = menus.getNumberOfMenuItems();
	int menuSelected;

	do
	{
		menu.setMenu();
		cin >> menuSelected;
		if (menuSelected == 7) EXIT_SUCCESS;

	} while (menuSelected < 1 || menuSelected > sizeOfMenu);
}
