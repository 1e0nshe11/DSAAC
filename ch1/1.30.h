#pragma once
#include<iterator>
#include<algorithm>
using namespace std;

template<class T>
void permutations(T list[],int m)
{
	sort(list, list + m + 1);
	do {
		copy(list, list + m + 1, ostream_iterator<T>(cout, ""));
		cout << endl;
	} while (next_permutation(list, list + m + 1));
}