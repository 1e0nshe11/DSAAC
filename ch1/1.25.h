#pragma once
#include<iostream>
#include<vector>
using namespace std;

void print_subset(int n, int *a, int index)
{
	if (index == n)
	{
		for (int i = 0; i<index; i++)
			if (a[i])printf("%d ", i);
		printf("\n");
		return;
	}
	a[index] = 1;
	print_subset(n, a, index + 1);
	a[index] = 0;
	print_subset(n, a, index + 1);
}