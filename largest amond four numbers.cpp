#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the value of numbers \n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&&a>c&&a>d)
	{
	printf("The largest number is %d",a);
	}
	else if(b>c&&b>d&&b>a)
	{
		printf("The largest nukmber is %d",b);
	}
	else if (c>a&&c>b&&c>d)
	{
		printf("The largest number is %d",c);
	}
	else 
	{ 
		printf("The largest number is %d",d);
	}
	return  0;
	
}
