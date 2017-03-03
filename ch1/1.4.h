#pragma once
template<typename T>
T inner_product(T a[], T b[],int n)
{
	T sum = a[0] * b[0];
	for (auto i = 1; i != n; i++)
		sum += a[i] * b[i];
	return sum;
}