/*
* use TimePrinter to show the current time, by <ctime>
*/

#pragma once
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <sstream>

class TP
{
public:
	std::string TimePrinter() {
		std::stringstream ss;
		time_t now = time(0);
		char* dt = ctime(&now);
		ss << dt;
		return ss.str();
	}
};
