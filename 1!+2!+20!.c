#include <stdio.h>

/*************************************************
Description:
1!+2!+...+20!+...=?
create_version_date:20130624
*************************************************/

int fMultiply(const int n)
{
	if( n == 0 || n == 1)
		return 1;
	return fMultiply(n-1)*n;
}

void func(const int n)
{
	int i = 0,tmp = 0;
	
	for(i = 1; i <= n; i++)
	{
		tmp += fMultiply(i);
	}
	printf("this is 1-%d multiply %d\n", n, tmp);
}

int main()
{
	int i;
	scanf("%d",&i);
	func(i);
	
	system("PAUSE");
	return 1;
}
