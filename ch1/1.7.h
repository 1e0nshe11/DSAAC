#pragma once
template<typename T>
int mismatch(T*a, T*b, int n)
{
	for (auto i = 0; i != n; i++)
		if (a[i] != b[i])
			return i;
}