#pragma once

template<class InputIt,class T,class BinaryOperaton>
T accumulate(InputIt begin, InputIt end, T initialValue,BinaryOperation op)
{
	for (; begin != end; ++begin) {
		initialValue = op(initialValue, *begin);
	}
	return initialValue;
}