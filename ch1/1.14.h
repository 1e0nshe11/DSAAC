#pragma once
template<class T>
void changeLength2D(T**&x, int oldLength, int newLength, int numberOfColumns)
{
	T ** newArray = new T *[newLength];
	for (int i = 0; i<oldLength; i++)
	{
		newArray[i] = new T[numberOfColumns];
		newArray[i] = x[i];
		delete[] x[i];
	}
	return newArray;
}