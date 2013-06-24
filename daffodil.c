#include <stdio.h>

/*************************************************
Description:
153 = 1^3 + 5^3 + 3^3
create_version_date:20130624
*************************************************/

void func()
{
	int i = 0,k = 0,tmp = 0,j = 0;
	for(i = 100; i <= 999; i++)
	{
		tmp = i;
		j = 0;
		while(tmp)
		{
			k = tmp%10;
			tmp /= 10;
			j += k*k*k;
		}
		
		if( i == j )
		{
			printf("this is daffodil %d\n", i);
		}
	}
	
}

int main()
{
	func();
	
	system("PAUSE");
	return 1;
}
