<<<<<<< HEAD
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
=======
﻿#include <stdio.h>

/*
无符号整型i,二进制从右向左第n个数开始,对m个数取反,其他值不变.
例如:i=01011,m=3,n=2 则运行的结果为:00101

总结
异或:遇到0是本身 遇到1取反 与1异或相当于取反

With unsigned integer i,toggle m bits start from n (back to front)
e.g.
input:i=01011,m=3,n=2
output:00101

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
>>>>>>> f7845781f474476b714cac983f55691904e3ceae
