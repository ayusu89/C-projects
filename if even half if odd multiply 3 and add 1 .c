#include<stdio.h>
int main()
{
	int num ,evenNum = 0 ,oddNum = 0;
	printf("Enter the value of number \n");
	scanf("%d",&num);
	if (num<1)
	{
		printf("\"ERROR\"");
	}
	else if (num%2==0)
	{	
		evenNum=num/2;
		printf("given number is even = %d ",evenNum);
		
	}
	else
	{
		oddNum=num*3+1;
		printf("given number is odd = %d ",oddNum);
	}	
	
	return 0;
}
	
	
