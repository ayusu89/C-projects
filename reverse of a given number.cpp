#include<stdio.h>
int main()
{
	int num,rem,rev=0,a;
	printf("Enter the value of number \n");
	scanf("%d",&num);
	a=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	 printf("Reverse of a given number = %d",rev); 	
	 return 0;
}
