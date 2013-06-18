#include <stdio.h>

/*************************************************
Description:
int overflow,max is 2^32-1 = 2147483647 .min is -(2^32) = -2147483648.
this is min number when int overflow
create_version_date: 2013-06-18
*************************************************/

int func()
{
	int i = 1,k = 1;
	
	for(i = 1; i < 32; i++)
	{
		k = k * 2;
	}
	
	return k - 1;
}

int main()
{	
	printf("this is  k =  %d\n",func());
	printf("overflow k = %d\n",func() + 1);
	
	system("PAUSE");
	return 1;
}
