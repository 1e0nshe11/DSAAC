#pragma once
template<typename T1,typename T2>
bool IsInArray(T1&array, T2&value, int index)
{
	if (arr[index] == val) 
		return true;
	else if (arr[index] != val&&index == 0) 
		return false;
	else 
		return isInArray(arr, val, index - 1);
}