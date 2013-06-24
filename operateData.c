#include <stdio.h>

/*************************************************
Description:
operate int data
create_version_date:20130622
*************************************************/

int fFindBit(const int i)
{
	int j = 0,tmp = i;
	while(tmp)
	{
		tmp /= 10;
		j++;
	}
	return j;
}

void fPrintData(const int i)
{
	int tmp = i,j = 0;
	while(tmp)
	{
		j = tmp%10;
		printf("%d",j);
		tmp /= 10;
	}
	printf("\n");
}

int main()
{
	int i=0;
	
	scanf("%d", &i);
	printf("is %d number\n", fFindBit(i));
	
	fPrintData(i);
	
	system("PAUSE");
	return 1;
}
