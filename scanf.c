#include <stdio.h>

/*************************************************
Description:
scanf
1-
a=10 b=20 c1='A' c2='a' x=1.5 y=-3.75 z=67.8
keyborad input:
 
2-
a=3 b=7 x=8.5 y=71.82,c1='A' c2='a'
keyboard input: 
a=3 b=7
8.5 7.182e+001
A a
create_version_date:20130620
/************************************************/

int main()
{
	int		a,b;
	float	x,y,z;
	char	c1,c2;
	
	/*
	scanf("%5d%5d%c%c%f%f%*f,%f",&a,&b,&c1,&c2,&x,&y,&z);
	printf("%5d%5d%c%c%f%f%*f,%f",a,b,c1,c2,x,y,z);
	system("PAUSE");
	return 1;*/
	
	scanf("a=%d b=%d", &a, &b);
	printf("a=%d,b=%d\n", a, b);
	
	scanf(" %f %e", &x, &y);
	printf("x=%f,y=%f\n", x, y);
	
	scanf(" %c %c", &c1, &c2);
	printf("c1=%c,C2=%C\n", c1, c2);
	
	system("PAUSE");
	return 1;
}
