#include <stdio.h>

/*
**校验输入的数,是否是回文数.
**check whether the input integer number palindrome
**create_version_time:20130617
*/

/*function_1*/
int fJudge_1(long k)
{
	long n=0,temp=k;
	
	while(temp)
	{
		n = n*10 + temp%10;
		temp = temp/10;
	}
	
	return n == k?1:0;
}

/*function_2*/
int fJudge_2(long k)
{
	int i=0,j=0;
	char m[10];
	char *pb=NULL,*pe=NULL;
	
	sprintf(m,"%ld",k);
	pb=m;
	pe=&m[strlen(m)-1];
	
	for(i=0,j=strlen(m)-1; i<strlen(m),j>0; i++,j--)
	{
		if(*pb++ != *pe--)
		{
			return 0;
		}
	}
	
	return 1;
}

/*1000 以内的回文数
**[0-1000] contain palindrome
*/
void fFindPalindrome(const long iMin,const long iMax)
{
	printf("\n[%ld-%ld] contain palindrome list:\n",iMin,iMax);
	int i=0;
	for(i=iMin; i<=iMax; i++)
	{
		if( fJudge_1(i) )
		{
			printf("%4ld\t",i);
		}	
	}
	printf("\n");
}

int main()
{
	long i=0;

	printf("please input integer munber:\n");
	scanf("%ld",&i);
		
	printf("fJudge_1:input %d,this is %d palindrome.\n",i,fJudge_1(i));
	printf("fJudge_2:input %d,this is %d palindrome.\n",i,fJudge_2(i));
	
	fFindPalindrome(1,1000);
	
	system("PAUSE");
	return 1;
}
