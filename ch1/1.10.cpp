#pragma once
#include<iostream>

int abc(int a, int b, int c)
{
	if (a < 0 && b < 0 && c < 0)
		throw 1;
	else if (a == 0 && b == 0 && c == 0)
		throw 2;
	return a + b*c;
}

int main()
{
	int a = 0, b = 0, c = 0;
	try {
		abc(a, b, c);
	}
	catch (int e)
	{
		if (e == 1)
			std::cout << "all parameters<0" << std::endl;
		if(e==2)
			std::cout << "all parameters=0" << std::endl;
	}
	system("pause");
	return 0;
}