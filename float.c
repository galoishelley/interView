#include <stdio.h>

/*************************************************
Description:
float precision,valid is 7 Number,other is invalid.
create_version_date: 2013-06-18
*************************************************/

int main()
{
	float a,b,c;
	double d;
	
	a = 123456.789e5;
	b = a + 20;
	
	printf("%f\n",a);
	printf("%f\n",b);
	
	printf("1.0/3.0*3 = %f\n",1.0/3.0*3);
	
	c = 111111.111;
	printf("%f\n",c);
	
	d = 111111.111;
	printf("%f\n",d);
	
	system("PAUSE");
	return 1;
}
