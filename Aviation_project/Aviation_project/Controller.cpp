#include <iostream>
#include "Locations.h"
#include "Controller.h"
#include "Verification.h"
#include "View.h"
#include "Menu.h"
#include "Model.h"

namespace variables
{
	int localSelected;
}

void local::Controller::LocalMenuController()
{
	location::View loc;
	main_::Controller menuController;
	Verification verification;
	Locations lc;

	string* cities = lc.getCities();
	int sizeOfLocal = lc.getNumberOfLocations();
	int localSelected;

	do
	{
		system("cls");
		loc.setLocation();
		localSelected = verification.menuSelectedInput();
		variables::localSelected = localSelected;

	} while (localSelected < 1 || localSelected > sizeOfLocal);

		system("cls");
		loc.showLocation(lc.getCities()[localSelected - 1]);
		menuController.MainMenuContoller();
}

void main_::Controller::MainMenuContoller()
{
	Verification verification;
	local::Controller local;
	location::View loc;
	menu::View menu;
	Locations lc;
	Model model;
	Menu menus;

	string* cities = lc.getCities();
	int sizeOfMenu = menus.getNumberOfMenuItems();
	int menuSelected;

	do
	{
		system("cls");
		loc.showLocation(lc.getCities()[variables::localSelected - 1]);
		menu.setMenu();
		menuSelected = verification.menuSelectedInput();
		
		switch (menuSelected)
		{
			case 1:
				system("cls");
				loc.showLocation(lc.getCities()[variables::localSelected - 1]);
				model.createData();
				menuSelected = 7;
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
				menuSelected = 7;
				break;
			case 7:
				break;
		
		default:
			break;
		}
		
	} while (menuSelected != 7);
}
