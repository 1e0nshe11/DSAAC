#pragma once
template<class T>
void bubblesort(T a[], int n)
{
	int i, j;
	T value;
	for (i = 0; i <n; i++)
	{
		for (j = 0; j <n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				value = a[j];
				a[j] = a[j + 1];
				a[j + 1] = value;
			}
		}
	}
}