#include <stdio.h>

/*************************************************
Description:
this is translatePwd
create_version_date:20130619
*************************************************/

void func()
{
	char c;
	while( (c = getchar()) != '\n' )
	{
		if( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') )
		{
			c += 4;
			if(c > 'Z' && c <= 'Z' + 4 || c > 'z')
			{
				c -= 26;
			}
		}
		printf("%c",c);
	}
	printf("\n");
}

int main()
{
	func();
	system("PAUSE");
	return 1;
}
