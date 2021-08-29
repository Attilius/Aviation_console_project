#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string location = " ";
	int selected = 0;

	do
	{
		system("cls");
		cout << "Please choose a location:" << endl;
		cout << " " << endl;
		cout << "=> 1. Budapest" << endl;
		cout << "=> 2. London" << endl;
		cout << "=> 3. Paris" << endl;
		cout << "=> 4. Munich" << endl;
		cout << "=> 5. New_York" << endl;
		cout << "=> 6. Quit" << endl;
		cout << " " << endl;
		cout << "Select: ";
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
