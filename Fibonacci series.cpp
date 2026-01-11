#include<stdio.h>
int main ()
{
	int i,n,a,b,c;
	printf("Enter the initial values \n");
	scanf("%d%d",&a,&b);
	printf("Enter the value of n \n");
	scanf("%d",&n);
	printf(" \n %d \t %d \t ",a,b);
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		printf("%d \t",c);
		a=b;
		b=c;
	}
	return 0;
}
