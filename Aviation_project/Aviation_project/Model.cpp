#include "Verification.h"
#include "Controller.h"
#include <iostream>
#include "Model.h"

void Model::createData()
{
    main_::Controller menuController;
    Verification verification;
    int recordNumber;

    cout << " " << endl;
    cout << "How many flights would you like recording?" << endl;
    cout << " " << endl;
    cout << "If you'd not recording any flight that type 0 and go back to Main menu." << endl;
    cout << " " << endl;
    cout << "Flight record: ";
    recordNumber = verification.menuSelectedInput();

    if (recordNumber == 0) menuController.MainMenuContoller();
}
