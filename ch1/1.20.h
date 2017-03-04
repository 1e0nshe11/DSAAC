#pragma once

// 1)
unsigned int fibonacci(unsigned int n)
{
	if (n < 2)
		return n;
	else return fibonacci(n - 1) + fibonacci(n - 2);
}

// 2)


// 3)
unsigned int FibonacciV2(unsigned int n)
{
	unsigned int* result = new unsigned int[n];
	result[0] = 0;
	result[1] = 1;
	for (int i = 2; i<n + 1; i++)
	{
		result[i] = result[i - 2] + result[i - 1];
	}
	return result[n];
}
