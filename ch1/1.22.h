#pragma once

// 1)
// A(1,2)=4
// A(2,1)=4
// A(2,2)=16

// 2)
// A(i,j)=A(i-1,A(i,j-1)) i>=2&&j>=2   A(i,j)=A(i-1,2) i>=2&&j=1 is the recursive component, 
// A(i,j)=2^j i=1&&j>=1 is the base component.

// 3)
int ack(unsigned int i, unsigned int j)
{
	while (i > 1)
	{
		if (j == 1)
			j = 2;
		else
			j = ack(i, j - 1);
		i = i - 1;
	}
	return 2 ^ j;
}