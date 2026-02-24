#include<stdio.h>
void sum (int x , int y);
int main()
{
	int a,b;
	printf("Enter the value of a and b \n");
	scanf("%d%d",&a,&b);
	sum(a,b);
	return 0;
}
void sum (int x ,int y)
{
	int r;
	r = x+y;
	printf("Sum of two numbers = %d",r);
}

