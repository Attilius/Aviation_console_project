#pragma once
#include <string>

using namespace std;

class Error
{
private:
	int Code;

public:
	Error(int code);

	int getErrorCode();

	string getErrorMessage();
};
