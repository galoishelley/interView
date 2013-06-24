#include <stdio.h>

int main()
{	/*
	float x = 2.5, y = 4.7;
	int a = 7;
	int b = x+a%3*(int)(x+y)%2/4;*/
	
	int a = 2, b = 3, x = 3.5, y = 2.5;
	float c = (float)(a+b)/2+(int)x%(int)y;
	
	printf("%f\n",c);
	
	
	system("PAUSE");
	return 1;
}
