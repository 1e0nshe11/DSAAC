#pragma once

int factorial(int n)
{
	if (n <= 1)
		return 1;
	int sum = 1;
	for (; n != 0; n--)
		sum *= n;
	return sum;
}
