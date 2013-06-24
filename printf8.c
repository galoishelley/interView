#include <stdio.h>

/*************************************************
Description:
   *
  ***
 *****
*******
 *****
  ***
   *
create_version_date:20130624
*************************************************/

void func()
{
	int i = 0,j = 0,k = -1,b = 4;
	
	for(i = 1; i <= 7; i++)
	{
		if( i <= 4)
		{	
			b--;
			k++;
		}
		if( i > 4)
		{
			b++;
			k--;
		}
		
		for(j = 1; j <= b; j++)
		{
			printf(" ");
		}
		
		for(j = 1; (j <= 2*k + 1 && k <= 3 ); j++)
		{
			printf("*");
		}

		printf("\n");
	}
}

int main()
{
	func();
	
	system("PAUSE");
	return 1;
}
