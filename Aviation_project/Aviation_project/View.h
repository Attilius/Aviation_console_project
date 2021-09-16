#pragma once
#include "Error.h"

using namespace std;

namespace error
{
	class View
	{
	public:
		void showErrorMessage(int errorCode, string errorMessage);
	};
}
namespace alert
{
	class View
	{
	public:
		void showAlertMessage(string alertMessage);
	};
}
namespace confirmation
{
	class View
	{
	public:
		void confirmationMessage(string confirmationMsg);
	};
}
namespace location
{
	class View
	{
	public:
		void showLocation(string location);
		void setLocation();
	};
}
namespace menu
{
	class View
	{
	public:
		void setMenu();
	};
}
