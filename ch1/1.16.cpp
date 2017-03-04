#include "1.16.h"
#include"illegalParameterValue.h"
#include<iostream>

currency::currency(signType theSign, unsigned long theDollars, unsigned int theCents)
{
	setValue(theSign, theDollars, theCents);
}

void currency::setValue(signType theSign, unsigned long theDollars, unsigned int theCents)
{
	if (theCents > 99)
		throw illegalParameterValue("Cents should be < 100");

	sign = theSign;
	dollars = theDollars;
	cents = theCents;
}

void currency::setValue(double theAmount)
{
	if(theAmount<0)
	{
		sign = minus;
		theAmount = -theAmount;
	}
	else sign = plus;
	dollars = (unsigned long)theAmount;
	cents = (unsigned int)((theAmount + 0.001 - dollars) * 100);
}

currency currency::add(const currency &x) const
{
	long a1, a2, a3;
	currency result;
	a1 = dollars * 100 + cents;
	if (sign == minus)a1 = -a1;

	a2 = x.dollars * 100 + x.cents;
	if (x.sign == minus)a2 = -a2;

	a3 = a1 + a2;

	if (a3 < 0) {
		result.sign = minus;
		a3 = -a3;
	}
	else result.sign = plus;
	result.dollars = a3 / 100;
	result.cents = a3 - result.dollars * 100;

	return result;
}

currency & currency::increment(const currency &x)
{
	*this = add(x);
	return *this;
}

void currency::output() const
{
	if (sign == minus) std::cout << '-';
	std::cout << '$' << dollars << '.';
	if (cents < 10) std::cout << '0';
	std::cout << cents;
}

void currency::input()
{
	double userValue;
	std::cout << "please enter the currency value you want" << std::endl;
	std::cin >> userValue;
	if (typeid(userValue) != typeid(double))
		throw "the input value must be double";
	setValue(userValue);
}

currency currency::subtract(const currency &x) const
{
	long a1, a2, a3;
	currency result;

	a1 = dollars * 100 + cents;
	if (sign == minus) a1 = -a1;

	a2 = x.dollars * 100 + x.cents;
	if (sign == minus) a2 = -a2;

	a3 = a1 - a2;

	if (a3<0) { result.sign = minus; a3 = -a3; }
	result.dollars = a3 / 100;
	result.cents = a3 - result.dollars * 100;

	return result;
}

currency currency::percent(double x) const
{
	if (x >= 1 || x<0)
		throw "percent x should be 0<x<1";
	long a1, a2;
	currency result;

	a1 = dollars * 100 + cents;
	a2 = a1 * x;

	if (sign == minus) { a2 = -a2; result.sign = minus; }
	result.dollars = a2 / 100;
	result.cents = (a2 - result.dollars * 100) / 1;

	return result;
}

currency currency::multiply(double x) const
{
	if (x<1)
		throw "use percent function";

	long a1, a2;
	currency result;

	a1 = dollars * 100 + cents;
	a2 = a1 * x;

	if (sign == minus) { a2 = -a2; result.sign = minus; }
	result.dollars = a2 / 100;
	result.cents = (a2 - result.dollars * 100) / 1;

	return result;
}

currency currency::divide(double x) const
{
	if (x<1)
		throw "currency have to devide with 1<";

	long a1, a2;
	currency result;
	a1 = dollars * 100 + cents;
	a2 = a1 / x;

	if (sign == minus) { a2 = -a2; result.sign = minus; }
	result.dollars = a2 / 100;
	result.cents = (a2 - result.dollars * 100) / 1;

	return result;
}
