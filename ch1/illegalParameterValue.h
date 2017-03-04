#pragma once
#include<string>
#include<iostream>

class illegalParameterValue
{
public:
	illegalParameterValue():message("illegal parameter value"){}
	illegalParameterValue(char* theMessage) { message = theMessage; }
	void outputMessage() { std::cout << message << std::endl; }
private:
	std::string message;
};