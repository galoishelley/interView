#include <stdio.h>

/*
Unsigned int i,the n binary numbers from right to left starting number for m negated,
other values unchanged.
For example: i = 01011, m = 3, n = 2 the results of runs: 00101

summary:
XOR: X XOR 0 is X, X XOR 1 is negated X, with 1 XOR equivalent itself negated.

version of time:20130616
*/

unsigned int func(unsigned int i,int m,int n)
{
	unsigned int k=~0;
	k = k >> sizeof(int)*8 - m << n - 1; 
	return k^i;
}

int main()
{
	printf("sizeof(int)=%d\n",sizeof(int));
	printf("%d\n",func(11,3,2));
	
	system("PAUSE");
	return 1;
}
