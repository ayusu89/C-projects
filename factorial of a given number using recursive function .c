#include<stdio.h>
long int fact (int n);
int main()
{
	int f,num;
	printf("Enter the value of n \n");
	scanf("%d",&num);
	f=fact(num);
	printf("Factorial of a given function = %ld",f);
	return 0;
}
long int fact (int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return n * fact(n-1);
		
	}
}
