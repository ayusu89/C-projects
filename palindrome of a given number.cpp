#include<stdio.h>
int main()
{
	int num,rev=0,rem,a;
	printf("Enter the value of number \n ");
    scanf("%d",&num);
    a=num;
    while(num!=0)
    {
    	rem=num%10;
    	rev=rev*10+rem;
    	num=num/10;
    	
	}
	if(a==rev)
	{
		printf("Given number is palindrome \n");
	}
	else
	{
		printf("Given number is not a palindrome \n");
	}
	return 0;
}
