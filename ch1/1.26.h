#pragma once
#include<iostream>

// 1)
// g(4)=1,2,1,3,1,2,1,4,1,2,1,3,1,2,1

// 2)
// g(n)=g(n-1),n,g(n-1) n>1 is the recursive component, 
// g(n)=1,n=1 is the base component.

// 3)
void GrayCode(int n)
{
	if (n < 1)
		throw "n should not be navigate integer";
	if (n == 1)
		std::cout<< "1";
	if (n > 1)
	{
		GrayCode(n - 1);
		std::cout << n;
		GrayCode(n - 1);
	}
}