#include "Error.h"

Error::Error(int code)
{
	this->Code = code;
}

int Error::getErrorCode()
{
	return this->Code;
}

string Error::getErrorMessage()
{
	switch (this->getErrorCode())
	{
	case 100:
		return "Missing data!";
		break;
	case 101:
		return "Incorrect data type!";
		break;
	default:
		return "Unknow error!";
		break;
	}
}