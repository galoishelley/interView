#include <stdio.h>

/*************************************************
Descrption:
this is leap year
create_version_date: 20130622
*************************************************/

int func(const int iYears)
{
	if( (iYears%4 == 0 && iYears%100 !=0) || iYears%400 == 0 )
		return 1;
	else
		return 0;
}

int main()
{
	int iYear=0;
	
	scanf("%d", &iYear);
	printf("this is %d a leap year\n", func(iYear) );
	
	system("PAUSE");
	return 1;
}
