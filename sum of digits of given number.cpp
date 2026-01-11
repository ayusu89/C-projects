#include<stdio.h>
int main()
{
	int num,rem,sum=0;
	printf("Enter the value of num \n");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("sum of digits of given number = %d ",sum);
	return 0;
}
