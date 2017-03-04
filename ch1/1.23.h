#pragma once

// 1)
// gcd(20,30)=10
// gcd(112,42)=14


// 2)
// gcd(x,y)=gcd(y,x mod y), y>0 is the recursive component, 
// gcd(x ,y)=x, y=0 is the base component.

//A formal proof can be provided using induction.We provide an informal proof.
//When x < y, the first application of the definition gives us gcd(x, y) = gcd(y, x mod y) = gcd(y, x).
// Following this, the first parameter is > the second. So, we may consider only the case when x >= y. 
//
//When x = y, an application of the definition results in gcd(x,y) = gcd(y, x mod y) = gcd(y,0) 
//which is an occurrence of gcd in the base component. 
//
//When x > y, an application of the definition results in gcd(x,y) = gcd(y, x mod y) = gcd(y,z), where 0 <= z < y. 
//Each application of the recursive component decreases the second parameter.
//Therefore, after a sufficient number of applications (at most y), 
//the second parameter will become 0 and we will have an occurrence of gcd which is in the base component. 


// 3)
unsigned int GCD(unsigned int  a, unsigned int  b) 
{
	if (b) 
		while ((a %= b) && (b %= a));
	return a + b;
}