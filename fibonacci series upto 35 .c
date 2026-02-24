#include<stdio.h>
int fib (int n);
int main()
{
	int i,result ;
	for(i=0;i<35;i++)
	{
		result = fib (i);
		printf("%d",result);
	}
	return 0;
}
int fib (int n)
{
	if (n==1||n==0)
	{
		return n;
	}
	else
	{
		return (fib(n-1) + fib(n-2));
	}
}
