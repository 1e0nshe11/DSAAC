#pragma once

template<typename T>
void fill(T*a int start, int end, const T&value)
{
	for (int i = start; i != end; i++)
		a[i] = value;
}