#include <iostream>
#include "Locations.h"
#include "Controller.h"
#include "View.h"
#include "Menu.h"

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
		
	} while (localSelected < 1 || localSelected > sizeOfLocal);

		system("cls");
		loc.showLocation(lc.getCities()[localSelected - 1]);
		menuController.MainMenuContoller();
}

void main_::Controller::MainMenuContoller()
{
	menu::View menu;
	Menu menus;

	int sizeOfMenu = menus.getNumberOfMenuItems();
	int menuSelected;

	do
	{
		menu.setMenu();
		cin >> menuSelected;
		
		switch (menuSelected)
		{
			case 1:
				system("cls");
				cout << "Add new flight" << endl;
				system("pause");
				break;
			case 2:
				system("cls");
				cout << "Update flight" << endl;
				system("pause");
				break;
			case 3:
				system("cls");
				cout << "Display all arrival flight" << endl;
				system("pause");
				break;
			case 4:
				system("cls");
				cout << "Display all departing flight" << endl;
				system("pause");
				break;
			case 5:
				system("cls");
				cout << "Delete flight" << endl;
				system("pause");
				break;
			case 6:
				system("cls");
				cout << "Back to location" << endl;
				system("pause");
				break;
			case 7:
				break;
		
		default:
			break;
		}
		
	} while (menuSelected != 7);
}
