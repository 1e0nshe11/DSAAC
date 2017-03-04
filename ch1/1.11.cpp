#include<iostream>

template<typename T>
int count(T&a)
{
	if (sizeof(a) / sizeof(a[0]) < 1)
		throw "n<1";
	return sizeof(a) / sizeof(a[0]);
}
int main()
{
	int a[3] = { 1,2,3 };
	try {
		std::cout << count(a) << std::endl;
	}
	catch (char*)
	{
		std::cout << "n should be >1" << std::endl;
	}
	system("pause");
	return 0;
}