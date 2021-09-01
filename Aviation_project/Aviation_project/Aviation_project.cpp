#include <iostream>
#include "FlightInformations.h"
#include "Time.h"
#include "Menu.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;

namespace Budapest {
	vector <FlightInformations> flightArrivals;
	vector <FlightInformations> flightDepartures;
}

namespace London {
	vector <FlightInformations> flightArrivals;
	vector <FlightInformations> flightDepartures;
}

namespace Paris {
	vector <FlightInformations> flightArrivals;
	vector <FlightInformations> flightDepartures;
}

namespace Munich {
	vector <FlightInformations> flightArrivals;
	vector <FlightInformations> flightDepartures;
}

namespace New_York {
	vector <FlightInformations> flightArrivals;
	vector <FlightInformations> flightDepartures;
}

int main()
{
	string location = " ";
	int selected = 0;

	do
	{
		system("cls");
		setLocation();
		cin >> selected;

		switch (selected)
		{
		case 1:
			system("cls");
			location = "Budapest";
			cout << location << endl;
			system("pause");
			break;
		case 2:
			system("cls");
			location = "London";
			cout << location << endl;
			system("pause");
			break;
		case 3:
			system("cls");
			location = "Paris";
			cout << location << endl;
			system("pause");
			break;
		case 4:
			system("cls");
			location = "Munich";
			cout << location << endl;
			system("pause");
			break;
		case 5:
			system("cls");
			location = "New_York";
			cout << location << endl;
			system("pause");
			break;
		case 6:
			return EXIT_SUCCESS;
			break;
		default:
			break;
		}
	} while (selected != 6);

    system("pause>0");
    return EXIT_SUCCESS;
}
