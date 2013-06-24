#include <stdio.h>

/*************************************************
Description:
printf
create_version_date:20130620
/************************************************/

int main()
{
	float f = -123.456;
	printf("%f|%10f|%10.2f|%.2f|%-10.2f|%3f|\n",f,f,f,f,f,f);
	printf("|%e|%11.2e|\n",f,f);
	printf("\n");
	
	float g = 123.456;
	printf(" %f| %10f|%10.2f| %.2f|%-10.2f|%3f|\n",g,g,g,g,g,g);
	printf("|%e|%11.2e|\n",f,f);
	printf("\n");
	
	char c = 'A';
	printf("%c,%d,%o,%x\n",c,c,c,c);
	printf("\n");
	
	long n = 1234567;
	printf("%ld,%lo,%x\n",n,n,n);
	printf("\n");
	
	unsigned u=65535;
	printf("%u,%o,%x,%d\n",u,u,u,u);
	printf("\n");
	
	printf("%s,%5.3s\n","computer","computer");
	printf("\n");
	
	system("PAUSE");
	return 1;
}
