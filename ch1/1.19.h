#pragma once
int factorial(int n)
{
	if (n <= 1)
		return 1;
	int fact = 2;
	for (int i = 3; i <= n; i++)
		fact *= i;
	return fact;
}