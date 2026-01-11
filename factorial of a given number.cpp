#include<stdio.h>
int main ()
{
	int num , i;
	long int fact=1 ;
	printf("Enter any number \n");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of a given number = %ld",fact);
	return 0;
	
}
