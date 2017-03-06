#pragma once
template<class T>
void insertsort(T a[], int n)
{
	int i, j;
	for (i = 1; i <n; i++)
	{
		T value = a[i];
		for (j = i - 1; j >= 0 && a[j] > value; j--)
			a[j + 1] = a[j];
		a[j + 1] = value;
	}
}