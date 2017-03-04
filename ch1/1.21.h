#pragma once

// 1)
// f(5)=8
// f(7)=11

// 2)
// f(3n+1) is the recursive component, 
// n/2 is the base component.
// when n is odd, 3n+1 is always even.
// so the recursive component could be convert to base component.

// 3)
long evenOdd(long n)
{
	if (n % 2 == 0) return n / 2;
	else return evenOdd(3 * n + 1);
}

// 4)
long evenOddV2(long n)
{
	if (n % 2 == 0) return n / 2;
	else return (3 * n + 1) / 2;
}