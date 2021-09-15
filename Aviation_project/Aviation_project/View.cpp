#include <iostream>
#include <array>
#include "Error.h"
#include "View.h"

void error::View::showErrorMessage(int errorCode, string errorMessage)
{
	cout << " _______________________________________________ " << endl;
	cout << "|						|" << endl;
	cout << "|   d88888b  d8888b. d8888b.  .d88b.  d8888b.   |" << endl;
	cout << "|   88'      88  `8D 88  `8D .8P  Y8. 88  `8D   |" << endl;
	cout << "|   w88ooooo 88oobY' 88oobY' 88    88 88oobY'   |" << endl;
	cout << "|   88~~~~~  88`8b   88`8b   88    88 88`8b     |" << endl;
	cout << "|   88.      88 `88. 88 `88. `8b  d8' 88 `88.   |" << endl;
	cout << "|   Y88888P  88   YD 88   YD  `Y88P'  88   YD   |" << endl;
	cout << "|_______________________________________________|" << endl;
	cout << " " << endl;
	cout << "E" << errorCode << ": " << errorMessage << endl;
	cout << " " << endl;
	cout << "Press any key to continue!" << endl;

}

void Alert::View::showAlertMessage(string alertMessage)
{
	cout << " ______________________________________________________________________ " << endl;
	cout << "|					                               |" << endl;
	cout << "|   db   d8b   db  .d8b.  d8888b. d8b   db d888888b d8b   db  d888b    |" << endl;
	cout << "|   88   I8I   88 d8' `8b 88  `8D 888o  88   `88'   888o  88 88' Y8b   |" << endl;
	cout << "|   88   I8I   88 88ooo88 88oobY' 88V8o 88    88    88V8o 88 88        |" << endl;
	cout << "|   Y8   I8I   88 88~~~88 88`8b   88 V8o88    88    88 V8o88 88  ooo   |" << endl;
	cout << "|   `8b d8'8b d8' 88   88 88 `88. 88  V888   .88.   88  V888 88. ~8~   |" << endl;
	cout << "|    `8b8' `8d8'  YP   YP 88   YD VP   V8P Y888888P VP   V8P  Y888P    |" << endl;
	cout << "|______________________________________________________________________|" << endl;
	cout << " " << endl;
	cout << "=> " << alertMessage << endl;
	cout << " " << endl;
	cout << "Press any key to continue!" << endl;
	}

void Confirmation::View::confirmationMessage(string confirmationMsg)
{
	cout << " _______________________________________________________________________________________________________________ " << endl;
	cout << "|													      |" << endl;
	cout << "|   .o88b.   .d88b.  d8b   db d88888b d888888b d8888b. .88b  d88.  .d8b.  d888888b d888888b  .d88b.  d8b   db   | " << endl;
	cout << "|   d8P  Y8 .8P  Y8. 888o  88 88'       `88'   88  `8D 88'YbdP`88 d8' `8b `~~88~~'   `88'   .8P  Y8. 888o  88   | " << endl;
	cout << "|   8P      88    88 88V8o 88 88ooo      88    88oobY' 88  88  88 88ooo88    88       88    88    88 88V8o 88   | " << endl;
	cout << "|   8b      88    88 88 V8o88 88~~~      88    88`8b   88  88  88 88~~~88    88       88    88    88 88 V8o88   | " << endl;
	cout << "|   Y8b  d8 `8b  d8' 88  V888 88        .88.   88 `88. 88  88  88 88   88    88      .88.   `8b  d8' 88  V888   | " << endl;
	cout << "|   `Y88P'   `Y88P'  VP   V8P YP      Y888888P 88  YD  YP  YP  YP YP   YP    YP    Y888888P  `Y88P'  VP   V8P   | " << endl;
	cout << "|_______________________________________________________________________________________________________________| " << endl;
	cout << " " << endl;
	cout << "=> " << confirmationMsg << endl;
	cout << " " << endl;
	cout << "Press any key to continue!" << endl;
}

void Location::View::showLocation(string location)
{
	cout << " __________________________________________________________________________" << endl;
	cout << "|									   |" << endl;
	cout << "|   db       .d88b.   .o88b.  .d8b.  d888888b d888888b  .d88b.  d8b   db   | " << endl;
	cout << "|   88      .8P  Y8. d8P  Y8 d8' `8b `~~88~~'   `88'   .8P  Y8. 888o  88   | " << endl;
	cout << "|   88      88    88 8P      88ooo88    88       88    88    88 88V8o 88   | " << endl;
	cout << "|   88      88    88 8b      88~~~88    88       88    88    88 88 V8o88   | " << endl;
	cout << "|   Y88888P  `Y88P'   `Y88P' YP   YP    YP    Y888888P  `Y88P'  VP   V8P   | " << endl;
	cout << "|__________________________________________________________________________| " << endl;
	cout << " " << endl;
	cout << location << endl;
	cout << "___________________________________________________________________________" << endl;
	cout << " " << endl;
	cout << "Press any key to continue!" << endl;
}

void Location::View::setLocation()
{
	array<string, 5> cities_array{ "Budapest", "London", "Paris", "Munich", "New_York" };

	cout << " __________________________________________________________________________" << endl;
	cout << "|									   |" << endl;
	cout << "|   db       .d88b.   .o88b.  .d8b.  d888888b d888888b  .d88b.  d8b   db   | " << endl;
	cout << "|   88      .8P  Y8. d8P  Y8 d8' `8b `~~88~~'   `88'   .8P  Y8. 888o  88   | " << endl;
	cout << "|   88      88    88 8P      88ooo88    88       88    88    88 88V8o 88   | " << endl;
	cout << "|   88      88    88 8b      88~~~88    88       88    88    88 88 V8o88   | " << endl;
	cout << "|   Y88888P  `Y88P'   `Y88P' YP   YP    YP    Y888888P  `Y88P'  VP   V8P   | " << endl;
	cout << "|__________________________________________________________________________| " << endl;
	cout << " " << endl;
	cout << "Please select location from this list below:" << endl;
	cout << " " << endl;

	for (size_t i = 0; i < cities_array.size(); i++) cout << "=> " << i + 1 << ". " << cities_array[i] << endl;

	cout << " " << endl;
	cout << "Selected: ";
}