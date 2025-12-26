#include<stdio.h>
int main()
{
	int num,rem,rev=0;
	printf("Enter the value of number \n");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("reverse of number=%d",rev);
	return 0;
}
