#pragma once
template<typename T>
void iota(T a[],int n,const T&value)
{
	for (auto i = 0; i != n; i++)
		a[i]=a[i]+value;
 }