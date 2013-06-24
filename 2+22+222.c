#include <stdio.h>

/*************************************************
Description:
2+22+222+2222+22222+....=?
create_version_date:20130624
*************************************************/

int func(const int n)
{
	int j = 0,k = 0,tmp = 0;
	
	for(j = 1; j <= n; j++)
	{
		k = k*10 + 2;
		tmp += k;
	}
	return tmp;
}

int main()
{
	int i;
	scanf("%d",&i);
	printf("%d\n", func(i));
	
	system("PAUSE");
	return 1;
}
