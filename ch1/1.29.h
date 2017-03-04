#pragma once
template<class Input,class Output>
Output copy(Input first, Input last, Output d_first)
{
	while (*first != *last)
		*d_first++ = *first++;
	return d_first;
}