#include <stdio.h>

/*************************************************
Description:
not whole divide 3
create_version_date:20130619
*************************************************/

void func()
{
	int i = 0;
	for(i = 100; i <= 200; i++)
	{
		if(i%3)
		{
			printf("%d\t",i);
		}
	}
	printf("\n");
}

int main()
{
	func();
	
	system("PAUSE");
	return 1;
}
