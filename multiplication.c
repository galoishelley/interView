#include <stdio.h>

/*************************************************
Description:
this is multiplication
create_version_date: 2013-06-18
*************************************************/

int func(int k)
{
	if(0 == k || 1 == k)
	{
		return 1;
	}

	return func(k - 1)*k;
}

int main()
{
	int i=0;
	scanf("%d", &i);
	printf("%d!=%d\n", i, func(i));
	
	system("PAUSE");
	return 1;
}
