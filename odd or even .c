#include<stdio.h>
int main()
{
	int num;
	printf("Enter the value of num \n");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("the number is even = %d",num);
	}
	else
	{
		printf("the number is odd = %d",num);
	}
	return 0;
}
