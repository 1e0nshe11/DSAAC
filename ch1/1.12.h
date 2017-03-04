#pragma once
template<class T>
void make2Array(T**&x, int numberOfRows, T*rowSize)
{
	x = new T*[numberOfRows];
	for (int i = 0; i < numberOfRows; i++)
		x[i] = rowSize;
}