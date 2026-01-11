#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int num , i ,flag=1;
	printf("Enter the number \n ");
	scanf("%d",&num);
	if(num<=1)
	{
		printf("Given number is not a prime number \n");
		exit(1);
	}
	for (i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("Given number is prime number \n");
	}
	else 
	{
		printf("Given number is not a prime number \n");
	}
	return 0;
}
