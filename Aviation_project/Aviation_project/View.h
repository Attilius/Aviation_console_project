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
namespace Alert
{
	class View
	{
	public:
		void showAlertMessage(string alertMessage);
	};
}
namespace Confirmation
{
	class View
	{
	public:
		void confirmationMessage(string confirmationMsg);
	};
}
namespace Location
{
	class View
	{
	public:
		void showLocation(string location);
	};
}
