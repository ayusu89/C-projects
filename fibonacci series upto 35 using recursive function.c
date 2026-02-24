#include<stdio.h>
int fib (int n);
int main()
{
	int i,result ;
	for(i=0;i<35;i++)
	{
		result = fib(i);
		printf("%d \t",result);
	}
	return 0;
}
int fib(int n)
{
	if (n==0||n==1)
	{
		return n;
	}
	else
	{
		return (fib(n-1) + fib(n-2));
	}
}
