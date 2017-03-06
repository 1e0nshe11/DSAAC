#include"2.7.h"
#include<iostream>

template<class T>
void rank(T a[], int n, int r[])
{
	for (int i = 0; i < n; i++)
		r[i] = 0;
	for (int i = 1; i < n; i++)
		for (int j = 0; j < i; j++)
			if (a[j] <= a[i])
				r[i]++;
			else r[j]++;
}
int main()
{
	int a[9] = { 3,2,6,5,9,4,7,1,9 };
	int r[9];
	rank(a, 9, r);
	for(auto i:r)
	std::cout << i << std::endl;
	system("pause");
	return 0;
}