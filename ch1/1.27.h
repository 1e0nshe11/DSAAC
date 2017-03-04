#pragma once

template<class InputIt, class T>
T accumulate(InputIt begin, InputIt end, T initialValue)
{
	for (; begin != end; ++end) {
		initialValue = initialValue + *begin;
	}
	return  initialValue;
}