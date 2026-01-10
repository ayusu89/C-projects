#include<stdio.h>
int main()
{
	int num;
	printf("Enter the value of num\n");\
	scanf("%d",&num);
	if(num<1)
	{
		printf("ERROR");
	}
	else
	{
		if(num%2==0)
		{
			num=num/2;
			
		}
		else
		{
			num=num*3+1;
		}
		printf("The number = %d",num);
	}
	return 0;
}
