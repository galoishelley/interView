#include <stdio.h>

/*************************************************
Description:
lowercase to A
create_version_date:20130620
/************************************************/

void func()
{	
	putchar(getchar());
}

int main()
{
	char c1,c2;
	
	c1 = getchar();
	if( c1 < 65 || c1 > 96 )
	{
		printf("please rewrite lowercase\n");
		
		system("PAUSE");
		return 1;
	}
	
	printf("%c,%d\n",c1,c1);
	
	c2 = c1 + 32;
	printf("%c,%d\n",c2,c2);
	
	func();
	
	system("PAUSE");
	return 1;
}
