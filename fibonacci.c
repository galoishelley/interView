#include <stdio.h>

/*************************************************
Description:
fibonacci
create_version_date:20130619
*************************************************/

void func()
{
	long f1 = 1,f2 = 1;
	int i = 0;
	
	for(i = 1; i <= 20; i++)
	{
		printf("%12ld %12ld ",f1,f2);
		if(i%2 == 0) printf("\n");
		f1 = f1 + f2;
		f2 = f1 + f2;
	}
	printf("\n");
}

int main()
{
	func();
	system("PAUSE");
	return 1;
}
