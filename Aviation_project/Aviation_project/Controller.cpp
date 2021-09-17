#include <iostream>
#include "Locations.h"
#include "Controller.h"
#include "View.h"
#include "Menu.h"

namespace variables
{
	int localSelected;
}

void local::Controller::LocalMenuController()
{
	location::View loc;
	main_::Controller menuController;
	Locations lc;

	string* cities = lc.getCities();
	int sizeOfLocal = lc.getNumberOfLocations();
	int localSelected;

	do
	{
		system("cls");
		loc.setLocation();
		cin >> localSelected;
		variables::localSelected = localSelected;

	} while (localSelected < 1 || localSelected > sizeOfLocal);

		system("cls");
		loc.showLocation(lc.getCities()[localSelected - 1]);
		menuController.MainMenuContoller();
}

void main_::Controller::MainMenuContoller()
{
	local::Controller local;
	location::View loc;
	menu::View menu;
	Locations lc;
	Menu menus;

	string* cities = lc.getCities();
	int sizeOfMenu = menus.getNumberOfMenuItems();
	int menuSelected;

	do
	{
		system("cls");
		loc.showLocation(lc.getCities()[variables::localSelected - 1]);
		menu.setMenu();
		cin >> menuSelected;
		
		switch (menuSelected)
		{
			case 1:
				system("cls");
				loc.showLocation(lc.getCities()[variables::localSelected - 1]);
				cout << "Add new flight" << endl;
				system("pause");
				break;
			case 2:
				system("cls");
				loc.showLocation(lc.getCities()[variables::localSelected - 1]);
				cout << "Update flight" << endl;
				system("pause");
				break;
			case 3:
				system("cls");
				loc.showLocation(lc.getCities()[variables::localSelected - 1]);
				cout << "Display all arrival flight" << endl;
				system("pause");
				break;
			case 4:
				system("cls");
				loc.showLocation(lc.getCities()[variables::localSelected - 1]);
				cout << "Display all departing flight" << endl;
				system("pause");
				break;
			case 5:
				system("cls");
				loc.showLocation(lc.getCities()[variables::localSelected - 1]);
				cout << "Delete flight" << endl;
				system("pause");
				break;
			case 6:
				system("cls");
				local.LocalMenuController();
				break;
			case 7:
				break;
		
		default:
			break;
		}
		
	} while (menuSelected != 7);
}
