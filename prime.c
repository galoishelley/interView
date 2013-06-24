#include <stdio.h>

/*************************************************
Description:
this is prime
create_version_date:20130619
*************************************************/

void fPrime()
{
	int i = 0,k = 0,j = 0;
	
	printf("this is [100-200] prime list:\n",j);
	for(i = 101; i <= 200; i += 2 )
	{
		k = sqrt(i);
		for(j = 2; j <= k; j++)
		{
			if( i%j == 0 )
			{
				break;
			}
		}
		if( j >= k + 1 )
			printf("%3d\t",i);
	}
	printf("\n");
}

int main()
{
	fPrime();
	
	system("PAUSE");
	return 1;
}
