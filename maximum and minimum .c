#include<stdio.h>
int main()
{
	int num1,num2 ,max;
	printf("Enter the value of any two numbers\n");
	scanf("%d%d",&num1 ,&num2 );
	max=(num1>num2)?num1:num2;
	printf("The largest number = %d",max);
	return 0;
}
