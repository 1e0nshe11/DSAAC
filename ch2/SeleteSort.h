#pragma once
template<class T>
void seletesort(T a[], int n)
{
	int i, j, index;
	T value;
	bool sorted = false;
	for (i = 0; !sorted&&i < n - 1; i++)
	{
		index = i;
		sorted = true;
		for (j = i + 1; j != n; j++)
		{
			if (a[index] > a[j])
				index = j;
			else sorted = false;
		}
		if (i != index)
		{
			value = a[index];
			a[index] = a[i];
			a[i] = value;
		}
	}
}