#include <stdio.h>

int main()
{
	char c1;
	int i = 99;
	unsigned int j = i ;
	
	printf("%c\n",j);
	
	int a=12;
	
	printf("%d\n",a+=a-=a*=a);
	
	c1=97;
	printf("%c,%d\n",c1,c1);
	
	system("PAUSE");
	return 1;
}
