#include <stdio.h>

/*************************************************
Description:
2/1+3/2+5/3+8/5+13/8+21/13=?
create_version_date:20130624
*************************************************/

void func(const int n)
{
	int i = 0,fb1 = 1, fb2 = 1,k = 0, h = 0,tmp = 0;
	
	for(i = 1; i <= n/2; i++)
	{
		fb1 = fb1 + fb2;
		printf("%d\\%d+", fb1, fb2);
		
		k = fb1/fb2;
		fb2 = fb1 + fb2;
		printf("%d\\%d", fb2, fb1);
		
		h = fb2/fb1;
		tmp += k+h;
		
		if(i != n/2 )
		{
			printf("+");
		}
	}
	printf("=%d\n",tmp);
}

int main()
{
	int i = 0;
	scanf("%d",&i);
	func(i);
	
	system("PAUSE");
	return 1;
}
